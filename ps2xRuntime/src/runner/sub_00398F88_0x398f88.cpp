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

// Function: sub_00398F88
// Address: 0x398f88 - 0x399240
void sub_00398F88_0x398f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398F88_0x398f88");
#endif

    switch (ctx->pc) {
        case 0x398f88u: goto label_398f88;
        case 0x398f8cu: goto label_398f8c;
        case 0x398f90u: goto label_398f90;
        case 0x398f94u: goto label_398f94;
        case 0x398f98u: goto label_398f98;
        case 0x398f9cu: goto label_398f9c;
        case 0x398fa0u: goto label_398fa0;
        case 0x398fa4u: goto label_398fa4;
        case 0x398fa8u: goto label_398fa8;
        case 0x398facu: goto label_398fac;
        case 0x398fb0u: goto label_398fb0;
        case 0x398fb4u: goto label_398fb4;
        case 0x398fb8u: goto label_398fb8;
        case 0x398fbcu: goto label_398fbc;
        case 0x398fc0u: goto label_398fc0;
        case 0x398fc4u: goto label_398fc4;
        case 0x398fc8u: goto label_398fc8;
        case 0x398fccu: goto label_398fcc;
        case 0x398fd0u: goto label_398fd0;
        case 0x398fd4u: goto label_398fd4;
        case 0x398fd8u: goto label_398fd8;
        case 0x398fdcu: goto label_398fdc;
        case 0x398fe0u: goto label_398fe0;
        case 0x398fe4u: goto label_398fe4;
        case 0x398fe8u: goto label_398fe8;
        case 0x398fecu: goto label_398fec;
        case 0x398ff0u: goto label_398ff0;
        case 0x398ff4u: goto label_398ff4;
        case 0x398ff8u: goto label_398ff8;
        case 0x398ffcu: goto label_398ffc;
        case 0x399000u: goto label_399000;
        case 0x399004u: goto label_399004;
        case 0x399008u: goto label_399008;
        case 0x39900cu: goto label_39900c;
        case 0x399010u: goto label_399010;
        case 0x399014u: goto label_399014;
        case 0x399018u: goto label_399018;
        case 0x39901cu: goto label_39901c;
        case 0x399020u: goto label_399020;
        case 0x399024u: goto label_399024;
        case 0x399028u: goto label_399028;
        case 0x39902cu: goto label_39902c;
        case 0x399030u: goto label_399030;
        case 0x399034u: goto label_399034;
        case 0x399038u: goto label_399038;
        case 0x39903cu: goto label_39903c;
        case 0x399040u: goto label_399040;
        case 0x399044u: goto label_399044;
        case 0x399048u: goto label_399048;
        case 0x39904cu: goto label_39904c;
        case 0x399050u: goto label_399050;
        case 0x399054u: goto label_399054;
        case 0x399058u: goto label_399058;
        case 0x39905cu: goto label_39905c;
        case 0x399060u: goto label_399060;
        case 0x399064u: goto label_399064;
        case 0x399068u: goto label_399068;
        case 0x39906cu: goto label_39906c;
        case 0x399070u: goto label_399070;
        case 0x399074u: goto label_399074;
        case 0x399078u: goto label_399078;
        case 0x39907cu: goto label_39907c;
        case 0x399080u: goto label_399080;
        case 0x399084u: goto label_399084;
        case 0x399088u: goto label_399088;
        case 0x39908cu: goto label_39908c;
        case 0x399090u: goto label_399090;
        case 0x399094u: goto label_399094;
        case 0x399098u: goto label_399098;
        case 0x39909cu: goto label_39909c;
        case 0x3990a0u: goto label_3990a0;
        case 0x3990a4u: goto label_3990a4;
        case 0x3990a8u: goto label_3990a8;
        case 0x3990acu: goto label_3990ac;
        case 0x3990b0u: goto label_3990b0;
        case 0x3990b4u: goto label_3990b4;
        case 0x3990b8u: goto label_3990b8;
        case 0x3990bcu: goto label_3990bc;
        case 0x3990c0u: goto label_3990c0;
        case 0x3990c4u: goto label_3990c4;
        case 0x3990c8u: goto label_3990c8;
        case 0x3990ccu: goto label_3990cc;
        case 0x3990d0u: goto label_3990d0;
        case 0x3990d4u: goto label_3990d4;
        case 0x3990d8u: goto label_3990d8;
        case 0x3990dcu: goto label_3990dc;
        case 0x3990e0u: goto label_3990e0;
        case 0x3990e4u: goto label_3990e4;
        case 0x3990e8u: goto label_3990e8;
        case 0x3990ecu: goto label_3990ec;
        case 0x3990f0u: goto label_3990f0;
        case 0x3990f4u: goto label_3990f4;
        case 0x3990f8u: goto label_3990f8;
        case 0x3990fcu: goto label_3990fc;
        case 0x399100u: goto label_399100;
        case 0x399104u: goto label_399104;
        case 0x399108u: goto label_399108;
        case 0x39910cu: goto label_39910c;
        case 0x399110u: goto label_399110;
        case 0x399114u: goto label_399114;
        case 0x399118u: goto label_399118;
        case 0x39911cu: goto label_39911c;
        case 0x399120u: goto label_399120;
        case 0x399124u: goto label_399124;
        case 0x399128u: goto label_399128;
        case 0x39912cu: goto label_39912c;
        case 0x399130u: goto label_399130;
        case 0x399134u: goto label_399134;
        case 0x399138u: goto label_399138;
        case 0x39913cu: goto label_39913c;
        case 0x399140u: goto label_399140;
        case 0x399144u: goto label_399144;
        case 0x399148u: goto label_399148;
        case 0x39914cu: goto label_39914c;
        case 0x399150u: goto label_399150;
        case 0x399154u: goto label_399154;
        case 0x399158u: goto label_399158;
        case 0x39915cu: goto label_39915c;
        case 0x399160u: goto label_399160;
        case 0x399164u: goto label_399164;
        case 0x399168u: goto label_399168;
        case 0x39916cu: goto label_39916c;
        case 0x399170u: goto label_399170;
        case 0x399174u: goto label_399174;
        case 0x399178u: goto label_399178;
        case 0x39917cu: goto label_39917c;
        case 0x399180u: goto label_399180;
        case 0x399184u: goto label_399184;
        case 0x399188u: goto label_399188;
        case 0x39918cu: goto label_39918c;
        case 0x399190u: goto label_399190;
        case 0x399194u: goto label_399194;
        case 0x399198u: goto label_399198;
        case 0x39919cu: goto label_39919c;
        case 0x3991a0u: goto label_3991a0;
        case 0x3991a4u: goto label_3991a4;
        case 0x3991a8u: goto label_3991a8;
        case 0x3991acu: goto label_3991ac;
        case 0x3991b0u: goto label_3991b0;
        case 0x3991b4u: goto label_3991b4;
        case 0x3991b8u: goto label_3991b8;
        case 0x3991bcu: goto label_3991bc;
        case 0x3991c0u: goto label_3991c0;
        case 0x3991c4u: goto label_3991c4;
        case 0x3991c8u: goto label_3991c8;
        case 0x3991ccu: goto label_3991cc;
        case 0x3991d0u: goto label_3991d0;
        case 0x3991d4u: goto label_3991d4;
        case 0x3991d8u: goto label_3991d8;
        case 0x3991dcu: goto label_3991dc;
        case 0x3991e0u: goto label_3991e0;
        case 0x3991e4u: goto label_3991e4;
        case 0x3991e8u: goto label_3991e8;
        case 0x3991ecu: goto label_3991ec;
        case 0x3991f0u: goto label_3991f0;
        case 0x3991f4u: goto label_3991f4;
        case 0x3991f8u: goto label_3991f8;
        case 0x3991fcu: goto label_3991fc;
        case 0x399200u: goto label_399200;
        case 0x399204u: goto label_399204;
        case 0x399208u: goto label_399208;
        case 0x39920cu: goto label_39920c;
        case 0x399210u: goto label_399210;
        case 0x399214u: goto label_399214;
        case 0x399218u: goto label_399218;
        case 0x39921cu: goto label_39921c;
        case 0x399220u: goto label_399220;
        case 0x399224u: goto label_399224;
        case 0x399228u: goto label_399228;
        case 0x39922cu: goto label_39922c;
        case 0x399230u: goto label_399230;
        case 0x399234u: goto label_399234;
        case 0x399238u: goto label_399238;
        case 0x39923cu: goto label_39923c;
        default: break;
    }

    ctx->pc = 0x398f88u;

label_398f88:
    // 0x398f88: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x398f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_398f8c:
    // 0x398f8c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x398f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_398f90:
    // 0x398f90: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x398f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_398f94:
    // 0x398f94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x398f94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398f98:
    // 0x398f98: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x398f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_398f9c:
    // 0x398f9c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x398f9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398fa0:
    // 0x398fa0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x398fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_398fa4:
    // 0x398fa4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x398fa4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398fa8:
    // 0x398fa8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x398fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_398fac:
    // 0x398fac: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x398facu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_398fb0:
    // 0x398fb0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x398fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_398fb4:
    // 0x398fb4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x398fb4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_398fb8:
    // 0x398fb8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x398fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_398fbc:
    // 0x398fbc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x398fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_398fc0:
    // 0x398fc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x398fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_398fc4:
    // 0x398fc4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x398fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_398fc8:
    // 0x398fc8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x398fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_398fcc:
    // 0x398fcc: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x398fccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_398fd0:
    // 0x398fd0: 0x1220007d  beqz        $s1, . + 4 + (0x7D << 2)
label_398fd4:
    if (ctx->pc == 0x398FD4u) {
        ctx->pc = 0x398FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FD0u;
        // 0x398fd4: 0xafa70014  sw          $a3, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398FD8u;
        goto label_398fd8;
    }
    ctx->pc = 0x398FD0u;
    {
        const bool branch_taken_0x398fd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x398FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FD0u;
        // 0x398fd4: 0xafa70014  sw          $a3, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398fd0) {
            ctx->pc = 0x3991C8u;
            goto label_3991c8;
        }
    }
    ctx->pc = 0x398FD8u;
label_398fd8:
    // 0x398fd8: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x398fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_398fdc:
    // 0x398fdc: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x398fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_398fe0:
    // 0x398fe0: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x398fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_398fe4:
    // 0x398fe4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x398fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_398fe8:
    // 0x398fe8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x398fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_398fec:
    // 0x398fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398ff0:
    // 0x398ff0: 0x40f809  jalr        $v0
label_398ff4:
    if (ctx->pc == 0x398FF4u) {
        ctx->pc = 0x398FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FF0u;
        // 0x398ff4: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = 0x398FF8u;
        goto label_398ff8;
    }
    ctx->pc = 0x398FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398FF8u);
        ctx->pc = 0x398FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398FF0u;
        // 0x398ff4: 0x34a50006  ori         $a1, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398FF0u, 0x398FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398FF8u;
label_398ff8:
    // 0x398ff8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x398ff8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398ffc:
    // 0x398ffc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x398ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_399000:
    // 0x399000: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x399000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_399004:
    // 0x399004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x399004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_399008:
    // 0x399008: 0x40f809  jalr        $v0
label_39900c:
    if (ctx->pc == 0x39900Cu) {
        ctx->pc = 0x39900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399008u;
        // 0x39900c: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x399010u;
        goto label_399010;
    }
    ctx->pc = 0x399008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399010u);
        ctx->pc = 0x39900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399008u;
        // 0x39900c: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399008u, 0x399010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399010u;
label_399010:
    // 0x399010: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x399010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399014:
    // 0x399014: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x399014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_399018:
    // 0x399018: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x399018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_39901c:
    // 0x39901c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39901cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_399020:
    // 0x399020: 0x40f809  jalr        $v0
label_399024:
    if (ctx->pc == 0x399024u) {
        ctx->pc = 0x399024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399020u;
        // 0x399024: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x399028u;
        goto label_399028;
    }
    ctx->pc = 0x399020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399028u);
        ctx->pc = 0x399024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399020u;
        // 0x399024: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399020u, 0x399028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399028u;
label_399028:
    // 0x399028: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x399028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39902c:
    // 0x39902c: 0x96e20084  lhu         $v0, 0x84($s7)
    ctx->pc = 0x39902cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 132)));
label_399030:
    // 0x399030: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_399034:
    if (ctx->pc == 0x399034u) {
        ctx->pc = 0x399034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399030u;
        // 0x399034: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399038u;
        goto label_399038;
    }
    ctx->pc = 0x399030u;
    {
        const bool branch_taken_0x399030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399030u;
        // 0x399034: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399030) {
            ctx->pc = 0x39919Cu;
            goto label_39919c;
        }
    }
    ctx->pc = 0x399038u;
label_399038:
    // 0x399038: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x399038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_39903c:
    // 0x39903c: 0x0  nop
    ctx->pc = 0x39903cu;
    // NOP
label_399040:
    // 0x399040: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x399040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_399044:
    // 0x399044: 0x24900001  addiu       $s0, $a0, 0x1
    ctx->pc = 0x399044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_399048:
    // 0x399048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x399048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39904c:
    // 0x39904c: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x39904cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_399050:
    // 0x399050: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x399050u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399054:
    // 0x399054: 0x95020006  lhu         $v0, 0x6($t0)
    ctx->pc = 0x399054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_399058:
    // 0x399058: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x399058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_39905c:
    // 0x39905c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39905cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_399060:
    // 0x399060: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x399060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_399064:
    // 0x399064: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x399064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_399068:
    // 0x399068: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
label_39906c:
    if (ctx->pc == 0x39906Cu) {
        ctx->pc = 0x39906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399068u;
        // 0x39906c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399070u;
        goto label_399070;
    }
    ctx->pc = 0x399068u;
    {
        const bool branch_taken_0x399068 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x39906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399068u;
        // 0x39906c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399068) {
            ctx->pc = 0x3990A0u;
            goto label_3990a0;
        }
    }
    ctx->pc = 0x399070u;
label_399070:
    // 0x399070: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x399070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_399074:
    // 0x399074: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
label_399078:
    if (ctx->pc == 0x399078u) {
        ctx->pc = 0x399078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399074u;
        // 0x399078: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39907Cu;
        goto label_39907c;
    }
    ctx->pc = 0x399074u;
    {
        const bool branch_taken_0x399074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x399078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399074u;
        // 0x399078: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399074) {
            ctx->pc = 0x3990A0u;
            goto label_3990a0;
        }
    }
    ctx->pc = 0x39907Cu;
label_39907c:
    // 0x39907c: 0x0  nop
    ctx->pc = 0x39907cu;
    // NOP
label_399080:
    // 0x399080: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x399080u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_399084:
    // 0x399084: 0x156182b  sltu        $v1, $t2, $s6
    ctx->pc = 0x399084u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_399088:
    // 0x399088: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_39908c:
    if (ctx->pc == 0x39908Cu) {
        ctx->pc = 0x39908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399088u;
        // 0x39908c: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399090u;
        goto label_399090;
    }
    ctx->pc = 0x399088u;
    {
        const bool branch_taken_0x399088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399088u;
        // 0x39908c: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399088) {
            ctx->pc = 0x3990A0u;
            goto label_3990a0;
        }
    }
    ctx->pc = 0x399090u;
label_399090:
    // 0x399090: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x399090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_399094:
    // 0x399094: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x399094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_399098:
    // 0x399098: 0x1464fff9  bne         $v1, $a0, . + 4 + (-0x7 << 2)
label_39909c:
    if (ctx->pc == 0x39909Cu) {
        ctx->pc = 0x39909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399098u;
        // 0x39909c: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3990A0u;
        goto label_3990a0;
    }
    ctx->pc = 0x399098u;
    {
        const bool branch_taken_0x399098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x39909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399098u;
        // 0x39909c: 0x25420001  addiu       $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399098) {
            ctx->pc = 0x399080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399080;
        }
    }
    ctx->pc = 0x3990A0u;
label_3990a0:
    // 0x3990a0: 0x15560005  bne         $t2, $s6, . + 4 + (0x5 << 2)
label_3990a4:
    if (ctx->pc == 0x3990A4u) {
        ctx->pc = 0x3990A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990A0u;
        // 0x3990a4: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3990A8u;
        goto label_3990a8;
    }
    ctx->pc = 0x3990A0u;
    {
        const bool branch_taken_0x3990a0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 22));
        ctx->pc = 0x3990A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990A0u;
        // 0x3990a4: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3990a0) {
            ctx->pc = 0x3990B8u;
            goto label_3990b8;
        }
    }
    ctx->pc = 0x3990A8u;
label_3990a8:
    // 0x3990a8: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x3990a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3990ac:
    // 0x3990ac: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3990acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3990b0:
    // 0x3990b0: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x3990b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_3990b4:
    // 0x3990b4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3990b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3990b8:
    // 0x3990b8: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
label_3990bc:
    if (ctx->pc == 0x3990BCu) {
        ctx->pc = 0x3990BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990B8u;
        // 0x3990bc: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3990C0u;
        goto label_3990c0;
    }
    ctx->pc = 0x3990B8u;
    {
        const bool branch_taken_0x3990b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3990b8) {
            ctx->pc = 0x3990BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3990B8u;
            // 0x3990bc: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3990C0u;
            goto label_3990c0;
        }
    }
    ctx->pc = 0x3990C0u;
label_3990c0:
    // 0x3990c0: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_3990c4:
    if (ctx->pc == 0x3990C4u) {
        ctx->pc = 0x3990C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990C0u;
        // 0x3990c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3990C8u;
        goto label_3990c8;
    }
    ctx->pc = 0x3990C0u;
    {
        const bool branch_taken_0x3990c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3990C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990C0u;
        // 0x3990c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3990c0) {
            ctx->pc = 0x3990F8u;
            goto label_3990f8;
        }
    }
    ctx->pc = 0x3990C8u;
label_3990c8:
    // 0x3990c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3990c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3990cc:
    // 0x3990cc: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
label_3990d0:
    if (ctx->pc == 0x3990D0u) {
        ctx->pc = 0x3990D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990CCu;
        // 0x3990d0: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3990D4u;
        goto label_3990d4;
    }
    ctx->pc = 0x3990CCu;
    {
        const bool branch_taken_0x3990cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x3990D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990CCu;
        // 0x3990d0: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3990cc) {
            ctx->pc = 0x3990F8u;
            goto label_3990f8;
        }
    }
    ctx->pc = 0x3990D4u;
label_3990d4:
    // 0x3990d4: 0x0  nop
    ctx->pc = 0x3990d4u;
    // NOP
label_3990d8:
    // 0x3990d8: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x3990d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3990dc:
    // 0x3990dc: 0x175182b  sltu        $v1, $t3, $s5
    ctx->pc = 0x3990dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_3990e0:
    // 0x3990e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3990e4:
    if (ctx->pc == 0x3990E4u) {
        ctx->pc = 0x3990E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990E0u;
        // 0x3990e4: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3990E8u;
        goto label_3990e8;
    }
    ctx->pc = 0x3990E0u;
    {
        const bool branch_taken_0x3990e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3990E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990E0u;
        // 0x3990e4: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3990e0) {
            ctx->pc = 0x3990F8u;
            goto label_3990f8;
        }
    }
    ctx->pc = 0x3990E8u;
label_3990e8:
    // 0x3990e8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3990e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3990ec:
    // 0x3990ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3990ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3990f0:
    // 0x3990f0: 0x1466fff9  bne         $v1, $a2, . + 4 + (-0x7 << 2)
label_3990f4:
    if (ctx->pc == 0x3990F4u) {
        ctx->pc = 0x3990F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990F0u;
        // 0x3990f4: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3990F8u;
        goto label_3990f8;
    }
    ctx->pc = 0x3990F0u;
    {
        const bool branch_taken_0x3990f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x3990F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990F0u;
        // 0x3990f4: 0x25620001  addiu       $v0, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3990f0) {
            ctx->pc = 0x3990D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3990d8;
        }
    }
    ctx->pc = 0x3990F8u;
label_3990f8:
    // 0x3990f8: 0x55750007  bnel        $t3, $s5, . + 4 + (0x7 << 2)
label_3990fc:
    if (ctx->pc == 0x3990FCu) {
        ctx->pc = 0x3990FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990F8u;
        // 0x3990fc: 0x8ca60008  lw          $a2, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399100u;
        goto label_399100;
    }
    ctx->pc = 0x3990F8u;
    {
        const bool branch_taken_0x3990f8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 21));
        if (branch_taken_0x3990f8) {
            ctx->pc = 0x3990FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3990F8u;
            // 0x3990fc: 0x8ca60008  lw          $a2, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399118u;
            goto label_399118;
        }
    }
    ctx->pc = 0x399100u;
label_399100:
    // 0x399100: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x399100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_399104:
    // 0x399104: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x399104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_399108:
    // 0x399108: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x399108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_39910c:
    // 0x39910c: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x39910cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_399110:
    // 0x399110: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x399110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_399114:
    // 0x399114: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x399114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_399118:
    // 0x399118: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_39911c:
    if (ctx->pc == 0x39911Cu) {
        ctx->pc = 0x39911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399118u;
        // 0x39911c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399120u;
        goto label_399120;
    }
    ctx->pc = 0x399118u;
    {
        const bool branch_taken_0x399118 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x39911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399118u;
        // 0x39911c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399118) {
            ctx->pc = 0x399150u;
            goto label_399150;
        }
    }
    ctx->pc = 0x399120u;
label_399120:
    // 0x399120: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x399120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_399124:
    // 0x399124: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
label_399128:
    if (ctx->pc == 0x399128u) {
        ctx->pc = 0x399128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399124u;
        // 0x399128: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39912Cu;
        goto label_39912c;
    }
    ctx->pc = 0x399124u;
    {
        const bool branch_taken_0x399124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x399128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399124u;
        // 0x399128: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399124) {
            ctx->pc = 0x399150u;
            goto label_399150;
        }
    }
    ctx->pc = 0x39912Cu;
label_39912c:
    // 0x39912c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x39912cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_399130:
    // 0x399130: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x399130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_399134:
    // 0x399134: 0x94182b  sltu        $v1, $a0, $s4
    ctx->pc = 0x399134u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_399138:
    // 0x399138: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_39913c:
    if (ctx->pc == 0x39913Cu) {
        ctx->pc = 0x39913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399138u;
        // 0x39913c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399140u;
        goto label_399140;
    }
    ctx->pc = 0x399138u;
    {
        const bool branch_taken_0x399138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399138u;
        // 0x39913c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399138) {
            ctx->pc = 0x399150u;
            goto label_399150;
        }
    }
    ctx->pc = 0x399140u;
label_399140:
    // 0x399140: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x399140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_399144:
    // 0x399144: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x399144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_399148:
    // 0x399148: 0x1467fff9  bne         $v1, $a3, . + 4 + (-0x7 << 2)
label_39914c:
    if (ctx->pc == 0x39914Cu) {
        ctx->pc = 0x39914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399148u;
        // 0x39914c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399150u;
        goto label_399150;
    }
    ctx->pc = 0x399148u;
    {
        const bool branch_taken_0x399148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x39914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399148u;
        // 0x39914c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399148) {
            ctx->pc = 0x399130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399130;
        }
    }
    ctx->pc = 0x399150u;
label_399150:
    // 0x399150: 0x54940007  bnel        $a0, $s4, . + 4 + (0x7 << 2)
label_399154:
    if (ctx->pc == 0x399154u) {
        ctx->pc = 0x399154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399150u;
        // 0x399154: 0x95090006  lhu         $t1, 0x6($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399158u;
        goto label_399158;
    }
    ctx->pc = 0x399150u;
    {
        const bool branch_taken_0x399150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x399150) {
            ctx->pc = 0x399154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399150u;
            // 0x399154: 0x95090006  lhu         $t1, 0x6($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399170u;
            goto label_399170;
        }
    }
    ctx->pc = 0x399158u;
label_399158:
    // 0x399158: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x399158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_39915c:
    // 0x39915c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x39915cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_399160:
    // 0x399160: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x399160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_399164:
    // 0x399164: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x399164u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_399168:
    // 0x399168: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x399168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_39916c:
    // 0x39916c: 0x95090006  lhu         $t1, 0x6($t0)
    ctx->pc = 0x39916cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_399170:
    // 0x399170: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x399170u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_399174:
    // 0x399174: 0x95070002  lhu         $a3, 0x2($t0)
    ctx->pc = 0x399174u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_399178:
    // 0x399178: 0x95080004  lhu         $t0, 0x4($t0)
    ctx->pc = 0x399178u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_39917c:
    // 0x39917c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x39917cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_399180:
    // 0x399180: 0xc0e4068  jal         func_3901A0
label_399184:
    if (ctx->pc == 0x399184u) {
        ctx->pc = 0x399184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399180u;
        // 0x399184: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399188u;
        goto label_399188;
    }
    ctx->pc = 0x399180u;
    SET_GPR_U32(ctx, 31, 0x399188u);
    ctx->pc = 0x399184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399180u;
    // 0x399184: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3901A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3901A0u, 0x399180u, 0x399188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399188u;
label_399188:
    // 0x399188: 0x96e30084  lhu         $v1, 0x84($s7)
    ctx->pc = 0x399188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 132)));
label_39918c:
    // 0x39918c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39918cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399190:
    // 0x399190: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x399190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_399194:
    // 0x399194: 0x5460ffaa  bnel        $v1, $zero, . + 4 + (-0x56 << 2)
label_399198:
    if (ctx->pc == 0x399198u) {
        ctx->pc = 0x399198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399194u;
        // 0x399198: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39919Cu;
        goto label_39919c;
    }
    ctx->pc = 0x399194u;
    {
        const bool branch_taken_0x399194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x399194) {
            ctx->pc = 0x399198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399194u;
            // 0x399198: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399040;
        }
    }
    ctx->pc = 0x39919Cu;
label_39919c:
    // 0x39919c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39919cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3991a0:
    // 0x3991a0: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x3991a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3991a4:
    // 0x3991a4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3991a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3991a8:
    // 0x3991a8: 0x40f809  jalr        $v0
label_3991ac:
    if (ctx->pc == 0x3991ACu) {
        ctx->pc = 0x3991ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991A8u;
        // 0x3991ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3991B0u;
        goto label_3991b0;
    }
    ctx->pc = 0x3991A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3991B0u);
        ctx->pc = 0x3991ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991A8u;
        // 0x3991ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3991A8u, 0x3991B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3991B0u;
label_3991b0:
    // 0x3991b0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x3991b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3991b4:
    // 0x3991b4: 0x60f809  jalr        $v1
label_3991b8:
    if (ctx->pc == 0x3991B8u) {
        ctx->pc = 0x3991B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991B4u;
        // 0x3991b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3991BCu;
        goto label_3991bc;
    }
    ctx->pc = 0x3991B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3991BCu);
        ctx->pc = 0x3991B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991B4u;
        // 0x3991b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3991B4u, 0x3991BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3991BCu;
label_3991bc:
    // 0x3991bc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3991bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3991c0:
    // 0x3991c0: 0x40f809  jalr        $v0
label_3991c4:
    if (ctx->pc == 0x3991C4u) {
        ctx->pc = 0x3991C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991C0u;
        // 0x3991c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3991C8u;
        goto label_3991c8;
    }
    ctx->pc = 0x3991C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3991C8u);
        ctx->pc = 0x3991C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991C0u;
        // 0x3991c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3991C0u, 0x3991C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3991C8u;
label_3991c8:
    // 0x3991c8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3991c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3991cc:
    // 0x3991cc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3991ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3991d0:
    // 0x3991d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3991d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3991d4:
    // 0x3991d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3991d8:
    if (ctx->pc == 0x3991D8u) {
        ctx->pc = 0x3991D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991D4u;
        // 0x3991d8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3991DCu;
        goto label_3991dc;
    }
    ctx->pc = 0x3991D4u;
    {
        const bool branch_taken_0x3991d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3991D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991D4u;
        // 0x3991d8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3991d4) {
            ctx->pc = 0x3991ECu;
            goto label_3991ec;
        }
    }
    ctx->pc = 0x3991DCu;
label_3991dc:
    // 0x3991dc: 0xc0e6352  jal         func_398D48
label_3991e0:
    if (ctx->pc == 0x3991E0u) {
        ctx->pc = 0x3991E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991DCu;
        // 0x3991e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3991E4u;
        goto label_3991e4;
    }
    ctx->pc = 0x3991DCu;
    SET_GPR_U32(ctx, 31, 0x3991E4u);
    ctx->pc = 0x3991E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3991DCu;
    // 0x3991e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398D48u, 0x3991DCu, 0x3991E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3991E4u;
label_3991e4:
    // 0x3991e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3991e8:
    if (ctx->pc == 0x3991E8u) {
        ctx->pc = 0x3991ECu;
        goto label_3991ec;
    }
    ctx->pc = 0x3991E4u;
    {
        const bool branch_taken_0x3991e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3991e4) {
            ctx->pc = 0x3991F4u;
            goto label_3991f4;
        }
    }
    ctx->pc = 0x3991ECu;
label_3991ec:
    // 0x3991ec: 0xc0e6352  jal         func_398D48
label_3991f0:
    if (ctx->pc == 0x3991F0u) {
        ctx->pc = 0x3991F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991ECu;
        // 0x3991f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3991F4u;
        goto label_3991f4;
    }
    ctx->pc = 0x3991ECu;
    SET_GPR_U32(ctx, 31, 0x3991F4u);
    ctx->pc = 0x3991F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3991ECu;
    // 0x3991f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398D48u, 0x3991ECu, 0x3991F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3991F4u;
label_3991f4:
    // 0x3991f4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3991f8:
    if (ctx->pc == 0x3991F8u) {
        ctx->pc = 0x3991F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991F4u;
        // 0x3991f8: 0xaee20078  sw          $v0, 0x78($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3991FCu;
        goto label_3991fc;
    }
    ctx->pc = 0x3991F4u;
    {
        const bool branch_taken_0x3991f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3991f4) {
            ctx->pc = 0x3991F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3991F4u;
            // 0x3991f8: 0xaee20078  sw          $v0, 0x78($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 120), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39920Cu;
            goto label_39920c;
        }
    }
    ctx->pc = 0x3991FCu;
label_3991fc:
    // 0x3991fc: 0xc0e403a  jal         func_3900E8
label_399200:
    if (ctx->pc == 0x399200u) {
        ctx->pc = 0x399200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3991FCu;
        // 0x399200: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399204u;
        goto label_399204;
    }
    ctx->pc = 0x3991FCu;
    SET_GPR_U32(ctx, 31, 0x399204u);
    ctx->pc = 0x399200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3991FCu;
    // 0x399200: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900E8u, 0x3991FCu, 0x399204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399204u;
label_399204:
    // 0x399204: 0x10000002  b           . + 4 + (0x2 << 2)
label_399208:
    if (ctx->pc == 0x399208u) {
        ctx->pc = 0x399208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399204u;
        // 0x399208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39920Cu;
        goto label_39920c;
    }
    ctx->pc = 0x399204u;
    {
        const bool branch_taken_0x399204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399204u;
        // 0x399208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399204) {
            ctx->pc = 0x399210u;
            goto label_399210;
        }
    }
    ctx->pc = 0x39920Cu;
label_39920c:
    // 0x39920c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x39920cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_399210:
    // 0x399210: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x399210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_399214:
    // 0x399214: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x399214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_399218:
    // 0x399218: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x399218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39921c:
    // 0x39921c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x39921cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_399220:
    // 0x399220: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x399220u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_399224:
    // 0x399224: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x399224u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_399228:
    // 0x399228: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x399228u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39922c:
    // 0x39922c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x39922cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_399230:
    // 0x399230: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x399230u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_399234:
    // 0x399234: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x399234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_399238:
    // 0x399238: 0x3e00008  jr          $ra
label_39923c:
    if (ctx->pc == 0x39923Cu) {
        ctx->pc = 0x39923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399238u;
        // 0x39923c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399240u;
        goto label_fallthrough_0x399238;
    }
    ctx->pc = 0x399238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399238u;
        // 0x39923c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x399238:
    ctx->pc = 0x399240u;
}
