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

// Function: sub_0033BF40
// Address: 0x33bf40 - 0x33c390
void sub_0033BF40_0x33bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BF40_0x33bf40");
#endif

    switch (ctx->pc) {
        case 0x33bf98u: goto label_33bf98;
        case 0x33c00cu: goto label_33c00c;
        case 0x33c110u: goto label_33c110;
        case 0x33c158u: goto label_33c158;
        case 0x33c260u: goto label_33c260;
        case 0x33c268u: goto label_33c268;
        case 0x33c2a8u: goto label_33c2a8;
        case 0x33c338u: goto label_33c338;
        case 0x33c340u: goto label_33c340;
        case 0x33c348u: goto label_33c348;
        case 0x33c350u: goto label_33c350;
        default: break;
    }

    ctx->pc = 0x33bf40u;

    // 0x33bf40: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x33bf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x33bf44: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x33bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x33bf48: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x33bf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x33bf4c: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x33bf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x33bf50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x33bf50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bf54: 0xafa500a4  sw          $a1, 0xA4($sp)
    ctx->pc = 0x33bf54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
    // 0x33bf58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33bf58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bf5c: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x33bf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x33bf60: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x33bf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x33bf64: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x33bf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x33bf68: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x33bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x33bf6c: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x33bf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x33bf70: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x33bf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
    // 0x33bf74: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x33bf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
    // 0x33bf78: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x33bf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x33bf7c: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x33bf7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x33bf80: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x33bf80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x33bf84: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x33bf84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x33bf88: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x33bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33bf8c: 0xafa600a8  sw          $a2, 0xA8($sp)
    ctx->pc = 0x33bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 6));
    // 0x33bf90: 0xc0cead0  jal         func_33AB40
    ctx->pc = 0x33BF90u;
    SET_GPR_U32(ctx, 31, 0x33BF98u);
    ctx->pc = 0x33BF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BF90u;
    // 0x33bf94: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB40u, 0x33BF90u, 0x33BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF98u;
label_33bf98:
    // 0x33bf98: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x33bf9c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x33bf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x33bfa0: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x33bfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x33bfa4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x33bfa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bfa8: 0x2442c210  addiu       $v0, $v0, -0x3DF0
    ctx->pc = 0x33bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951440));
    // 0x33bfac: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x33bfacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33bfb0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x33bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C234u));
    // 0x33bfb4: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x33bfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61C240u));
    // 0x33bfb8: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x33bfb8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x33bfbc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x33bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x33bfc0: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x33BFC0u;
    {
        const bool branch_taken_0x33bfc0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x33BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFC0u;
        // 0x33bfc4: 0x64880a  movz        $s1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bfc0) {
            ctx->pc = 0x33BFECu;
            goto label_33bfec;
        }
    }
    ctx->pc = 0x33BFC8u;
    // 0x33bfc8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x33bfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x33bfcc: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x33bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x33bfd0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x33bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x33bfd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33BFD4u;
    {
        const bool branch_taken_0x33bfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFD4u;
        // 0x33bfd8: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bfd4) {
            ctx->pc = 0x33BFE8u;
            goto label_33bfe8;
        }
    }
    ctx->pc = 0x33BFDCu;
    // 0x33bfdc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33bfe0: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x33bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x33bfe4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x33bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_33bfe8:
    // 0x33bfe8: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x33bfe8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_33bfec:
    // 0x33bfec: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x33bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x33bff0: 0x24d0c210  addiu       $s0, $a2, -0x3DF0
    ctx->pc = 0x33bff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951440));
    // 0x33bff4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x33bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33bff8: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x33bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x33bffc: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33BFFCu;
    {
        const bool branch_taken_0x33bffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x33bffc) {
            ctx->pc = 0x33C000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BFFCu;
            // 0x33c000: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C020u;
            goto label_33c020;
        }
    }
    ctx->pc = 0x33C004u;
    // 0x33c004: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33C004u;
    SET_GPR_U32(ctx, 31, 0x33C00Cu);
    ctx->pc = 0x33C008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C004u;
    // 0x33c008: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33C004u, 0x33C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C00Cu;
label_33c00c:
    // 0x33c00c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x33c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x33c010: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x33c010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x33c014: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x33c014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x33c018: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x33c018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x33c01c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x33c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_33c020:
    // 0x33c020: 0x8e0a004c  lw          $t2, 0x4C($s0)
    ctx->pc = 0x33c020u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x33c024: 0x2629021  addu        $s2, $s3, $v0
    ctx->pc = 0x33c024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x33c028: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x33c028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x33c02c: 0x122000c8  beqz        $s1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x33C02Cu;
    {
        const bool branch_taken_0x33c02c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C02Cu;
        // 0x33c030: 0x8e090068  lw          $t1, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c02c) {
            ctx->pc = 0x33C350u;
            goto label_33c350;
        }
    }
    ctx->pc = 0x33C034u;
    // 0x33c034: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x33c034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33c038: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33c038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33c03c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33C03Cu;
    {
        const bool branch_taken_0x33c03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C03Cu;
        // 0x33c040: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c03c) {
            ctx->pc = 0x33C058u;
            goto label_33c058;
        }
    }
    ctx->pc = 0x33C044u;
    // 0x33c044: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x33c044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x33c048: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x33c048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x33c04c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c050: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x33c050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x33c054: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x33c054u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33c058:
    // 0x33c058: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x33c058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x33c05c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x33c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33c060: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x33c060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33c064: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x33c064u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33c068: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x33c068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
    // 0x33c06c: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x33c06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x33c070: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x33c070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x33c074: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x33c074u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33c078: 0x8c74000c  lw          $s4, 0xC($v1)
    ctx->pc = 0x33c078u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x33c07c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x33c07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x33c080: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x33c080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x33c084: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x33c084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x33c088: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x33c088u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x33c08c: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x33c08cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x33c090: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x33c090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c094: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x33c094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x33c098: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x33c098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x33c09c: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x33c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x33c0a0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x33c0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c0a4: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x33c0a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x33c0a8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x33c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x33c0ac: 0x7a230040  lq          $v1, 0x40($s1)
    ctx->pc = 0x33c0acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x33c0b0: 0x1880009d  blez        $a0, . + 4 + (0x9D << 2)
    ctx->pc = 0x33C0B0u;
    {
        const bool branch_taken_0x33c0b0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x33C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C0B0u;
        // 0x33c0b4: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c0b0) {
            ctx->pc = 0x33C328u;
            goto label_33c328;
        }
    }
    ctx->pc = 0x33C0B8u;
    // 0x33c0b8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x33c0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x33c0bc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x33c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x33c0c0: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x33c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x33c0c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x33c0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c0c8: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x33c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x33c0cc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x33c0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c0d0: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x33c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x33c0d4: 0xc9b821  addu        $s7, $a2, $t1
    ctx->pc = 0x33c0d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x33c0d8: 0x3484ffdf  ori         $a0, $a0, 0xFFDF
    ctx->pc = 0x33c0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65503);
    // 0x33c0dc: 0x34a5fff7  ori         $a1, $a1, 0xFFF7
    ctx->pc = 0x33c0dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65527);
    // 0x33c0e0: 0x3463feff  ori         $v1, $v1, 0xFEFF
    ctx->pc = 0x33c0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65279);
    // 0x33c0e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33c0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33c0e8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x33c0e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x33c0ec: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x33c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x33c0f0: 0xcab021  addu        $s6, $a2, $t2
    ctx->pc = 0x33c0f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x33c0f4: 0xafa800d0  sw          $t0, 0xD0($sp)
    ctx->pc = 0x33c0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 8));
    // 0x33c0f8: 0x24d50008  addiu       $s5, $a2, 0x8
    ctx->pc = 0x33c0f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x33c0fc: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x33c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x33c100: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x33c100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
    // 0x33c104: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x33c104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x33c108: 0xafb700d4  sw          $s7, 0xD4($sp)
    ctx->pc = 0x33c108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 23));
    // 0x33c10c: 0x0  nop
    ctx->pc = 0x33c10cu;
    // NOP
label_33c110:
    // 0x33c110: 0xc6a1fffc  lwc1        $f1, -0x4($s5)
    ctx->pc = 0x33c110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c114: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x33c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c118: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33c118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c11c: 0x0  nop
    ctx->pc = 0x33c11cu;
    // NOP
    // 0x33c120: 0x4500006f  bc1f        . + 4 + (0x6F << 2)
    ctx->pc = 0x33C120u;
    {
        const bool branch_taken_0x33c120 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C120u;
        // 0x33c124: 0x8fa600d4  lw          $a2, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c120) {
            ctx->pc = 0x33C2E0u;
            goto label_33c2e0;
        }
    }
    ctx->pc = 0x33C128u;
    // 0x33c128: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x33c128u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c12c: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x33c12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c130: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x33c130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c134: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33c134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c138: 0x0  nop
    ctx->pc = 0x33c138u;
    // NOP
    // 0x33c13c: 0x45000068  bc1f        . + 4 + (0x68 << 2)
    ctx->pc = 0x33C13Cu;
    {
        const bool branch_taken_0x33c13c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C13Cu;
        // 0x33c140: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c13c) {
            ctx->pc = 0x33C2E0u;
            goto label_33c2e0;
        }
    }
    ctx->pc = 0x33C144u;
    // 0x33c144: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x33c144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33c148: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x33c148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33c14c: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x33c14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x33c150: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x33C150u;
    SET_GPR_U32(ctx, 31, 0x33C158u);
    ctx->pc = 0x33C154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C150u;
    // 0x33c154: 0x8cf30010  lw          $s3, 0x10($a3) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x33C150u, 0x33C158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C158u;
label_33c158:
    // 0x33c158: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x33c158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c15c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x33c15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c160: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x33c160u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x33c164: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x33c164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c168: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x33c168u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x33c16c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x33c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x33c170: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x33c170u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x33c174: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x33c174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x33c178: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x33c178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x33c17c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x33c17cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c180: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x33c180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x33c184: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x33c184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x33c188: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x33C188u;
    {
        const bool branch_taken_0x33c188 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C188u;
        // 0x33c18c: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c188) {
            ctx->pc = 0x33C1A8u;
            goto label_33c1a8;
        }
    }
    ctx->pc = 0x33C190u;
    // 0x33c190: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x33c190u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c194: 0x0  nop
    ctx->pc = 0x33c194u;
    // NOP
    // 0x33c198: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x33C198u;
    {
        const bool branch_taken_0x33c198 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33c198) {
            ctx->pc = 0x33C19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C198u;
            // 0x33c19c: 0xe7b60008  swc1        $f22, 0x8($sp) (Delay Slot)
            { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C1BCu;
            goto label_33c1bc;
        }
    }
    ctx->pc = 0x33C1A0u;
    // 0x33c1a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33C1A0u;
    {
        const bool branch_taken_0x33c1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C1A0u;
        // 0x33c1a4: 0xe7b60000  swc1        $f22, 0x0($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c1a0) {
            ctx->pc = 0x33C1BCu;
            goto label_33c1bc;
        }
    }
    ctx->pc = 0x33C1A8u;
label_33c1a8:
    // 0x33c1a8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x33c1a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c1ac: 0x0  nop
    ctx->pc = 0x33c1acu;
    // NOP
    // 0x33c1b0: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x33C1B0u;
    {
        const bool branch_taken_0x33c1b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33c1b0) {
            ctx->pc = 0x33C1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C1B0u;
            // 0x33c1b4: 0xe7b60008  swc1        $f22, 0x8($sp) (Delay Slot)
            { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C1BCu;
            goto label_33c1bc;
        }
    }
    ctx->pc = 0x33C1B8u;
    // 0x33c1b8: 0xe7b60004  swc1        $f22, 0x4($sp)
    ctx->pc = 0x33c1b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_33c1bc:
    // 0x33c1bc: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x33c1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x33c1c0: 0xc7a70048  lwc1        $f7, 0x48($sp)
    ctx->pc = 0x33c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33c1c4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x33c1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c1c8: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x33c1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33c1cc: 0x460730c2  mul.s       $f3, $f6, $f7
    ctx->pc = 0x33c1ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x33c1d0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x33c1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c1d4: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x33c1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33c1d8: 0x46051202  mul.s       $f8, $f2, $f5
    ctx->pc = 0x33c1d8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x33c1dc: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x33c1dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x33c1e0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x33c1e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x33c1e4: 0x46043182  mul.s       $f6, $f6, $f4
    ctx->pc = 0x33c1e4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x33c1e8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x33c1e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x33c1ec: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x33c1ecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x33c1f0: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x33c1f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x33c1f4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x33c1f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x33c1f8: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x33c1f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x33c1fc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x33c1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x33c200: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x33c200u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x33c204: 0x46012982  mul.s       $f6, $f5, $f1
    ctx->pc = 0x33c204u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x33c208: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x33c208u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x33c20c: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x33c20cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x33c210: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x33c210u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x33c214: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x33c214u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x33c218: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x33c218u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x33c21c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x33c21cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x33c220: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x33c220u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x33c224: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x33c224u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x33c228: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x33c228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33c22c: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x33c22cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33c230: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x33c230u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33c234: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x33c234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33c238: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x33c238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x33c23c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x33c23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x33c240: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x33c240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x33c244: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x33c244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c248: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x33c248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33c24c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x33c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x33c250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33c250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c254: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x33c254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33c258: 0xc1065f8  jal         func_4197E0
    ctx->pc = 0x33C258u;
    SET_GPR_U32(ctx, 31, 0x33C260u);
    ctx->pc = 0x33C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C258u;
    // 0x33c25c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x33C258u, 0x33C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C260u;
label_33c260:
    // 0x33c260: 0xc106784  jal         func_419E10
    ctx->pc = 0x33C260u;
    SET_GPR_U32(ctx, 31, 0x33C268u);
    ctx->pc = 0x33C264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C260u;
    // 0x33c264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x33C260u, 0x33C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C268u;
label_33c268:
    // 0x33c268: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x33c268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c26c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33c26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c270: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x33c270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x33c274: 0xc6550008  lwc1        $f21, 0x8($s2)
    ctx->pc = 0x33c274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33c278: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x33c278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x33c27c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x33c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33c280: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x33c280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33c284: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x33c284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c288: 0x34630108  ori         $v1, $v1, 0x108
    ctx->pc = 0x33c288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)264);
    // 0x33c28c: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x33c28cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x33c290: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x33c290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x33c294: 0xc6540040  lwc1        $f20, 0x40($s2)
    ctx->pc = 0x33c294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33c298: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x33c298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x33c29c: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x33c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x33c2a0: 0xc0d068e  jal         func_341A38
    ctx->pc = 0x33C2A0u;
    SET_GPR_U32(ctx, 31, 0x33C2A8u);
    ctx->pc = 0x33C2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C2A0u;
    // 0x33c2a4: 0xae4200a8  sw          $v0, 0xA8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341A38u, 0x33C2A0u, 0x33C2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C2A8u;
label_33c2a8:
    // 0x33c2a8: 0xe6550008  swc1        $f21, 0x8($s2)
    ctx->pc = 0x33c2a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x33c2ac: 0xe6540040  swc1        $f20, 0x40($s2)
    ctx->pc = 0x33c2acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x33c2b0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x33c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33c2b4: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x33c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x33c2b8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x33c2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c2bc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x33c2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c2c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33c2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33c2c4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x33c2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x33c2c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33c2c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33c2cc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x33c2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x33c2d0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x33c2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x33c2d4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x33c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x33c2d8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x33c2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x33c2dc: 0x0  nop
    ctx->pc = 0x33c2dcu;
    // NOP
label_33c2e0:
    // 0x33c2e0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x33c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x33c2e4: 0x2f4b821  addu        $s7, $s7, $s4
    ctx->pc = 0x33c2e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x33c2e8: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x33c2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x33c2ec: 0x2d4b021  addu        $s6, $s6, $s4
    ctx->pc = 0x33c2ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x33c2f0: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x33c2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x33c2f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33c2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c2f8: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x33c2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33c2fc: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x33c2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x33c300: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x33c300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x33c304: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x33c304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x33c308: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x33c308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x33c30c: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x33c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x33c310: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x33c310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x33c314: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x33c314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
    // 0x33c318: 0x2b4a821  addu        $s5, $s5, $s4
    ctx->pc = 0x33c318u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x33c31c: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x33c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x33c320: 0x1c40ff7b  bgtz        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x33C320u;
    {
        const bool branch_taken_0x33c320 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x33C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C320u;
        // 0x33c324: 0xafa400c8  sw          $a0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c320) {
            ctx->pc = 0x33C110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c110;
        }
    }
    ctx->pc = 0x33C328u;
label_33c328:
    // 0x33c328: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x33c328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x33c32c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33c32cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c330: 0xc1065f8  jal         func_4197E0
    ctx->pc = 0x33C330u;
    SET_GPR_U32(ctx, 31, 0x33C338u);
    ctx->pc = 0x33C334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C330u;
    // 0x33c334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x33C330u, 0x33C338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C338u;
label_33c338:
    // 0x33c338: 0xc106794  jal         func_419E50
    ctx->pc = 0x33C338u;
    SET_GPR_U32(ctx, 31, 0x33C340u);
    ctx->pc = 0x33C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C338u;
    // 0x33c33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x33C338u, 0x33C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C340u;
label_33c340:
    // 0x33c340: 0xc106784  jal         func_419E10
    ctx->pc = 0x33C340u;
    SET_GPR_U32(ctx, 31, 0x33C348u);
    ctx->pc = 0x33C344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C340u;
    // 0x33c344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x33C340u, 0x33C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C348u;
label_33c348:
    // 0x33c348: 0xc0d0988  jal         func_342620
    ctx->pc = 0x33C348u;
    SET_GPR_U32(ctx, 31, 0x33C350u);
    ctx->pc = 0x33C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C348u;
    // 0x33c34c: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342620u, 0x33C348u, 0x33C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C350u;
label_33c350:
    // 0x33c350: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x33c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x33c354: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x33c354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x33c358: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x33c358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x33c35c: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x33c35cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x33c360: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x33c360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x33c364: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x33c364u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x33c368: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x33c368u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x33c36c: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x33c36cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x33c370: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x33c370u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x33c374: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x33c374u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x33c378: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x33c378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x33c37c: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x33c37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x33c380: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x33c380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33c384: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x33c384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33c388: 0x3e00008  jr          $ra
    ctx->pc = 0x33C388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C388u;
        // 0x33c38c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C390u;
}
