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

// Function: sub_0038DF48
// Address: 0x38df48 - 0x38e2c8
void sub_0038DF48_0x38df48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DF48_0x38df48");
#endif

    switch (ctx->pc) {
        case 0x38df48u: goto label_38df48;
        case 0x38df4cu: goto label_38df4c;
        case 0x38df50u: goto label_38df50;
        case 0x38df54u: goto label_38df54;
        case 0x38df58u: goto label_38df58;
        case 0x38df5cu: goto label_38df5c;
        case 0x38df60u: goto label_38df60;
        case 0x38df64u: goto label_38df64;
        case 0x38df68u: goto label_38df68;
        case 0x38df6cu: goto label_38df6c;
        case 0x38df70u: goto label_38df70;
        case 0x38df74u: goto label_38df74;
        case 0x38df78u: goto label_38df78;
        case 0x38df7cu: goto label_38df7c;
        case 0x38df80u: goto label_38df80;
        case 0x38df84u: goto label_38df84;
        case 0x38df88u: goto label_38df88;
        case 0x38df8cu: goto label_38df8c;
        case 0x38df90u: goto label_38df90;
        case 0x38df94u: goto label_38df94;
        case 0x38df98u: goto label_38df98;
        case 0x38df9cu: goto label_38df9c;
        case 0x38dfa0u: goto label_38dfa0;
        case 0x38dfa4u: goto label_38dfa4;
        case 0x38dfa8u: goto label_38dfa8;
        case 0x38dfacu: goto label_38dfac;
        case 0x38dfb0u: goto label_38dfb0;
        case 0x38dfb4u: goto label_38dfb4;
        case 0x38dfb8u: goto label_38dfb8;
        case 0x38dfbcu: goto label_38dfbc;
        case 0x38dfc0u: goto label_38dfc0;
        case 0x38dfc4u: goto label_38dfc4;
        case 0x38dfc8u: goto label_38dfc8;
        case 0x38dfccu: goto label_38dfcc;
        case 0x38dfd0u: goto label_38dfd0;
        case 0x38dfd4u: goto label_38dfd4;
        case 0x38dfd8u: goto label_38dfd8;
        case 0x38dfdcu: goto label_38dfdc;
        case 0x38dfe0u: goto label_38dfe0;
        case 0x38dfe4u: goto label_38dfe4;
        case 0x38dfe8u: goto label_38dfe8;
        case 0x38dfecu: goto label_38dfec;
        case 0x38dff0u: goto label_38dff0;
        case 0x38dff4u: goto label_38dff4;
        case 0x38dff8u: goto label_38dff8;
        case 0x38dffcu: goto label_38dffc;
        case 0x38e000u: goto label_38e000;
        case 0x38e004u: goto label_38e004;
        case 0x38e008u: goto label_38e008;
        case 0x38e00cu: goto label_38e00c;
        case 0x38e010u: goto label_38e010;
        case 0x38e014u: goto label_38e014;
        case 0x38e018u: goto label_38e018;
        case 0x38e01cu: goto label_38e01c;
        case 0x38e020u: goto label_38e020;
        case 0x38e024u: goto label_38e024;
        case 0x38e028u: goto label_38e028;
        case 0x38e02cu: goto label_38e02c;
        case 0x38e030u: goto label_38e030;
        case 0x38e034u: goto label_38e034;
        case 0x38e038u: goto label_38e038;
        case 0x38e03cu: goto label_38e03c;
        case 0x38e040u: goto label_38e040;
        case 0x38e044u: goto label_38e044;
        case 0x38e048u: goto label_38e048;
        case 0x38e04cu: goto label_38e04c;
        case 0x38e050u: goto label_38e050;
        case 0x38e054u: goto label_38e054;
        case 0x38e058u: goto label_38e058;
        case 0x38e05cu: goto label_38e05c;
        case 0x38e060u: goto label_38e060;
        case 0x38e064u: goto label_38e064;
        case 0x38e068u: goto label_38e068;
        case 0x38e06cu: goto label_38e06c;
        case 0x38e070u: goto label_38e070;
        case 0x38e074u: goto label_38e074;
        case 0x38e078u: goto label_38e078;
        case 0x38e07cu: goto label_38e07c;
        case 0x38e080u: goto label_38e080;
        case 0x38e084u: goto label_38e084;
        case 0x38e088u: goto label_38e088;
        case 0x38e08cu: goto label_38e08c;
        case 0x38e090u: goto label_38e090;
        case 0x38e094u: goto label_38e094;
        case 0x38e098u: goto label_38e098;
        case 0x38e09cu: goto label_38e09c;
        case 0x38e0a0u: goto label_38e0a0;
        case 0x38e0a4u: goto label_38e0a4;
        case 0x38e0a8u: goto label_38e0a8;
        case 0x38e0acu: goto label_38e0ac;
        case 0x38e0b0u: goto label_38e0b0;
        case 0x38e0b4u: goto label_38e0b4;
        case 0x38e0b8u: goto label_38e0b8;
        case 0x38e0bcu: goto label_38e0bc;
        case 0x38e0c0u: goto label_38e0c0;
        case 0x38e0c4u: goto label_38e0c4;
        case 0x38e0c8u: goto label_38e0c8;
        case 0x38e0ccu: goto label_38e0cc;
        case 0x38e0d0u: goto label_38e0d0;
        case 0x38e0d4u: goto label_38e0d4;
        case 0x38e0d8u: goto label_38e0d8;
        case 0x38e0dcu: goto label_38e0dc;
        case 0x38e0e0u: goto label_38e0e0;
        case 0x38e0e4u: goto label_38e0e4;
        case 0x38e0e8u: goto label_38e0e8;
        case 0x38e0ecu: goto label_38e0ec;
        case 0x38e0f0u: goto label_38e0f0;
        case 0x38e0f4u: goto label_38e0f4;
        case 0x38e0f8u: goto label_38e0f8;
        case 0x38e0fcu: goto label_38e0fc;
        case 0x38e100u: goto label_38e100;
        case 0x38e104u: goto label_38e104;
        case 0x38e108u: goto label_38e108;
        case 0x38e10cu: goto label_38e10c;
        case 0x38e110u: goto label_38e110;
        case 0x38e114u: goto label_38e114;
        case 0x38e118u: goto label_38e118;
        case 0x38e11cu: goto label_38e11c;
        case 0x38e120u: goto label_38e120;
        case 0x38e124u: goto label_38e124;
        case 0x38e128u: goto label_38e128;
        case 0x38e12cu: goto label_38e12c;
        case 0x38e130u: goto label_38e130;
        case 0x38e134u: goto label_38e134;
        case 0x38e138u: goto label_38e138;
        case 0x38e13cu: goto label_38e13c;
        case 0x38e140u: goto label_38e140;
        case 0x38e144u: goto label_38e144;
        case 0x38e148u: goto label_38e148;
        case 0x38e14cu: goto label_38e14c;
        case 0x38e150u: goto label_38e150;
        case 0x38e154u: goto label_38e154;
        case 0x38e158u: goto label_38e158;
        case 0x38e15cu: goto label_38e15c;
        case 0x38e160u: goto label_38e160;
        case 0x38e164u: goto label_38e164;
        case 0x38e168u: goto label_38e168;
        case 0x38e16cu: goto label_38e16c;
        case 0x38e170u: goto label_38e170;
        case 0x38e174u: goto label_38e174;
        case 0x38e178u: goto label_38e178;
        case 0x38e17cu: goto label_38e17c;
        case 0x38e180u: goto label_38e180;
        case 0x38e184u: goto label_38e184;
        case 0x38e188u: goto label_38e188;
        case 0x38e18cu: goto label_38e18c;
        case 0x38e190u: goto label_38e190;
        case 0x38e194u: goto label_38e194;
        case 0x38e198u: goto label_38e198;
        case 0x38e19cu: goto label_38e19c;
        case 0x38e1a0u: goto label_38e1a0;
        case 0x38e1a4u: goto label_38e1a4;
        case 0x38e1a8u: goto label_38e1a8;
        case 0x38e1acu: goto label_38e1ac;
        case 0x38e1b0u: goto label_38e1b0;
        case 0x38e1b4u: goto label_38e1b4;
        case 0x38e1b8u: goto label_38e1b8;
        case 0x38e1bcu: goto label_38e1bc;
        case 0x38e1c0u: goto label_38e1c0;
        case 0x38e1c4u: goto label_38e1c4;
        case 0x38e1c8u: goto label_38e1c8;
        case 0x38e1ccu: goto label_38e1cc;
        case 0x38e1d0u: goto label_38e1d0;
        case 0x38e1d4u: goto label_38e1d4;
        case 0x38e1d8u: goto label_38e1d8;
        case 0x38e1dcu: goto label_38e1dc;
        case 0x38e1e0u: goto label_38e1e0;
        case 0x38e1e4u: goto label_38e1e4;
        case 0x38e1e8u: goto label_38e1e8;
        case 0x38e1ecu: goto label_38e1ec;
        case 0x38e1f0u: goto label_38e1f0;
        case 0x38e1f4u: goto label_38e1f4;
        case 0x38e1f8u: goto label_38e1f8;
        case 0x38e1fcu: goto label_38e1fc;
        case 0x38e200u: goto label_38e200;
        case 0x38e204u: goto label_38e204;
        case 0x38e208u: goto label_38e208;
        case 0x38e20cu: goto label_38e20c;
        case 0x38e210u: goto label_38e210;
        case 0x38e214u: goto label_38e214;
        case 0x38e218u: goto label_38e218;
        case 0x38e21cu: goto label_38e21c;
        case 0x38e220u: goto label_38e220;
        case 0x38e224u: goto label_38e224;
        case 0x38e228u: goto label_38e228;
        case 0x38e22cu: goto label_38e22c;
        case 0x38e230u: goto label_38e230;
        case 0x38e234u: goto label_38e234;
        case 0x38e238u: goto label_38e238;
        case 0x38e23cu: goto label_38e23c;
        case 0x38e240u: goto label_38e240;
        case 0x38e244u: goto label_38e244;
        case 0x38e248u: goto label_38e248;
        case 0x38e24cu: goto label_38e24c;
        case 0x38e250u: goto label_38e250;
        case 0x38e254u: goto label_38e254;
        case 0x38e258u: goto label_38e258;
        case 0x38e25cu: goto label_38e25c;
        case 0x38e260u: goto label_38e260;
        case 0x38e264u: goto label_38e264;
        case 0x38e268u: goto label_38e268;
        case 0x38e26cu: goto label_38e26c;
        case 0x38e270u: goto label_38e270;
        case 0x38e274u: goto label_38e274;
        case 0x38e278u: goto label_38e278;
        case 0x38e27cu: goto label_38e27c;
        case 0x38e280u: goto label_38e280;
        case 0x38e284u: goto label_38e284;
        case 0x38e288u: goto label_38e288;
        case 0x38e28cu: goto label_38e28c;
        case 0x38e290u: goto label_38e290;
        case 0x38e294u: goto label_38e294;
        case 0x38e298u: goto label_38e298;
        case 0x38e29cu: goto label_38e29c;
        case 0x38e2a0u: goto label_38e2a0;
        case 0x38e2a4u: goto label_38e2a4;
        case 0x38e2a8u: goto label_38e2a8;
        case 0x38e2acu: goto label_38e2ac;
        case 0x38e2b0u: goto label_38e2b0;
        case 0x38e2b4u: goto label_38e2b4;
        case 0x38e2b8u: goto label_38e2b8;
        case 0x38e2bcu: goto label_38e2bc;
        case 0x38e2c0u: goto label_38e2c0;
        case 0x38e2c4u: goto label_38e2c4;
        default: break;
    }

    ctx->pc = 0x38df48u;

label_38df48:
    // 0x38df48: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x38df48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_38df4c:
    // 0x38df4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38df4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38df50:
    // 0x38df50: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x38df50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_38df54:
    // 0x38df54: 0x27a70064  addiu       $a3, $sp, 0x64
    ctx->pc = 0x38df54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_38df58:
    // 0x38df58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38df58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38df5c:
    // 0x38df5c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x38df5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_38df60:
    // 0x38df60: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x38df60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38df64:
    // 0x38df64: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x38df64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_38df68:
    // 0x38df68: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x38df68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_38df6c:
    // 0x38df6c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x38df6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_38df70:
    // 0x38df70: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x38df70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_38df74:
    // 0x38df74: 0xc103322  jal         func_40CC88
label_38df78:
    if (ctx->pc == 0x38DF78u) {
        ctx->pc = 0x38DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF74u;
        // 0x38df78: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF7Cu;
        goto label_38df7c;
    }
    ctx->pc = 0x38DF74u;
    SET_GPR_U32(ctx, 31, 0x38DF7Cu);
    ctx->pc = 0x38DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DF74u;
    // 0x38df78: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x38DF74u, 0x38DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DF7Cu;
label_38df7c:
    // 0x38df7c: 0x104000c8  beqz        $v0, . + 4 + (0xC8 << 2)
label_38df80:
    if (ctx->pc == 0x38DF80u) {
        ctx->pc = 0x38DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF7Cu;
        // 0x38df80: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF84u;
        goto label_38df84;
    }
    ctx->pc = 0x38DF7Cu;
    {
        const bool branch_taken_0x38df7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF7Cu;
        // 0x38df80: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df7c) {
            ctx->pc = 0x38E2A0u;
            goto label_38e2a0;
        }
    }
    ctx->pc = 0x38DF84u;
label_38df84:
    // 0x38df84: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x38df84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_38df88:
    // 0x38df88: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x38df88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_38df8c:
    // 0x38df8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38df90:
    // 0x38df90: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x38df90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_38df94:
    // 0x38df94: 0x106000b8  beqz        $v1, . + 4 + (0xB8 << 2)
label_38df98:
    if (ctx->pc == 0x38DF98u) {
        ctx->pc = 0x38DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF94u;
        // 0x38df98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DF9Cu;
        goto label_38df9c;
    }
    ctx->pc = 0x38DF94u;
    {
        const bool branch_taken_0x38df94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DF94u;
        // 0x38df98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df94) {
            ctx->pc = 0x38E278u;
            goto label_38e278;
        }
    }
    ctx->pc = 0x38DF9Cu;
label_38df9c:
    // 0x38df9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38df9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38dfa0:
    // 0x38dfa0: 0xc0bb7e6  jal         func_2EDF98
label_38dfa4:
    if (ctx->pc == 0x38DFA4u) {
        ctx->pc = 0x38DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFA0u;
        // 0x38dfa4: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DFA8u;
        goto label_38dfa8;
    }
    ctx->pc = 0x38DFA0u;
    SET_GPR_U32(ctx, 31, 0x38DFA8u);
    ctx->pc = 0x38DFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DFA0u;
    // 0x38dfa4: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x38DFA0u, 0x38DFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DFA8u;
label_38dfa8:
    // 0x38dfa8: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x38dfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_38dfac:
    // 0x38dfac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38dfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38dfb0:
    // 0x38dfb0: 0xc10480a  jal         func_412028
label_38dfb4:
    if (ctx->pc == 0x38DFB4u) {
        ctx->pc = 0x38DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFB0u;
        // 0x38dfb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DFB8u;
        goto label_38dfb8;
    }
    ctx->pc = 0x38DFB0u;
    SET_GPR_U32(ctx, 31, 0x38DFB8u);
    ctx->pc = 0x38DFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DFB0u;
    // 0x38dfb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x38DFB0u, 0x38DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DFB8u;
label_38dfb8:
    // 0x38dfb8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x38dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_38dfbc:
    // 0x38dfbc: 0x144300b9  bne         $v0, $v1, . + 4 + (0xB9 << 2)
label_38dfc0:
    if (ctx->pc == 0x38DFC0u) {
        ctx->pc = 0x38DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFBCu;
        // 0x38dfc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38DFC4u;
        goto label_38dfc4;
    }
    ctx->pc = 0x38DFBCu;
    {
        const bool branch_taken_0x38dfbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x38DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DFBCu;
        // 0x38dfc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dfbc) {
            ctx->pc = 0x38E2A4u;
            goto label_38e2a4;
        }
    }
    ctx->pc = 0x38DFC4u;
label_38dfc4:
    // 0x38dfc4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_38dfc8:
    // 0x38dfc8: 0x8f85bd40  lw          $a1, -0x42C0($gp)
    ctx->pc = 0x38dfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950208)));
label_38dfcc:
    // 0x38dfcc: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x38dfccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_38dfd0:
    // 0x38dfd0: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x38dfd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_38dfd4:
    // 0x38dfd4: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x38dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_38dfd8:
    // 0x38dfd8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x38dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_38dfdc:
    // 0x38dfdc: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x38dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_38dfe0:
    // 0x38dfe0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x38dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_38dfe4:
    // 0x38dfe4: 0x8ba30007  lwl         $v1, 0x7($sp)
    ctx->pc = 0x38dfe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_38dfe8:
    // 0x38dfe8: 0x9ba30004  lwr         $v1, 0x4($sp)
    ctx->pc = 0x38dfe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_38dfec:
    // 0x38dfec: 0xaba30023  swl         $v1, 0x23($sp)
    ctx->pc = 0x38dfecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_38dff0:
    // 0x38dff0: 0xbba30020  swr         $v1, 0x20($sp)
    ctx->pc = 0x38dff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_38dff4:
    // 0x38dff4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x38dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_38dff8:
    // 0x38dff8: 0x8ba30023  lwl         $v1, 0x23($sp)
    ctx->pc = 0x38dff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_38dffc:
    // 0x38dffc: 0x9ba30020  lwr         $v1, 0x20($sp)
    ctx->pc = 0x38dffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_38e000:
    // 0x38e000: 0xaba30007  swl         $v1, 0x7($sp)
    ctx->pc = 0x38e000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_38e004:
    // 0x38e004: 0xbba30004  swr         $v1, 0x4($sp)
    ctx->pc = 0x38e004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_38e008:
    // 0x38e008: 0x40f809  jalr        $v0
label_38e00c:
    if (ctx->pc == 0x38E00Cu) {
        ctx->pc = 0x38E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E008u;
        // 0x38e00c: 0x34a50007  ori         $a1, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E010u;
        goto label_38e010;
    }
    ctx->pc = 0x38E008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E010u);
        ctx->pc = 0x38E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E008u;
        // 0x38e00c: 0x34a50007  ori         $a1, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E008u, 0x38E010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E010u;
label_38e010:
    // 0x38e010: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38e010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38e014:
    // 0x38e014: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_38e018:
    if (ctx->pc == 0x38E018u) {
        ctx->pc = 0x38E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E014u;
        // 0x38e018: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E01Cu;
        goto label_38e01c;
    }
    ctx->pc = 0x38E014u;
    {
        const bool branch_taken_0x38e014 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E014u;
        // 0x38e018: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e014) {
            ctx->pc = 0x38E024u;
            goto label_38e024;
        }
    }
    ctx->pc = 0x38E01Cu;
label_38e01c:
    // 0x38e01c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_38e020:
    if (ctx->pc == 0x38E020u) {
        ctx->pc = 0x38E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E01Cu;
        // 0x38e020: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E024u;
        goto label_38e024;
    }
    ctx->pc = 0x38E01Cu;
    {
        const bool branch_taken_0x38e01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E01Cu;
        // 0x38e020: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e01c) {
            ctx->pc = 0x38E088u;
            goto label_38e088;
        }
    }
    ctx->pc = 0x38E024u;
label_38e024:
    // 0x38e024: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x38e024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_38e028:
    // 0x38e028: 0xa6030018  sh          $v1, 0x18($s0)
    ctx->pc = 0x38e028u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 3));
label_38e02c:
    // 0x38e02c: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x38e02cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
label_38e030:
    // 0x38e030: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x38e030u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_38e034:
    // 0x38e034: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38e034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38e038:
    // 0x38e038: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x38e038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
label_38e03c:
    // 0x38e03c: 0x2484ae00  addiu       $a0, $a0, -0x5200
    ctx->pc = 0x38e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
label_38e040:
    // 0x38e040: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x38e040u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_38e044:
    // 0x38e044: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38e044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e048:
    // 0x38e048: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x38e048u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_38e04c:
    // 0x38e04c: 0x8ba20033  lwl         $v0, 0x33($sp)
    ctx->pc = 0x38e04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_38e050:
    // 0x38e050: 0x9ba20030  lwr         $v0, 0x30($sp)
    ctx->pc = 0x38e050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_38e054:
    // 0x38e054: 0xaa020007  swl         $v0, 0x7($s0)
    ctx->pc = 0x38e054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_38e058:
    // 0x38e058: 0xba020004  swr         $v0, 0x4($s0)
    ctx->pc = 0x38e058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_38e05c:
    // 0x38e05c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38e060:
    // 0x38e060: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x38e060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_38e064:
    // 0x38e064: 0x24c8ae18  addiu       $t0, $a2, -0x51E8
    ctx->pc = 0x38e064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946328));
label_38e068:
    // 0x38e068: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x38e068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_38e06c:
    // 0x38e06c: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x38e06cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_38e070:
    // 0x38e070: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x38e070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_38e074:
    // 0x38e074: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x38e074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38e078:
    // 0x38e078: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x38e078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38e07c:
    // 0x38e07c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x38e07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_38e080:
    // 0x38e080: 0xc104c80  jal         func_413200
label_38e084:
    if (ctx->pc == 0x38E084u) {
        ctx->pc = 0x38E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E080u;
        // 0x38e084: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E088u;
        goto label_38e088;
    }
    ctx->pc = 0x38E080u;
    SET_GPR_U32(ctx, 31, 0x38E088u);
    ctx->pc = 0x38E084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E080u;
    // 0x38e084: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x38E080u, 0x38E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E088u;
label_38e088:
    // 0x38e088: 0x12200086  beqz        $s1, . + 4 + (0x86 << 2)
label_38e08c:
    if (ctx->pc == 0x38E08Cu) {
        ctx->pc = 0x38E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E088u;
        // 0x38e08c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E090u;
        goto label_38e090;
    }
    ctx->pc = 0x38E088u;
    {
        const bool branch_taken_0x38e088 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E088u;
        // 0x38e08c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e088) {
            ctx->pc = 0x38E2A4u;
            goto label_38e2a4;
        }
    }
    ctx->pc = 0x38E090u;
label_38e090:
    // 0x38e090: 0x8ba20007  lwl         $v0, 0x7($sp)
    ctx->pc = 0x38e090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_38e094:
    // 0x38e094: 0x9ba20004  lwr         $v0, 0x4($sp)
    ctx->pc = 0x38e094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_38e098:
    // 0x38e098: 0xaa220007  swl         $v0, 0x7($s1)
    ctx->pc = 0x38e098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_38e09c:
    // 0x38e09c: 0xba220004  swr         $v0, 0x4($s1)
    ctx->pc = 0x38e09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_38e0a0:
    // 0x38e0a0: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x38e0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_38e0a4:
    // 0x38e0a4: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x38e0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_38e0a8:
    // 0x38e0a8: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x38e0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_38e0ac:
    // 0x38e0ac: 0xb2260013  sdl         $a2, 0x13($s1)
    ctx->pc = 0x38e0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38e0b0:
    // 0x38e0b0: 0xb626000c  sdr         $a2, 0xC($s1)
    ctx->pc = 0x38e0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38e0b4:
    // 0x38e0b4: 0xae270014  sw          $a3, 0x14($s1)
    ctx->pc = 0x38e0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 7));
label_38e0b8:
    // 0x38e0b8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x38e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_38e0bc:
    // 0x38e0bc: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x38e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_38e0c0:
    // 0x38e0c0: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_38e0c4:
    if (ctx->pc == 0x38E0C4u) {
        ctx->pc = 0x38E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0C0u;
        // 0x38e0c4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E0C8u;
        goto label_38e0c8;
    }
    ctx->pc = 0x38E0C0u;
    {
        const bool branch_taken_0x38e0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0C0u;
        // 0x38e0c4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0c0) {
            ctx->pc = 0x38E1DCu;
            goto label_38e1dc;
        }
    }
    ctx->pc = 0x38E0C8u;
label_38e0c8:
    // 0x38e0c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38e0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38e0cc:
    // 0x38e0cc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x38e0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38e0d0:
    // 0x38e0d0: 0xc103322  jal         func_40CC88
label_38e0d4:
    if (ctx->pc == 0x38E0D4u) {
        ctx->pc = 0x38E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0D0u;
        // 0x38e0d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E0D8u;
        goto label_38e0d8;
    }
    ctx->pc = 0x38E0D0u;
    SET_GPR_U32(ctx, 31, 0x38E0D8u);
    ctx->pc = 0x38E0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E0D0u;
    // 0x38e0d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x38E0D0u, 0x38E0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E0D8u;
label_38e0d8:
    // 0x38e0d8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_38e0dc:
    if (ctx->pc == 0x38E0DCu) {
        ctx->pc = 0x38E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0D8u;
        // 0x38e0dc: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E0E0u;
        goto label_38e0e0;
    }
    ctx->pc = 0x38E0D8u;
    {
        const bool branch_taken_0x38e0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0D8u;
        // 0x38e0dc: 0x8fa30064  lw          $v1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0d8) {
            ctx->pc = 0x38E13Cu;
            goto label_38e13c;
        }
    }
    ctx->pc = 0x38E0E0u;
label_38e0e0:
    // 0x38e0e0: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x38e0e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_38e0e4:
    // 0x38e0e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38e0e8:
    // 0x38e0e8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_38e0ec:
    if (ctx->pc == 0x38E0ECu) {
        ctx->pc = 0x38E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0E8u;
        // 0x38e0ec: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E0F0u;
        goto label_38e0f0;
    }
    ctx->pc = 0x38E0E8u;
    {
        const bool branch_taken_0x38e0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0E8u;
        // 0x38e0ec: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0e8) {
            ctx->pc = 0x38E130u;
            goto label_38e130;
        }
    }
    ctx->pc = 0x38E0F0u;
label_38e0f0:
    // 0x38e0f0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38e0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38e0f4:
    // 0x38e0f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38e0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e0f8:
    // 0x38e0f8: 0xc104ca6  jal         func_413298
label_38e0fc:
    if (ctx->pc == 0x38E0FCu) {
        ctx->pc = 0x38E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0F8u;
        // 0x38e0fc: 0x2484ae00  addiu       $a0, $a0, -0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E100u;
        goto label_38e100;
    }
    ctx->pc = 0x38E0F8u;
    SET_GPR_U32(ctx, 31, 0x38E100u);
    ctx->pc = 0x38E0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E0F8u;
    // 0x38e0fc: 0x2484ae00  addiu       $a0, $a0, -0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38E0F8u, 0x38E100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E100u;
label_38e100:
    // 0x38e100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e104:
    // 0x38e104: 0xc0e39e0  jal         func_38E780
label_38e108:
    if (ctx->pc == 0x38E108u) {
        ctx->pc = 0x38E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E104u;
        // 0x38e108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E10Cu;
        goto label_38e10c;
    }
    ctx->pc = 0x38E104u;
    SET_GPR_U32(ctx, 31, 0x38E10Cu);
    ctx->pc = 0x38E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E104u;
    // 0x38e108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x38E104u, 0x38E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E10Cu;
label_38e10c:
    // 0x38e10c: 0x8f83bd40  lw          $v1, -0x42C0($gp)
    ctx->pc = 0x38e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950208)));
label_38e110:
    // 0x38e110: 0x2664e880  addiu       $a0, $s3, -0x1780
    ctx->pc = 0x38e110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_38e114:
    // 0x38e114: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x38e114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_38e118:
    // 0x38e118: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38e118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e11c:
    // 0x38e11c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38e120:
    // 0x38e120: 0x40f809  jalr        $v0
label_38e124:
    if (ctx->pc == 0x38E124u) {
        ctx->pc = 0x38E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E120u;
        // 0x38e124: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E128u;
        goto label_38e128;
    }
    ctx->pc = 0x38E120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E128u);
        ctx->pc = 0x38E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E120u;
        // 0x38e124: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E120u, 0x38E128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E128u;
label_38e128:
    // 0x38e128: 0x1000005e  b           . + 4 + (0x5E << 2)
label_38e12c:
    if (ctx->pc == 0x38E12Cu) {
        ctx->pc = 0x38E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E128u;
        // 0x38e12c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E130u;
        goto label_38e130;
    }
    ctx->pc = 0x38E128u;
    {
        const bool branch_taken_0x38e128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E128u;
        // 0x38e12c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e128) {
            ctx->pc = 0x38E2A4u;
            goto label_38e2a4;
        }
    }
    ctx->pc = 0x38E130u;
label_38e130:
    // 0x38e130: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x38e130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_38e134:
    // 0x38e134: 0x1000005a  b           . + 4 + (0x5A << 2)
label_38e138:
    if (ctx->pc == 0x38E138u) {
        ctx->pc = 0x38E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E134u;
        // 0x38e138: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E13Cu;
        goto label_38e13c;
    }
    ctx->pc = 0x38E134u;
    {
        const bool branch_taken_0x38e134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E134u;
        // 0x38e138: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e134) {
            ctx->pc = 0x38E2A0u;
            goto label_38e2a0;
        }
    }
    ctx->pc = 0x38E13Cu;
label_38e13c:
    // 0x38e13c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x38e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_38e140:
    // 0x38e140: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x38e140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_38e144:
    // 0x38e144: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38e144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38e148:
    // 0x38e148: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x38e148u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_38e14c:
    // 0x38e14c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_38e150:
    if (ctx->pc == 0x38E150u) {
        ctx->pc = 0x38E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E14Cu;
        // 0x38e150: 0x86230018  lh          $v1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E154u;
        goto label_38e154;
    }
    ctx->pc = 0x38E14Cu;
    {
        const bool branch_taken_0x38e14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e14c) {
            ctx->pc = 0x38E150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E14Cu;
            // 0x38e150: 0x86230018  lh          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E164u;
            goto label_38e164;
        }
    }
    ctx->pc = 0x38E154u;
label_38e154:
    // 0x38e154: 0xc1057ca  jal         func_415F28
label_38e158:
    if (ctx->pc == 0x38E158u) {
        ctx->pc = 0x38E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E154u;
        // 0x38e158: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E15Cu;
        goto label_38e15c;
    }
    ctx->pc = 0x38E154u;
    SET_GPR_U32(ctx, 31, 0x38E15Cu);
    ctx->pc = 0x38E158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E154u;
    // 0x38e158: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415F28u, 0x38E154u, 0x38E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E15Cu;
label_38e15c:
    // 0x38e15c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_38e160:
    if (ctx->pc == 0x38E160u) {
        ctx->pc = 0x38E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E15Cu;
        // 0x38e160: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E164u;
        goto label_38e164;
    }
    ctx->pc = 0x38E15Cu;
    {
        const bool branch_taken_0x38e15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E15Cu;
        // 0x38e160: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e15c) {
            ctx->pc = 0x38E1DCu;
            goto label_38e1dc;
        }
    }
    ctx->pc = 0x38E164u;
label_38e164:
    // 0x38e164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38e168:
    // 0x38e168: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_38e16c:
    if (ctx->pc == 0x38E16Cu) {
        ctx->pc = 0x38E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E168u;
        // 0x38e16c: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E170u;
        goto label_38e170;
    }
    ctx->pc = 0x38E168u;
    {
        const bool branch_taken_0x38e168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E168u;
        // 0x38e16c: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e168) {
            ctx->pc = 0x38E1B0u;
            goto label_38e1b0;
        }
    }
    ctx->pc = 0x38E170u;
label_38e170:
    // 0x38e170: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38e170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38e174:
    // 0x38e174: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38e174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e178:
    // 0x38e178: 0xc104ca6  jal         func_413298
label_38e17c:
    if (ctx->pc == 0x38E17Cu) {
        ctx->pc = 0x38E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E178u;
        // 0x38e17c: 0x2484ae00  addiu       $a0, $a0, -0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E180u;
        goto label_38e180;
    }
    ctx->pc = 0x38E178u;
    SET_GPR_U32(ctx, 31, 0x38E180u);
    ctx->pc = 0x38E17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E178u;
    // 0x38e17c: 0x2484ae00  addiu       $a0, $a0, -0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38E178u, 0x38E180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E180u;
label_38e180:
    // 0x38e180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e184:
    // 0x38e184: 0xc0e39e0  jal         func_38E780
label_38e188:
    if (ctx->pc == 0x38E188u) {
        ctx->pc = 0x38E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E184u;
        // 0x38e188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E18Cu;
        goto label_38e18c;
    }
    ctx->pc = 0x38E184u;
    SET_GPR_U32(ctx, 31, 0x38E18Cu);
    ctx->pc = 0x38E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E184u;
    // 0x38e188: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x38E184u, 0x38E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E18Cu;
label_38e18c:
    // 0x38e18c: 0x8f83bd40  lw          $v1, -0x42C0($gp)
    ctx->pc = 0x38e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950208)));
label_38e190:
    // 0x38e190: 0x2664e880  addiu       $a0, $s3, -0x1780
    ctx->pc = 0x38e190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_38e194:
    // 0x38e194: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x38e194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_38e198:
    // 0x38e198: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38e198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e19c:
    // 0x38e19c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38e19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38e1a0:
    // 0x38e1a0: 0x40f809  jalr        $v0
label_38e1a4:
    if (ctx->pc == 0x38E1A4u) {
        ctx->pc = 0x38E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1A0u;
        // 0x38e1a4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E1A8u;
        goto label_38e1a8;
    }
    ctx->pc = 0x38E1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E1A8u);
        ctx->pc = 0x38E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1A0u;
        // 0x38e1a4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E1A0u, 0x38E1A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E1A8u;
label_38e1a8:
    // 0x38e1a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_38e1ac:
    if (ctx->pc == 0x38E1ACu) {
        ctx->pc = 0x38E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1A8u;
        // 0x38e1ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E1B0u;
        goto label_38e1b0;
    }
    ctx->pc = 0x38E1A8u;
    {
        const bool branch_taken_0x38e1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1A8u;
        // 0x38e1ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e1a8) {
            ctx->pc = 0x38E1C0u;
            goto label_38e1c0;
        }
    }
    ctx->pc = 0x38E1B0u;
label_38e1b0:
    // 0x38e1b0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x38e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_38e1b4:
    // 0x38e1b4: 0xa6220018  sh          $v0, 0x18($s1)
    ctx->pc = 0x38e1b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
label_38e1b8:
    // 0x38e1b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38e1bc:
    // 0x38e1bc: 0x0  nop
    ctx->pc = 0x38e1bcu;
    // NOP
label_38e1c0:
    // 0x38e1c0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38e1c4:
    // 0x38e1c4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x38e1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_38e1c8:
    // 0x38e1c8: 0xc1035f6  jal         func_40D7D8
label_38e1cc:
    if (ctx->pc == 0x38E1CCu) {
        ctx->pc = 0x38E1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1C8u;
        // 0x38e1cc: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E1D0u;
        goto label_38e1d0;
    }
    ctx->pc = 0x38E1C8u;
    SET_GPR_U32(ctx, 31, 0x38E1D0u);
    ctx->pc = 0x38E1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E1C8u;
    // 0x38e1cc: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38E1C8u, 0x38E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E1D0u;
label_38e1d0:
    // 0x38e1d0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x38e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_38e1d4:
    // 0x38e1d4: 0x10000030  b           . + 4 + (0x30 << 2)
label_38e1d8:
    if (ctx->pc == 0x38E1D8u) {
        ctx->pc = 0x38E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1D4u;
        // 0x38e1d8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E1DCu;
        goto label_38e1dc;
    }
    ctx->pc = 0x38E1D4u;
    {
        const bool branch_taken_0x38e1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1D4u;
        // 0x38e1d8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e1d4) {
            ctx->pc = 0x38E298u;
            goto label_38e298;
        }
    }
    ctx->pc = 0x38E1DCu;
label_38e1dc:
    // 0x38e1dc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x38e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_38e1e0:
    // 0x38e1e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38e1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38e1e4:
    // 0x38e1e4: 0x2450ae00  addiu       $s0, $v0, -0x5200
    ctx->pc = 0x38e1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946304));
label_38e1e8:
    // 0x38e1e8: 0xaf80bd48  sw          $zero, -0x42B8($gp)
    ctx->pc = 0x38e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950216), GPR_U32(ctx, 0));
label_38e1ec:
    // 0x38e1ec: 0xaf80bd4c  sw          $zero, -0x42B4($gp)
    ctx->pc = 0x38e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950220), GPR_U32(ctx, 0));
label_38e1f0:
    // 0x38e1f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e1f4:
    // 0x38e1f4: 0xc1049e2  jal         func_412788
label_38e1f8:
    if (ctx->pc == 0x38E1F8u) {
        ctx->pc = 0x38E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1F4u;
        // 0x38e1f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E1FCu;
        goto label_38e1fc;
    }
    ctx->pc = 0x38E1F4u;
    SET_GPR_U32(ctx, 31, 0x38E1FCu);
    ctx->pc = 0x38E1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E1F4u;
    // 0x38e1f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412788u, 0x38E1F4u, 0x38E1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E1FCu;
label_38e1fc:
    // 0x38e1fc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_38e200:
    if (ctx->pc == 0x38E200u) {
        ctx->pc = 0x38E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1FCu;
        // 0x38e200: 0x8f85bd48  lw          $a1, -0x42B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E204u;
        goto label_38e204;
    }
    ctx->pc = 0x38E1FCu;
    {
        const bool branch_taken_0x38e1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E1FCu;
        // 0x38e200: 0x8f85bd48  lw          $a1, -0x42B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e1fc) {
            ctx->pc = 0x38E25Cu;
            goto label_38e25c;
        }
    }
    ctx->pc = 0x38E204u;
label_38e204:
    // 0x38e204: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x38e204u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_38e208:
    // 0x38e208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38e208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38e20c:
    // 0x38e20c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_38e210:
    if (ctx->pc == 0x38E210u) {
        ctx->pc = 0x38E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E20Cu;
        // 0x38e210: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E214u;
        goto label_38e214;
    }
    ctx->pc = 0x38E20Cu;
    {
        const bool branch_taken_0x38e20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E20Cu;
        // 0x38e210: 0x96240018  lhu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e20c) {
            ctx->pc = 0x38E250u;
            goto label_38e250;
        }
    }
    ctx->pc = 0x38E214u;
label_38e214:
    // 0x38e214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e218:
    // 0x38e218: 0xc104ca6  jal         func_413298
label_38e21c:
    if (ctx->pc == 0x38E21Cu) {
        ctx->pc = 0x38E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E218u;
        // 0x38e21c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E220u;
        goto label_38e220;
    }
    ctx->pc = 0x38E218u;
    SET_GPR_U32(ctx, 31, 0x38E220u);
    ctx->pc = 0x38E21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E218u;
    // 0x38e21c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38E218u, 0x38E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E220u;
label_38e220:
    // 0x38e220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e224:
    // 0x38e224: 0xc0e39e0  jal         func_38E780
label_38e228:
    if (ctx->pc == 0x38E228u) {
        ctx->pc = 0x38E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E224u;
        // 0x38e228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E22Cu;
        goto label_38e22c;
    }
    ctx->pc = 0x38E224u;
    SET_GPR_U32(ctx, 31, 0x38E22Cu);
    ctx->pc = 0x38E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E224u;
    // 0x38e228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x38E224u, 0x38E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E22Cu;
label_38e22c:
    // 0x38e22c: 0x8f83bd40  lw          $v1, -0x42C0($gp)
    ctx->pc = 0x38e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950208)));
label_38e230:
    // 0x38e230: 0x2664e880  addiu       $a0, $s3, -0x1780
    ctx->pc = 0x38e230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_38e234:
    // 0x38e234: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x38e234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_38e238:
    // 0x38e238: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38e238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e23c:
    // 0x38e23c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38e240:
    // 0x38e240: 0x40f809  jalr        $v0
label_38e244:
    if (ctx->pc == 0x38E244u) {
        ctx->pc = 0x38E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E240u;
        // 0x38e244: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E248u;
        goto label_38e248;
    }
    ctx->pc = 0x38E240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E248u);
        ctx->pc = 0x38E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E240u;
        // 0x38e244: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E240u, 0x38E248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E248u;
label_38e248:
    // 0x38e248: 0x10000016  b           . + 4 + (0x16 << 2)
label_38e24c:
    if (ctx->pc == 0x38E24Cu) {
        ctx->pc = 0x38E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E248u;
        // 0x38e24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E250u;
        goto label_38e250;
    }
    ctx->pc = 0x38E248u;
    {
        const bool branch_taken_0x38e248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E248u;
        // 0x38e24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e248) {
            ctx->pc = 0x38E2A4u;
            goto label_38e2a4;
        }
    }
    ctx->pc = 0x38E250u;
label_38e250:
    // 0x38e250: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x38e250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_38e254:
    // 0x38e254: 0x10000012  b           . + 4 + (0x12 << 2)
label_38e258:
    if (ctx->pc == 0x38E258u) {
        ctx->pc = 0x38E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E254u;
        // 0x38e258: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E25Cu;
        goto label_38e25c;
    }
    ctx->pc = 0x38E254u;
    {
        const bool branch_taken_0x38e254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E254u;
        // 0x38e258: 0xa6220018  sh          $v0, 0x18($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e254) {
            ctx->pc = 0x38E2A0u;
            goto label_38e2a0;
        }
    }
    ctx->pc = 0x38E25Cu;
label_38e25c:
    // 0x38e25c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_38e260:
    if (ctx->pc == 0x38E260u) {
        ctx->pc = 0x38E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E25Cu;
        // 0x38e260: 0x8f87bd4c  lw          $a3, -0x42B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E264u;
        goto label_38e264;
    }
    ctx->pc = 0x38E25Cu;
    {
        const bool branch_taken_0x38e25c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E25Cu;
        // 0x38e260: 0x8f87bd4c  lw          $a3, -0x42B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e25c) {
            ctx->pc = 0x38E270u;
            goto label_38e270;
        }
    }
    ctx->pc = 0x38E264u;
label_38e264:
    // 0x38e264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e268:
    // 0x38e268: 0xc104b0a  jal         func_412C28
label_38e26c:
    if (ctx->pc == 0x38E26Cu) {
        ctx->pc = 0x38E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E268u;
        // 0x38e26c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E270u;
        goto label_38e270;
    }
    ctx->pc = 0x38E268u;
    SET_GPR_U32(ctx, 31, 0x38E270u);
    ctx->pc = 0x38E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E268u;
    // 0x38e26c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412C28u, 0x38E268u, 0x38E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E270u;
label_38e270:
    // 0x38e270: 0x1000000c  b           . + 4 + (0xC << 2)
label_38e274:
    if (ctx->pc == 0x38E274u) {
        ctx->pc = 0x38E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E270u;
        // 0x38e274: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E278u;
        goto label_38e278;
    }
    ctx->pc = 0x38E270u;
    {
        const bool branch_taken_0x38e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E270u;
        // 0x38e274: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e270) {
            ctx->pc = 0x38E2A4u;
            goto label_38e2a4;
        }
    }
    ctx->pc = 0x38E278u;
label_38e278:
    // 0x38e278: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38e278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38e27c:
    // 0x38e27c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38e27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38e280:
    // 0x38e280: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x38e280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_38e284:
    // 0x38e284: 0xc1035f6  jal         func_40D7D8
label_38e288:
    if (ctx->pc == 0x38E288u) {
        ctx->pc = 0x38E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E284u;
        // 0x38e288: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E28Cu;
        goto label_38e28c;
    }
    ctx->pc = 0x38E284u;
    SET_GPR_U32(ctx, 31, 0x38E28Cu);
    ctx->pc = 0x38E288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E284u;
    // 0x38e288: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38E284u, 0x38E28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E28Cu;
label_38e28c:
    // 0x38e28c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x38e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_38e290:
    // 0x38e290: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x38e290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_38e294:
    // 0x38e294: 0x0  nop
    ctx->pc = 0x38e294u;
    // NOP
label_38e298:
    // 0x38e298: 0xc103628  jal         func_40D8A0
label_38e29c:
    if (ctx->pc == 0x38E29Cu) {
        ctx->pc = 0x38E2A0u;
        goto label_38e2a0;
    }
    ctx->pc = 0x38E298u;
    SET_GPR_U32(ctx, 31, 0x38E2A0u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38E298u, 0x38E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E2A0u;
label_38e2a0:
    // 0x38e2a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38e2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e2a4:
    // 0x38e2a4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x38e2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_38e2a8:
    // 0x38e2a8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x38e2a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_38e2ac:
    // 0x38e2ac: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x38e2acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38e2b0:
    // 0x38e2b0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x38e2b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38e2b4:
    // 0x38e2b4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x38e2b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38e2b8:
    // 0x38e2b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x38e2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_38e2bc:
    // 0x38e2bc: 0x3e00008  jr          $ra
label_38e2c0:
    if (ctx->pc == 0x38E2C0u) {
        ctx->pc = 0x38E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2BCu;
        // 0x38e2c0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E2C4u;
        goto label_38e2c4;
    }
    ctx->pc = 0x38E2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E2BCu;
        // 0x38e2c0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E2C4u;
label_38e2c4:
    // 0x38e2c4: 0x0  nop
    ctx->pc = 0x38e2c4u;
    // NOP
    ctx->pc = 0x38e2c8u;
}
