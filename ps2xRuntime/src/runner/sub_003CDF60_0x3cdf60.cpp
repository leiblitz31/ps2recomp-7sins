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

// Function: sub_003CDF60
// Address: 0x3cdf60 - 0x3ce268
void sub_003CDF60_0x3cdf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CDF60_0x3cdf60");
#endif

    switch (ctx->pc) {
        case 0x3cdf60u: goto label_3cdf60;
        case 0x3cdf64u: goto label_3cdf64;
        case 0x3cdf68u: goto label_3cdf68;
        case 0x3cdf6cu: goto label_3cdf6c;
        case 0x3cdf70u: goto label_3cdf70;
        case 0x3cdf74u: goto label_3cdf74;
        case 0x3cdf78u: goto label_3cdf78;
        case 0x3cdf7cu: goto label_3cdf7c;
        case 0x3cdf80u: goto label_3cdf80;
        case 0x3cdf84u: goto label_3cdf84;
        case 0x3cdf88u: goto label_3cdf88;
        case 0x3cdf8cu: goto label_3cdf8c;
        case 0x3cdf90u: goto label_3cdf90;
        case 0x3cdf94u: goto label_3cdf94;
        case 0x3cdf98u: goto label_3cdf98;
        case 0x3cdf9cu: goto label_3cdf9c;
        case 0x3cdfa0u: goto label_3cdfa0;
        case 0x3cdfa4u: goto label_3cdfa4;
        case 0x3cdfa8u: goto label_3cdfa8;
        case 0x3cdfacu: goto label_3cdfac;
        case 0x3cdfb0u: goto label_3cdfb0;
        case 0x3cdfb4u: goto label_3cdfb4;
        case 0x3cdfb8u: goto label_3cdfb8;
        case 0x3cdfbcu: goto label_3cdfbc;
        case 0x3cdfc0u: goto label_3cdfc0;
        case 0x3cdfc4u: goto label_3cdfc4;
        case 0x3cdfc8u: goto label_3cdfc8;
        case 0x3cdfccu: goto label_3cdfcc;
        case 0x3cdfd0u: goto label_3cdfd0;
        case 0x3cdfd4u: goto label_3cdfd4;
        case 0x3cdfd8u: goto label_3cdfd8;
        case 0x3cdfdcu: goto label_3cdfdc;
        case 0x3cdfe0u: goto label_3cdfe0;
        case 0x3cdfe4u: goto label_3cdfe4;
        case 0x3cdfe8u: goto label_3cdfe8;
        case 0x3cdfecu: goto label_3cdfec;
        case 0x3cdff0u: goto label_3cdff0;
        case 0x3cdff4u: goto label_3cdff4;
        case 0x3cdff8u: goto label_3cdff8;
        case 0x3cdffcu: goto label_3cdffc;
        case 0x3ce000u: goto label_3ce000;
        case 0x3ce004u: goto label_3ce004;
        case 0x3ce008u: goto label_3ce008;
        case 0x3ce00cu: goto label_3ce00c;
        case 0x3ce010u: goto label_3ce010;
        case 0x3ce014u: goto label_3ce014;
        case 0x3ce018u: goto label_3ce018;
        case 0x3ce01cu: goto label_3ce01c;
        case 0x3ce020u: goto label_3ce020;
        case 0x3ce024u: goto label_3ce024;
        case 0x3ce028u: goto label_3ce028;
        case 0x3ce02cu: goto label_3ce02c;
        case 0x3ce030u: goto label_3ce030;
        case 0x3ce034u: goto label_3ce034;
        case 0x3ce038u: goto label_3ce038;
        case 0x3ce03cu: goto label_3ce03c;
        case 0x3ce040u: goto label_3ce040;
        case 0x3ce044u: goto label_3ce044;
        case 0x3ce048u: goto label_3ce048;
        case 0x3ce04cu: goto label_3ce04c;
        case 0x3ce050u: goto label_3ce050;
        case 0x3ce054u: goto label_3ce054;
        case 0x3ce058u: goto label_3ce058;
        case 0x3ce05cu: goto label_3ce05c;
        case 0x3ce060u: goto label_3ce060;
        case 0x3ce064u: goto label_3ce064;
        case 0x3ce068u: goto label_3ce068;
        case 0x3ce06cu: goto label_3ce06c;
        case 0x3ce070u: goto label_3ce070;
        case 0x3ce074u: goto label_3ce074;
        case 0x3ce078u: goto label_3ce078;
        case 0x3ce07cu: goto label_3ce07c;
        case 0x3ce080u: goto label_3ce080;
        case 0x3ce084u: goto label_3ce084;
        case 0x3ce088u: goto label_3ce088;
        case 0x3ce08cu: goto label_3ce08c;
        case 0x3ce090u: goto label_3ce090;
        case 0x3ce094u: goto label_3ce094;
        case 0x3ce098u: goto label_3ce098;
        case 0x3ce09cu: goto label_3ce09c;
        case 0x3ce0a0u: goto label_3ce0a0;
        case 0x3ce0a4u: goto label_3ce0a4;
        case 0x3ce0a8u: goto label_3ce0a8;
        case 0x3ce0acu: goto label_3ce0ac;
        case 0x3ce0b0u: goto label_3ce0b0;
        case 0x3ce0b4u: goto label_3ce0b4;
        case 0x3ce0b8u: goto label_3ce0b8;
        case 0x3ce0bcu: goto label_3ce0bc;
        case 0x3ce0c0u: goto label_3ce0c0;
        case 0x3ce0c4u: goto label_3ce0c4;
        case 0x3ce0c8u: goto label_3ce0c8;
        case 0x3ce0ccu: goto label_3ce0cc;
        case 0x3ce0d0u: goto label_3ce0d0;
        case 0x3ce0d4u: goto label_3ce0d4;
        case 0x3ce0d8u: goto label_3ce0d8;
        case 0x3ce0dcu: goto label_3ce0dc;
        case 0x3ce0e0u: goto label_3ce0e0;
        case 0x3ce0e4u: goto label_3ce0e4;
        case 0x3ce0e8u: goto label_3ce0e8;
        case 0x3ce0ecu: goto label_3ce0ec;
        case 0x3ce0f0u: goto label_3ce0f0;
        case 0x3ce0f4u: goto label_3ce0f4;
        case 0x3ce0f8u: goto label_3ce0f8;
        case 0x3ce0fcu: goto label_3ce0fc;
        case 0x3ce100u: goto label_3ce100;
        case 0x3ce104u: goto label_3ce104;
        case 0x3ce108u: goto label_3ce108;
        case 0x3ce10cu: goto label_3ce10c;
        case 0x3ce110u: goto label_3ce110;
        case 0x3ce114u: goto label_3ce114;
        case 0x3ce118u: goto label_3ce118;
        case 0x3ce11cu: goto label_3ce11c;
        case 0x3ce120u: goto label_3ce120;
        case 0x3ce124u: goto label_3ce124;
        case 0x3ce128u: goto label_3ce128;
        case 0x3ce12cu: goto label_3ce12c;
        case 0x3ce130u: goto label_3ce130;
        case 0x3ce134u: goto label_3ce134;
        case 0x3ce138u: goto label_3ce138;
        case 0x3ce13cu: goto label_3ce13c;
        case 0x3ce140u: goto label_3ce140;
        case 0x3ce144u: goto label_3ce144;
        case 0x3ce148u: goto label_3ce148;
        case 0x3ce14cu: goto label_3ce14c;
        case 0x3ce150u: goto label_3ce150;
        case 0x3ce154u: goto label_3ce154;
        case 0x3ce158u: goto label_3ce158;
        case 0x3ce15cu: goto label_3ce15c;
        case 0x3ce160u: goto label_3ce160;
        case 0x3ce164u: goto label_3ce164;
        case 0x3ce168u: goto label_3ce168;
        case 0x3ce16cu: goto label_3ce16c;
        case 0x3ce170u: goto label_3ce170;
        case 0x3ce174u: goto label_3ce174;
        case 0x3ce178u: goto label_3ce178;
        case 0x3ce17cu: goto label_3ce17c;
        case 0x3ce180u: goto label_3ce180;
        case 0x3ce184u: goto label_3ce184;
        case 0x3ce188u: goto label_3ce188;
        case 0x3ce18cu: goto label_3ce18c;
        case 0x3ce190u: goto label_3ce190;
        case 0x3ce194u: goto label_3ce194;
        case 0x3ce198u: goto label_3ce198;
        case 0x3ce19cu: goto label_3ce19c;
        case 0x3ce1a0u: goto label_3ce1a0;
        case 0x3ce1a4u: goto label_3ce1a4;
        case 0x3ce1a8u: goto label_3ce1a8;
        case 0x3ce1acu: goto label_3ce1ac;
        case 0x3ce1b0u: goto label_3ce1b0;
        case 0x3ce1b4u: goto label_3ce1b4;
        case 0x3ce1b8u: goto label_3ce1b8;
        case 0x3ce1bcu: goto label_3ce1bc;
        case 0x3ce1c0u: goto label_3ce1c0;
        case 0x3ce1c4u: goto label_3ce1c4;
        case 0x3ce1c8u: goto label_3ce1c8;
        case 0x3ce1ccu: goto label_3ce1cc;
        case 0x3ce1d0u: goto label_3ce1d0;
        case 0x3ce1d4u: goto label_3ce1d4;
        case 0x3ce1d8u: goto label_3ce1d8;
        case 0x3ce1dcu: goto label_3ce1dc;
        case 0x3ce1e0u: goto label_3ce1e0;
        case 0x3ce1e4u: goto label_3ce1e4;
        case 0x3ce1e8u: goto label_3ce1e8;
        case 0x3ce1ecu: goto label_3ce1ec;
        case 0x3ce1f0u: goto label_3ce1f0;
        case 0x3ce1f4u: goto label_3ce1f4;
        case 0x3ce1f8u: goto label_3ce1f8;
        case 0x3ce1fcu: goto label_3ce1fc;
        case 0x3ce200u: goto label_3ce200;
        case 0x3ce204u: goto label_3ce204;
        case 0x3ce208u: goto label_3ce208;
        case 0x3ce20cu: goto label_3ce20c;
        case 0x3ce210u: goto label_3ce210;
        case 0x3ce214u: goto label_3ce214;
        case 0x3ce218u: goto label_3ce218;
        case 0x3ce21cu: goto label_3ce21c;
        case 0x3ce220u: goto label_3ce220;
        case 0x3ce224u: goto label_3ce224;
        case 0x3ce228u: goto label_3ce228;
        case 0x3ce22cu: goto label_3ce22c;
        case 0x3ce230u: goto label_3ce230;
        case 0x3ce234u: goto label_3ce234;
        case 0x3ce238u: goto label_3ce238;
        case 0x3ce23cu: goto label_3ce23c;
        case 0x3ce240u: goto label_3ce240;
        case 0x3ce244u: goto label_3ce244;
        case 0x3ce248u: goto label_3ce248;
        case 0x3ce24cu: goto label_3ce24c;
        case 0x3ce250u: goto label_3ce250;
        case 0x3ce254u: goto label_3ce254;
        case 0x3ce258u: goto label_3ce258;
        case 0x3ce25cu: goto label_3ce25c;
        case 0x3ce260u: goto label_3ce260;
        case 0x3ce264u: goto label_3ce264;
        default: break;
    }

    ctx->pc = 0x3cdf60u;

label_3cdf60:
    // 0x3cdf60: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3cdf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3cdf64:
    // 0x3cdf64: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3cdf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3cdf68:
    // 0x3cdf68: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3cdf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3cdf6c:
    // 0x3cdf6c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3cdf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3cdf70:
    // 0x3cdf70: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3cdf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3cdf74:
    // 0x3cdf74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3cdf74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cdf78:
    // 0x3cdf78: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3cdf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3cdf7c:
    // 0x3cdf7c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3cdf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3cdf80:
    // 0x3cdf80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3cdf80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cdf84:
    // 0x3cdf84: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3cdf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3cdf88:
    // 0x3cdf88: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3cdf88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cdf8c:
    // 0x3cdf8c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3cdf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_3cdf90:
    // 0x3cdf90: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cdf90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cdf94:
    // 0x3cdf94: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3cdf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_3cdf98:
    // 0x3cdf98: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3cdf98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cdf9c:
    // 0x3cdf9c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3cdf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3cdfa0:
    // 0x3cdfa0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x3cdfa0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3cdfa4:
    // 0x3cdfa4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3cdfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3cdfa8:
    // 0x3cdfa8: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3cdfa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3cdfac:
    // 0x3cdfac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cdfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3cdfb0:
    // 0x3cdfb0: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x3cdfb0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
label_3cdfb4:
    // 0x3cdfb4: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x3cdfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3cdfb8:
    // 0x3cdfb8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3cdfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3cdfbc:
    // 0x3cdfbc: 0x40f809  jalr        $v0
label_3cdfc0:
    if (ctx->pc == 0x3CDFC0u) {
        ctx->pc = 0x3CDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDFBCu;
        // 0x3cdfc0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDFC4u;
        goto label_3cdfc4;
    }
    ctx->pc = 0x3CDFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CDFC4u);
        ctx->pc = 0x3CDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDFBCu;
        // 0x3cdfc0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDFBCu, 0x3CDFC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CDFC4u;
label_3cdfc4:
    // 0x3cdfc4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3cdfc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cdfc8:
    // 0x3cdfc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cdfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cdfcc:
    // 0x3cdfcc: 0xc10540a  jal         func_415028
label_3cdfd0:
    if (ctx->pc == 0x3CDFD0u) {
        ctx->pc = 0x3CDFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDFCCu;
        // 0x3cdfd0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDFD4u;
        goto label_3cdfd4;
    }
    ctx->pc = 0x3CDFCCu;
    SET_GPR_U32(ctx, 31, 0x3CDFD4u);
    ctx->pc = 0x3CDFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDFCCu;
    // 0x3cdfd0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415028u, 0x3CDFCCu, 0x3CDFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDFD4u;
label_3cdfd4:
    // 0x3cdfd4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x3cdfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3cdfd8:
    // 0x3cdfd8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_3cdfdc:
    if (ctx->pc == 0x3CDFDCu) {
        ctx->pc = 0x3CDFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDFD8u;
        // 0x3cdfdc: 0xc7a3000c  lwc1        $f3, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDFE0u;
        goto label_3cdfe0;
    }
    ctx->pc = 0x3CDFD8u;
    {
        const bool branch_taken_0x3cdfd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CDFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDFD8u;
        // 0x3cdfdc: 0xc7a3000c  lwc1        $f3, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdfd8) {
            ctx->pc = 0x3CE018u;
            goto label_3ce018;
        }
    }
    ctx->pc = 0x3CDFE0u;
label_3cdfe0:
    // 0x3cdfe0: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3cdfe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cdfe4:
    // 0x3cdfe4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x3cdfe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cdfe8:
    // 0x3cdfe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cdfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cdfec:
    // 0x3cdfec: 0xc105418  jal         func_415060
label_3cdff0:
    if (ctx->pc == 0x3CDFF0u) {
        ctx->pc = 0x3CDFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDFECu;
        // 0x3cdff0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDFF4u;
        goto label_3cdff4;
    }
    ctx->pc = 0x3CDFECu;
    SET_GPR_U32(ctx, 31, 0x3CDFF4u);
    ctx->pc = 0x3CDFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDFECu;
    // 0x3cdff0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3CDFECu, 0x3CDFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDFF4u;
label_3cdff4:
    // 0x3cdff4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3cdff4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3cdff8:
    // 0x3cdff8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3cdff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3cdffc:
    // 0x3cdffc: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3cdffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_3ce000:
    // 0x3ce000: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3ce000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ce004:
    // 0x3ce004: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3ce004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3ce008:
    // 0x3ce008: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_3ce00c:
    if (ctx->pc == 0x3CE00Cu) {
        ctx->pc = 0x3CE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE008u;
        // 0x3ce00c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE010u;
        goto label_3ce010;
    }
    ctx->pc = 0x3CE008u;
    {
        const bool branch_taken_0x3ce008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE008u;
        // 0x3ce00c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce008) {
            ctx->pc = 0x3CDFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cdfe8;
        }
    }
    ctx->pc = 0x3CE010u;
label_3ce010:
    // 0x3ce010: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x3ce010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3ce014:
    // 0x3ce014: 0x0  nop
    ctx->pc = 0x3ce014u;
    // NOP
label_3ce018:
    // 0x3ce018: 0x26c2b328  addiu       $v0, $s6, -0x4CD8
    ctx->pc = 0x3ce018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947624));
label_3ce01c:
    // 0x3ce01c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3ce01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ce020:
    // 0x3ce020: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3ce020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ce024:
    // 0x3ce024: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3ce024u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_3ce028:
    // 0x3ce028: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x3ce028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3ce02c:
    // 0x3ce02c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3ce02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce030:
    // 0x3ce030: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x3ce030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3ce034:
    // 0x3ce034: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3ce034u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_3ce038:
    // 0x3ce038: 0xe6c2b328  swc1        $f2, -0x4CD8($s6)
    ctx->pc = 0x3ce038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4294947624), bits); }
label_3ce03c:
    // 0x3ce03c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3ce03cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_3ce040:
    // 0x3ce040: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x3ce040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3ce044:
    // 0x3ce044: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3ce044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3ce048:
    // 0x3ce048: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ce048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ce04c:
    // 0x3ce04c: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x3ce04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3ce050:
    // 0x3ce050: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x3ce050u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
label_3ce054:
    // 0x3ce054: 0x24e71de8  addiu       $a3, $a3, 0x1DE8
    ctx->pc = 0x3ce054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7656));
label_3ce058:
    // 0x3ce058: 0xc0bbc9c  jal         func_2EF270
label_3ce05c:
    if (ctx->pc == 0x3CE05Cu) {
        ctx->pc = 0x3CE05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE058u;
        // 0x3ce05c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE060u;
        goto label_3ce060;
    }
    ctx->pc = 0x3CE058u;
    SET_GPR_U32(ctx, 31, 0x3CE060u);
    ctx->pc = 0x3CE05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE058u;
    // 0x3ce05c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF270u, 0x3CE058u, 0x3CE060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE060u;
label_3ce060:
    // 0x3ce060: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ce060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce064:
    // 0x3ce064: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ce064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3ce068:
    // 0x3ce068: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x3ce068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3ce06c:
    // 0x3ce06c: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3ce06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3ce070:
    // 0x3ce070: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x3ce070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_3ce074:
    // 0x3ce074: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3ce074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3ce078:
    // 0x3ce078: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3ce078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3ce07c:
    // 0x3ce07c: 0x40f809  jalr        $v0
label_3ce080:
    if (ctx->pc == 0x3CE080u) {
        ctx->pc = 0x3CE080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE07Cu;
        // 0x3ce080: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE084u;
        goto label_3ce084;
    }
    ctx->pc = 0x3CE07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CE084u);
        ctx->pc = 0x3CE080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE07Cu;
        // 0x3ce080: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE07Cu, 0x3CE084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CE084u;
label_3ce084:
    // 0x3ce084: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x3ce084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3ce088:
    // 0x3ce088: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
label_3ce08c:
    if (ctx->pc == 0x3CE08Cu) {
        ctx->pc = 0x3CE08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE088u;
        // 0x3ce08c: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE090u;
        goto label_3ce090;
    }
    ctx->pc = 0x3CE088u;
    {
        const bool branch_taken_0x3ce088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE088u;
        // 0x3ce08c: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce088) {
            ctx->pc = 0x3CE220u;
            goto label_3ce220;
        }
    }
    ctx->pc = 0x3CE090u;
label_3ce090:
    // 0x3ce090: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ce090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3ce094:
    // 0x3ce094: 0x244eb1e0  addiu       $t6, $v0, -0x4E20
    ctx->pc = 0x3ce094u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
label_3ce098:
    // 0x3ce098: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x3ce098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3ce09c:
    // 0x3ce09c: 0x0  nop
    ctx->pc = 0x3ce09cu;
    // NOP
label_3ce0a0:
    // 0x3ce0a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ce0a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce0a4:
    // 0x3ce0a4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3ce0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3ce0a8:
    // 0x3ce0a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ce0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ce0ac:
    // 0x3ce0ac: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3ce0b0:
    if (ctx->pc == 0x3CE0B0u) {
        ctx->pc = 0x3CE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE0ACu;
        // 0x3ce0b0: 0x264dffff  addiu       $t5, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE0B4u;
        goto label_3ce0b4;
    }
    ctx->pc = 0x3CE0ACu;
    {
        const bool branch_taken_0x3ce0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE0ACu;
        // 0x3ce0b0: 0x264dffff  addiu       $t5, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce0ac) {
            ctx->pc = 0x3CE128u;
            goto label_3ce128;
        }
    }
    ctx->pc = 0x3CE0B4u;
label_3ce0b4:
    // 0x3ce0b4: 0x0  nop
    ctx->pc = 0x3ce0b4u;
    // NOP
label_3ce0b8:
    // 0x3ce0b8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3ce0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3ce0bc:
    // 0x3ce0bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ce0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ce0c0:
    // 0x3ce0c0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3ce0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ce0c4:
    // 0x3ce0c4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3ce0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce0c8:
    // 0x3ce0c8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3ce0c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3ce0cc:
    // 0x3ce0cc: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x3ce0ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3ce0d0:
    // 0x3ce0d0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3ce0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce0d4:
    // 0x3ce0d4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x3ce0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3ce0d8:
    // 0x3ce0d8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3ce0d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3ce0dc:
    // 0x3ce0dc: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x3ce0dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3ce0e0:
    // 0x3ce0e0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3ce0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ce0e4:
    // 0x3ce0e4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3ce0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce0e8:
    // 0x3ce0e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ce0e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3ce0ec:
    // 0x3ce0ec: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x3ce0ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3ce0f0:
    // 0x3ce0f0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3ce0f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3ce0f4:
    // 0x3ce0f4: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x3ce0f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_3ce0f8:
    // 0x3ce0f8: 0xc5c0004c  lwc1        $f0, 0x4C($t6)
    ctx->pc = 0x3ce0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce0fc:
    // 0x3ce0fc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3ce0fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3ce100:
    // 0x3ce100: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3ce100u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3ce104:
    // 0x3ce104: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3ce104u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3ce108:
    // 0x3ce108: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3ce108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ce10c:
    // 0x3ce10c: 0x0  nop
    ctx->pc = 0x3ce10cu;
    // NOP
label_3ce110:
    // 0x3ce110: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3ce114:
    if (ctx->pc == 0x3CE114u) {
        ctx->pc = 0x3CE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE110u;
        // 0x3ce114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE118u;
        goto label_3ce118;
    }
    ctx->pc = 0x3CE110u;
    {
        const bool branch_taken_0x3ce110 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE110u;
        // 0x3ce114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce110) {
            ctx->pc = 0x3CE120u;
            goto label_3ce120;
        }
    }
    ctx->pc = 0x3CE118u;
label_3ce118:
    // 0x3ce118: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ce118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ce11c:
    // 0x3ce11c: 0x0  nop
    ctx->pc = 0x3ce11cu;
    // NOP
label_3ce120:
    // 0x3ce120: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_3ce124:
    if (ctx->pc == 0x3CE124u) {
        ctx->pc = 0x3CE128u;
        goto label_3ce128;
    }
    ctx->pc = 0x3CE120u;
    {
        const bool branch_taken_0x3ce120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce120) {
            ctx->pc = 0x3CE148u;
            goto label_3ce148;
        }
    }
    ctx->pc = 0x3CE128u;
label_3ce128:
    // 0x3ce128: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3ce128u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_3ce12c:
    // 0x3ce12c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3ce12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3ce130:
    // 0x3ce130: 0x24b1821  addu        $v1, $s2, $t3
    ctx->pc = 0x3ce130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
label_3ce134:
    // 0x3ce134: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3ce134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ce138:
    // 0x3ce138: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3ce13c:
    if (ctx->pc == 0x3CE13Cu) {
        ctx->pc = 0x3CE140u;
        goto label_3ce140;
    }
    ctx->pc = 0x3CE138u;
    {
        const bool branch_taken_0x3ce138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ce138) {
            ctx->pc = 0x3CE148u;
            goto label_3ce148;
        }
    }
    ctx->pc = 0x3CE140u;
label_3ce140:
    // 0x3ce140: 0x17c0ffdd  bnez        $fp, . + 4 + (-0x23 << 2)
label_3ce144:
    if (ctx->pc == 0x3CE144u) {
        ctx->pc = 0x3CE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE140u;
        // 0x3ce144: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE148u;
        goto label_3ce148;
    }
    ctx->pc = 0x3CE140u;
    {
        const bool branch_taken_0x3ce140 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE140u;
        // 0x3ce144: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce140) {
            ctx->pc = 0x3CE0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ce0b8;
        }
    }
    ctx->pc = 0x3CE148u;
label_3ce148:
    // 0x3ce148: 0x1160002f  beqz        $t3, . + 4 + (0x2F << 2)
label_3ce14c:
    if (ctx->pc == 0x3CE14Cu) {
        ctx->pc = 0x3CE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE148u;
        // 0x3ce14c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE150u;
        goto label_3ce150;
    }
    ctx->pc = 0x3CE148u;
    {
        const bool branch_taken_0x3ce148 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE148u;
        // 0x3ce14c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce148) {
            ctx->pc = 0x3CE208u;
            goto label_3ce208;
        }
    }
    ctx->pc = 0x3CE150u;
label_3ce150:
    // 0x3ce150: 0x3c07aaaa  lui         $a3, 0xAAAA
    ctx->pc = 0x3ce150u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)43690 << 16));
label_3ce154:
    // 0x3ce154: 0xc7818108  lwc1        $f1, -0x7EF8($gp)
    ctx->pc = 0x3ce154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ce158:
    // 0x3ce158: 0x8e8c000c  lw          $t4, 0xC($s4)
    ctx->pc = 0x3ce158u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ce15c:
    // 0x3ce15c: 0x34e7aaab  ori         $a3, $a3, 0xAAAB
    ctx->pc = 0x3ce15cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)43691);
label_3ce160:
    // 0x3ce160: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x3ce160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3ce164:
    // 0x3ce164: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ce164u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce168:
    // 0x3ce168: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ce168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3ce16c:
    // 0x3ce16c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ce16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ce170:
    // 0x3ce170: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3ce170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3ce174:
    // 0x3ce174: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ce174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ce178:
    // 0x3ce178: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x3ce178u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3ce17c:
    // 0x3ce17c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x3ce17cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3ce180:
    // 0x3ce180: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x3ce180u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_3ce184:
    // 0x3ce184: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x3ce184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_3ce188:
    // 0x3ce188: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x3ce188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_3ce18c:
    // 0x3ce18c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3ce18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce190:
    // 0x3ce190: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3ce190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3ce194:
    // 0x3ce194: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ce194u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ce198:
    // 0x3ce198: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3ce198u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3ce19c:
    // 0x3ce19c: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x3ce19cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3ce1a0:
    // 0x3ce1a0: 0x24890001  addiu       $t1, $a0, 0x1
    ctx->pc = 0x3ce1a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3ce1a4:
    // 0x3ce1a4: 0x0  nop
    ctx->pc = 0x3ce1a4u;
    // NOP
label_3ce1a8:
    // 0x3ce1a8: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x3ce1a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3ce1ac:
    // 0x3ce1ac: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_3ce1b0:
    if (ctx->pc == 0x3CE1B0u) {
        ctx->pc = 0x3CE1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE1ACu;
        // 0x3ce1b0: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE1B4u;
        goto label_3ce1b4;
    }
    ctx->pc = 0x3CE1ACu;
    {
        const bool branch_taken_0x3ce1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE1ACu;
        // 0x3ce1b0: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce1ac) {
            ctx->pc = 0x3CE1F0u;
            goto label_3ce1f0;
        }
    }
    ctx->pc = 0x3CE1B4u;
label_3ce1b4:
    // 0x3ce1b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ce1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ce1b8:
    // 0x3ce1b8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3ce1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3ce1bc:
    // 0x3ce1bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ce1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ce1c0:
    // 0x3ce1c0: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x3ce1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_3ce1c4:
    // 0x3ce1c4: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x3ce1c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3ce1c8:
    // 0x3ce1c8: 0x35083  sra         $t2, $v1, 2
    ctx->pc = 0x3ce1c8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 2));
label_3ce1cc:
    // 0x3ce1cc: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x3ce1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_3ce1d0:
    // 0x3ce1d0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3ce1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3ce1d4:
    // 0x3ce1d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3ce1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ce1d8:
    // 0x3ce1d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3ce1d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3ce1dc:
    // 0x3ce1dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ce1dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ce1e0:
    // 0x3ce1e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3ce1e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3ce1e4:
    // 0x3ce1e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ce1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3ce1e8:
    // 0x3ce1e8: 0x5502ffef  bnel        $t0, $v0, . + 4 + (-0x11 << 2)
label_3ce1ec:
    if (ctx->pc == 0x3CE1ECu) {
        ctx->pc = 0x3CE1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE1E8u;
        // 0x3ce1ec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE1F0u;
        goto label_3ce1f0;
    }
    ctx->pc = 0x3CE1E8u;
    {
        const bool branch_taken_0x3ce1e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ce1e8) {
            ctx->pc = 0x3CE1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CE1E8u;
            // 0x3ce1ec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CE1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ce1a8;
        }
    }
    ctx->pc = 0x3CE1F0u;
label_3ce1f0:
    // 0x3ce1f0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3ce1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3ce1f4:
    // 0x3ce1f4: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x3ce1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3ce1f8:
    // 0x3ce1f8: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x3ce1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_3ce1fc:
    // 0x3ce1fc: 0x8b182b  sltu        $v1, $a0, $t3
    ctx->pc = 0x3ce1fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_3ce200:
    // 0x3ce200: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_3ce204:
    if (ctx->pc == 0x3CE204u) {
        ctx->pc = 0x3CE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE200u;
        // 0x3ce204: 0xac4a0000  sw          $t2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE208u;
        goto label_3ce208;
    }
    ctx->pc = 0x3CE200u;
    {
        const bool branch_taken_0x3ce200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE200u;
        // 0x3ce204: 0xac4a0000  sw          $t2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce200) {
            ctx->pc = 0x3CE160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ce160;
        }
    }
    ctx->pc = 0x3CE208u;
label_3ce208:
    // 0x3ce208: 0x1ab9021  addu        $s2, $t5, $t3
    ctx->pc = 0x3ce208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
label_3ce20c:
    // 0x3ce20c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3ce20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3ce210:
    // 0x3ce210: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ce210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ce214:
    // 0x3ce214: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3ce214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ce218:
    // 0x3ce218: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
label_3ce21c:
    if (ctx->pc == 0x3CE21Cu) {
        ctx->pc = 0x3CE21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE218u;
        // 0x3ce21c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE220u;
        goto label_3ce220;
    }
    ctx->pc = 0x3CE218u;
    {
        const bool branch_taken_0x3ce218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CE21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE218u;
        // 0x3ce21c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce218) {
            ctx->pc = 0x3CE0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ce0a0;
        }
    }
    ctx->pc = 0x3CE220u;
label_3ce220:
    // 0x3ce220: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ce220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3ce224:
    // 0x3ce224: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3ce224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3ce228:
    // 0x3ce228: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3ce228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3ce22c:
    // 0x3ce22c: 0x40f809  jalr        $v0
label_3ce230:
    if (ctx->pc == 0x3CE230u) {
        ctx->pc = 0x3CE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE22Cu;
        // 0x3ce230: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE234u;
        goto label_3ce234;
    }
    ctx->pc = 0x3CE22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CE234u);
        ctx->pc = 0x3CE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE22Cu;
        // 0x3ce230: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE22Cu, 0x3CE234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CE234u;
label_3ce234:
    // 0x3ce234: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3ce234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ce238:
    // 0x3ce238: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3ce238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3ce23c:
    // 0x3ce23c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3ce23cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ce240:
    // 0x3ce240: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3ce240u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ce244:
    // 0x3ce244: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3ce244u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ce248:
    // 0x3ce248: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3ce248u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ce24c:
    // 0x3ce24c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ce24cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ce250:
    // 0x3ce250: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3ce250u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ce254:
    // 0x3ce254: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3ce254u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ce258:
    // 0x3ce258: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ce258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ce25c:
    // 0x3ce25c: 0x3e00008  jr          $ra
label_3ce260:
    if (ctx->pc == 0x3CE260u) {
        ctx->pc = 0x3CE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE25Cu;
        // 0x3ce260: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CE264u;
        goto label_3ce264;
    }
    ctx->pc = 0x3CE25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE25Cu;
        // 0x3ce260: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CE264u;
label_3ce264:
    // 0x3ce264: 0x0  nop
    ctx->pc = 0x3ce264u;
    // NOP
    ctx->pc = 0x3ce268u;
}
