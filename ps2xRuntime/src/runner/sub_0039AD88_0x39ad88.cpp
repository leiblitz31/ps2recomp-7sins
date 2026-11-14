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

// Function: sub_0039AD88
// Address: 0x39ad88 - 0x39b068
void sub_0039AD88_0x39ad88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AD88_0x39ad88");
#endif

    switch (ctx->pc) {
        case 0x39ad88u: goto label_39ad88;
        case 0x39ad8cu: goto label_39ad8c;
        case 0x39ad90u: goto label_39ad90;
        case 0x39ad94u: goto label_39ad94;
        case 0x39ad98u: goto label_39ad98;
        case 0x39ad9cu: goto label_39ad9c;
        case 0x39ada0u: goto label_39ada0;
        case 0x39ada4u: goto label_39ada4;
        case 0x39ada8u: goto label_39ada8;
        case 0x39adacu: goto label_39adac;
        case 0x39adb0u: goto label_39adb0;
        case 0x39adb4u: goto label_39adb4;
        case 0x39adb8u: goto label_39adb8;
        case 0x39adbcu: goto label_39adbc;
        case 0x39adc0u: goto label_39adc0;
        case 0x39adc4u: goto label_39adc4;
        case 0x39adc8u: goto label_39adc8;
        case 0x39adccu: goto label_39adcc;
        case 0x39add0u: goto label_39add0;
        case 0x39add4u: goto label_39add4;
        case 0x39add8u: goto label_39add8;
        case 0x39addcu: goto label_39addc;
        case 0x39ade0u: goto label_39ade0;
        case 0x39ade4u: goto label_39ade4;
        case 0x39ade8u: goto label_39ade8;
        case 0x39adecu: goto label_39adec;
        case 0x39adf0u: goto label_39adf0;
        case 0x39adf4u: goto label_39adf4;
        case 0x39adf8u: goto label_39adf8;
        case 0x39adfcu: goto label_39adfc;
        case 0x39ae00u: goto label_39ae00;
        case 0x39ae04u: goto label_39ae04;
        case 0x39ae08u: goto label_39ae08;
        case 0x39ae0cu: goto label_39ae0c;
        case 0x39ae10u: goto label_39ae10;
        case 0x39ae14u: goto label_39ae14;
        case 0x39ae18u: goto label_39ae18;
        case 0x39ae1cu: goto label_39ae1c;
        case 0x39ae20u: goto label_39ae20;
        case 0x39ae24u: goto label_39ae24;
        case 0x39ae28u: goto label_39ae28;
        case 0x39ae2cu: goto label_39ae2c;
        case 0x39ae30u: goto label_39ae30;
        case 0x39ae34u: goto label_39ae34;
        case 0x39ae38u: goto label_39ae38;
        case 0x39ae3cu: goto label_39ae3c;
        case 0x39ae40u: goto label_39ae40;
        case 0x39ae44u: goto label_39ae44;
        case 0x39ae48u: goto label_39ae48;
        case 0x39ae4cu: goto label_39ae4c;
        case 0x39ae50u: goto label_39ae50;
        case 0x39ae54u: goto label_39ae54;
        case 0x39ae58u: goto label_39ae58;
        case 0x39ae5cu: goto label_39ae5c;
        case 0x39ae60u: goto label_39ae60;
        case 0x39ae64u: goto label_39ae64;
        case 0x39ae68u: goto label_39ae68;
        case 0x39ae6cu: goto label_39ae6c;
        case 0x39ae70u: goto label_39ae70;
        case 0x39ae74u: goto label_39ae74;
        case 0x39ae78u: goto label_39ae78;
        case 0x39ae7cu: goto label_39ae7c;
        case 0x39ae80u: goto label_39ae80;
        case 0x39ae84u: goto label_39ae84;
        case 0x39ae88u: goto label_39ae88;
        case 0x39ae8cu: goto label_39ae8c;
        case 0x39ae90u: goto label_39ae90;
        case 0x39ae94u: goto label_39ae94;
        case 0x39ae98u: goto label_39ae98;
        case 0x39ae9cu: goto label_39ae9c;
        case 0x39aea0u: goto label_39aea0;
        case 0x39aea4u: goto label_39aea4;
        case 0x39aea8u: goto label_39aea8;
        case 0x39aeacu: goto label_39aeac;
        case 0x39aeb0u: goto label_39aeb0;
        case 0x39aeb4u: goto label_39aeb4;
        case 0x39aeb8u: goto label_39aeb8;
        case 0x39aebcu: goto label_39aebc;
        case 0x39aec0u: goto label_39aec0;
        case 0x39aec4u: goto label_39aec4;
        case 0x39aec8u: goto label_39aec8;
        case 0x39aeccu: goto label_39aecc;
        case 0x39aed0u: goto label_39aed0;
        case 0x39aed4u: goto label_39aed4;
        case 0x39aed8u: goto label_39aed8;
        case 0x39aedcu: goto label_39aedc;
        case 0x39aee0u: goto label_39aee0;
        case 0x39aee4u: goto label_39aee4;
        case 0x39aee8u: goto label_39aee8;
        case 0x39aeecu: goto label_39aeec;
        case 0x39aef0u: goto label_39aef0;
        case 0x39aef4u: goto label_39aef4;
        case 0x39aef8u: goto label_39aef8;
        case 0x39aefcu: goto label_39aefc;
        case 0x39af00u: goto label_39af00;
        case 0x39af04u: goto label_39af04;
        case 0x39af08u: goto label_39af08;
        case 0x39af0cu: goto label_39af0c;
        case 0x39af10u: goto label_39af10;
        case 0x39af14u: goto label_39af14;
        case 0x39af18u: goto label_39af18;
        case 0x39af1cu: goto label_39af1c;
        case 0x39af20u: goto label_39af20;
        case 0x39af24u: goto label_39af24;
        case 0x39af28u: goto label_39af28;
        case 0x39af2cu: goto label_39af2c;
        case 0x39af30u: goto label_39af30;
        case 0x39af34u: goto label_39af34;
        case 0x39af38u: goto label_39af38;
        case 0x39af3cu: goto label_39af3c;
        case 0x39af40u: goto label_39af40;
        case 0x39af44u: goto label_39af44;
        case 0x39af48u: goto label_39af48;
        case 0x39af4cu: goto label_39af4c;
        case 0x39af50u: goto label_39af50;
        case 0x39af54u: goto label_39af54;
        case 0x39af58u: goto label_39af58;
        case 0x39af5cu: goto label_39af5c;
        case 0x39af60u: goto label_39af60;
        case 0x39af64u: goto label_39af64;
        case 0x39af68u: goto label_39af68;
        case 0x39af6cu: goto label_39af6c;
        case 0x39af70u: goto label_39af70;
        case 0x39af74u: goto label_39af74;
        case 0x39af78u: goto label_39af78;
        case 0x39af7cu: goto label_39af7c;
        case 0x39af80u: goto label_39af80;
        case 0x39af84u: goto label_39af84;
        case 0x39af88u: goto label_39af88;
        case 0x39af8cu: goto label_39af8c;
        case 0x39af90u: goto label_39af90;
        case 0x39af94u: goto label_39af94;
        case 0x39af98u: goto label_39af98;
        case 0x39af9cu: goto label_39af9c;
        case 0x39afa0u: goto label_39afa0;
        case 0x39afa4u: goto label_39afa4;
        case 0x39afa8u: goto label_39afa8;
        case 0x39afacu: goto label_39afac;
        case 0x39afb0u: goto label_39afb0;
        case 0x39afb4u: goto label_39afb4;
        case 0x39afb8u: goto label_39afb8;
        case 0x39afbcu: goto label_39afbc;
        case 0x39afc0u: goto label_39afc0;
        case 0x39afc4u: goto label_39afc4;
        case 0x39afc8u: goto label_39afc8;
        case 0x39afccu: goto label_39afcc;
        case 0x39afd0u: goto label_39afd0;
        case 0x39afd4u: goto label_39afd4;
        case 0x39afd8u: goto label_39afd8;
        case 0x39afdcu: goto label_39afdc;
        case 0x39afe0u: goto label_39afe0;
        case 0x39afe4u: goto label_39afe4;
        case 0x39afe8u: goto label_39afe8;
        case 0x39afecu: goto label_39afec;
        case 0x39aff0u: goto label_39aff0;
        case 0x39aff4u: goto label_39aff4;
        case 0x39aff8u: goto label_39aff8;
        case 0x39affcu: goto label_39affc;
        case 0x39b000u: goto label_39b000;
        case 0x39b004u: goto label_39b004;
        case 0x39b008u: goto label_39b008;
        case 0x39b00cu: goto label_39b00c;
        case 0x39b010u: goto label_39b010;
        case 0x39b014u: goto label_39b014;
        case 0x39b018u: goto label_39b018;
        case 0x39b01cu: goto label_39b01c;
        case 0x39b020u: goto label_39b020;
        case 0x39b024u: goto label_39b024;
        case 0x39b028u: goto label_39b028;
        case 0x39b02cu: goto label_39b02c;
        case 0x39b030u: goto label_39b030;
        case 0x39b034u: goto label_39b034;
        case 0x39b038u: goto label_39b038;
        case 0x39b03cu: goto label_39b03c;
        case 0x39b040u: goto label_39b040;
        case 0x39b044u: goto label_39b044;
        case 0x39b048u: goto label_39b048;
        case 0x39b04cu: goto label_39b04c;
        case 0x39b050u: goto label_39b050;
        case 0x39b054u: goto label_39b054;
        case 0x39b058u: goto label_39b058;
        case 0x39b05cu: goto label_39b05c;
        case 0x39b060u: goto label_39b060;
        case 0x39b064u: goto label_39b064;
        default: break;
    }

    ctx->pc = 0x39ad88u;

label_39ad88:
    // 0x39ad88: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x39ad88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_39ad8c:
    // 0x39ad8c: 0x8f82a9ec  lw          $v0, -0x5614($gp)
    ctx->pc = 0x39ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945260)));
label_39ad90:
    // 0x39ad90: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x39ad90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
label_39ad94:
    // 0x39ad94: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x39ad94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
label_39ad98:
    // 0x39ad98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39ad98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39ad9c:
    // 0x39ad9c: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x39ad9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
label_39ada0:
    // 0x39ada0: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x39ada0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_39ada4:
    // 0x39ada4: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x39ada4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
label_39ada8:
    // 0x39ada8: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x39ada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
label_39adac:
    // 0x39adac: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x39adacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
label_39adb0:
    // 0x39adb0: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x39adb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
label_39adb4:
    // 0x39adb4: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x39adb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
label_39adb8:
    // 0x39adb8: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x39adb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
label_39adbc:
    // 0x39adbc: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x39adbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_39adc0:
    // 0x39adc0: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x39adc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_39adc4:
    // 0x39adc4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x39adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39adc8:
    // 0x39adc8: 0x40f809  jalr        $v0
label_39adcc:
    if (ctx->pc == 0x39ADCCu) {
        ctx->pc = 0x39ADD0u;
        goto label_39add0;
    }
    ctx->pc = 0x39ADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39ADD0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39ADC8u, 0x39ADD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39ADD0u;
label_39add0:
    // 0x39add0: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
label_39add4:
    if (ctx->pc == 0x39ADD4u) {
        ctx->pc = 0x39ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADD0u;
        // 0x39add4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ADD8u;
        goto label_39add8;
    }
    ctx->pc = 0x39ADD0u;
    {
        const bool branch_taken_0x39add0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADD0u;
        // 0x39add4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39add0) {
            ctx->pc = 0x39B014u;
            goto label_39b014;
        }
    }
    ctx->pc = 0x39ADD8u;
label_39add8:
    // 0x39add8: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x39add8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_39addc:
    // 0x39addc: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x39addcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_39ade0:
    // 0x39ade0: 0x54400094  bnel        $v0, $zero, . + 4 + (0x94 << 2)
label_39ade4:
    if (ctx->pc == 0x39ADE4u) {
        ctx->pc = 0x39ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADE0u;
        // 0x39ade4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ADE8u;
        goto label_39ade8;
    }
    ctx->pc = 0x39ADE0u;
    {
        const bool branch_taken_0x39ade0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ade0) {
            ctx->pc = 0x39ADE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39ADE0u;
            // 0x39ade4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B034u;
            goto label_39b034;
        }
    }
    ctx->pc = 0x39ADE8u;
label_39ade8:
    // 0x39ade8: 0x8e170000  lw          $s7, 0x0($s0)
    ctx->pc = 0x39ade8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39adec:
    // 0x39adec: 0x12e00090  beqz        $s7, . + 4 + (0x90 << 2)
label_39adf0:
    if (ctx->pc == 0x39ADF0u) {
        ctx->pc = 0x39ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADECu;
        // 0x39adf0: 0x8e550004  lw          $s5, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ADF4u;
        goto label_39adf4;
    }
    ctx->pc = 0x39ADECu;
    {
        const bool branch_taken_0x39adec = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADECu;
        // 0x39adf0: 0x8e550004  lw          $s5, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39adec) {
            ctx->pc = 0x39B030u;
            goto label_39b030;
        }
    }
    ctx->pc = 0x39ADF4u;
label_39adf4:
    // 0x39adf4: 0x12a0008e  beqz        $s5, . + 4 + (0x8E << 2)
label_39adf8:
    if (ctx->pc == 0x39ADF8u) {
        ctx->pc = 0x39ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADF4u;
        // 0x39adf8: 0x2656002c  addiu       $s6, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39ADFCu;
        goto label_39adfc;
    }
    ctx->pc = 0x39ADF4u;
    {
        const bool branch_taken_0x39adf4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x39ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADF4u;
        // 0x39adf8: 0x2656002c  addiu       $s6, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39adf4) {
            ctx->pc = 0x39B030u;
            goto label_39b030;
        }
    }
    ctx->pc = 0x39ADFCu;
label_39adfc:
    // 0x39adfc: 0x8e50002c  lw          $s0, 0x2C($s2)
    ctx->pc = 0x39adfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_39ae00:
    // 0x39ae00: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x39ae00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39ae04:
    // 0x39ae04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39ae04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39ae08:
    // 0x39ae08: 0x1216001a  beq         $s0, $s6, . + 4 + (0x1A << 2)
label_39ae0c:
    if (ctx->pc == 0x39AE0Cu) {
        ctx->pc = 0x39AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE08u;
        // 0x39ae0c: 0xc6540014  lwc1        $f20, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AE10u;
        goto label_39ae10;
    }
    ctx->pc = 0x39AE08u;
    {
        const bool branch_taken_0x39ae08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x39AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE08u;
        // 0x39ae0c: 0xc6540014  lwc1        $f20, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ae08) {
            ctx->pc = 0x39AE74u;
            goto label_39ae74;
        }
    }
    ctx->pc = 0x39AE10u;
label_39ae10:
    // 0x39ae10: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_39ae14:
    // 0x39ae14: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x39ae14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_39ae18:
    // 0x39ae18: 0x2606fff4  addiu       $a2, $s0, -0xC
    ctx->pc = 0x39ae18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_39ae1c:
    // 0x39ae1c: 0x0  nop
    ctx->pc = 0x39ae1cu;
    // NOP
label_39ae20:
    // 0x39ae20: 0x8f82bd68  lw          $v0, -0x4298($gp)
    ctx->pc = 0x39ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
label_39ae24:
    // 0x39ae24: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x39ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_39ae28:
    // 0x39ae28: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x39ae28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39ae2c:
    // 0x39ae2c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x39ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_39ae30:
    // 0x39ae30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x39ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_39ae34:
    // 0x39ae34: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x39ae34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39ae38:
    // 0x39ae38: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x39ae38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_39ae3c:
    // 0x39ae3c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39ae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39ae40:
    // 0x39ae40: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x39ae40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_39ae44:
    // 0x39ae44: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x39ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_39ae48:
    // 0x39ae48: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x39ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_39ae4c:
    // 0x39ae4c: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x39ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_39ae50:
    // 0x39ae50: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39ae54:
    // 0x39ae54: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x39ae54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_39ae58:
    // 0x39ae58: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x39ae58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_39ae5c:
    // 0x39ae5c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x39ae5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39ae60:
    // 0x39ae60: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x39ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_39ae64:
    // 0x39ae64: 0x40f809  jalr        $v0
label_39ae68:
    if (ctx->pc == 0x39AE68u) {
        ctx->pc = 0x39AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE64u;
        // 0x39ae68: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AE6Cu;
        goto label_39ae6c;
    }
    ctx->pc = 0x39AE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39AE6Cu);
        ctx->pc = 0x39AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE64u;
        // 0x39ae68: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AE64u, 0x39AE6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39AE6Cu;
label_39ae6c:
    // 0x39ae6c: 0x1614ffec  bne         $s0, $s4, . + 4 + (-0x14 << 2)
label_39ae70:
    if (ctx->pc == 0x39AE70u) {
        ctx->pc = 0x39AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE6Cu;
        // 0x39ae70: 0x2606fff4  addiu       $a2, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AE74u;
        goto label_39ae74;
    }
    ctx->pc = 0x39AE6Cu;
    {
        const bool branch_taken_0x39ae6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x39AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE6Cu;
        // 0x39ae70: 0x2606fff4  addiu       $a2, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ae6c) {
            ctx->pc = 0x39AE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ae20;
        }
    }
    ctx->pc = 0x39AE74u;
label_39ae74:
    // 0x39ae74: 0xc106784  jal         func_419E10
label_39ae78:
    if (ctx->pc == 0x39AE78u) {
        ctx->pc = 0x39AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE74u;
        // 0x39ae78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AE7Cu;
        goto label_39ae7c;
    }
    ctx->pc = 0x39AE74u;
    SET_GPR_U32(ctx, 31, 0x39AE7Cu);
    ctx->pc = 0x39AE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AE74u;
    // 0x39ae78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x39AE74u, 0x39AE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AE7Cu;
label_39ae7c:
    // 0x39ae7c: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x39ae7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_39ae80:
    // 0x39ae80: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x39ae80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_39ae84:
    // 0x39ae84: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x39ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_39ae88:
    // 0x39ae88: 0xb3a30107  sdl         $v1, 0x107($sp)
    ctx->pc = 0x39ae88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39ae8c:
    // 0x39ae8c: 0xb7a30100  sdr         $v1, 0x100($sp)
    ctx->pc = 0x39ae8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39ae90:
    // 0x39ae90: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x39ae90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
label_39ae94:
    // 0x39ae94: 0x27be0100  addiu       $fp, $sp, 0x100
    ctx->pc = 0x39ae94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_39ae98:
    // 0x39ae98: 0x6ba30107  ldl         $v1, 0x107($sp)
    ctx->pc = 0x39ae98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_39ae9c:
    // 0x39ae9c: 0x6fa30100  ldr         $v1, 0x100($sp)
    ctx->pc = 0x39ae9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_39aea0:
    // 0x39aea0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x39aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_39aea4:
    // 0x39aea4: 0xb3a30117  sdl         $v1, 0x117($sp)
    ctx->pc = 0x39aea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39aea8:
    // 0x39aea8: 0xb7a30110  sdr         $v1, 0x110($sp)
    ctx->pc = 0x39aea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39aeac:
    // 0x39aeac: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x39aeacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
label_39aeb0:
    // 0x39aeb0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_39aeb4:
    // 0x39aeb4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x39aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_39aeb8:
    // 0x39aeb8: 0x27b40110  addiu       $s4, $sp, 0x110
    ctx->pc = 0x39aeb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_39aebc:
    // 0x39aebc: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x39aebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39aec0:
    // 0x39aec0: 0x2455e880  addiu       $s5, $v0, -0x1780
    ctx->pc = 0x39aec0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_39aec4:
    // 0x39aec4: 0xc7a40114  lwc1        $f4, 0x114($sp)
    ctx->pc = 0x39aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39aec8:
    // 0x39aec8: 0x7d8821  addu        $s1, $v1, $sp
    ctx->pc = 0x39aec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_39aecc:
    // 0x39aecc: 0xc7a50118  lwc1        $f5, 0x118($sp)
    ctx->pc = 0x39aeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39aed0:
    // 0x39aed0: 0x461418c0  add.s       $f3, $f3, $f20
    ctx->pc = 0x39aed0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_39aed4:
    // 0x39aed4: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x39aed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39aed8:
    // 0x39aed8: 0x46142100  add.s       $f4, $f4, $f20
    ctx->pc = 0x39aed8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[20]);
label_39aedc:
    // 0x39aedc: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x39aedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39aee0:
    // 0x39aee0: 0x46142940  add.s       $f5, $f5, $f20
    ctx->pc = 0x39aee0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
label_39aee4:
    // 0x39aee4: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x39aee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39aee8:
    // 0x39aee8: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x39aee8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
label_39aeec:
    // 0x39aeec: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x39aeecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_39aef0:
    // 0x39aef0: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x39aef0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_39aef4:
    // 0x39aef4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x39aef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_39aef8:
    // 0x39aef8: 0xe7a40114  swc1        $f4, 0x114($sp)
    ctx->pc = 0x39aef8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_39aefc:
    // 0x39aefc: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x39aefcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_39af00:
    // 0x39af00: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x39af00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_39af04:
    // 0x39af04: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x39af04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_39af08:
    // 0x39af08: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x39af08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_39af0c:
    // 0x39af0c: 0x8ef0001c  lw          $s0, 0x1C($s7)
    ctx->pc = 0x39af0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
label_39af10:
    // 0x39af10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39af10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39af14:
    // 0x39af14: 0x0  nop
    ctx->pc = 0x39af14u;
    // NOP
label_39af18:
    // 0x39af18: 0x461001c  bgez        $v1, . + 4 + (0x1C << 2)
label_39af1c:
    if (ctx->pc == 0x39AF1Cu) {
        ctx->pc = 0x39AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF18u;
        // 0x39af1c: 0x3c31021  addu        $v0, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AF20u;
        goto label_39af20;
    }
    ctx->pc = 0x39AF18u;
    {
        const bool branch_taken_0x39af18 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x39AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF18u;
        // 0x39af1c: 0x3c31021  addu        $v0, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af18) {
            ctx->pc = 0x39AF8Cu;
            goto label_39af8c;
        }
    }
    ctx->pc = 0x39AF20u;
label_39af20:
    // 0x39af20: 0x8f83bd68  lw          $v1, -0x4298($gp)
    ctx->pc = 0x39af20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
label_39af24:
    // 0x39af24: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x39af24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_39af28:
    // 0x39af28: 0x8ea20118  lw          $v0, 0x118($s5)
    ctx->pc = 0x39af28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
label_39af2c:
    // 0x39af2c: 0x34a50507  ori         $a1, $a1, 0x507
    ctx->pc = 0x39af2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
label_39af30:
    // 0x39af30: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x39af30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_39af34:
    // 0x39af34: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x39af34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_39af38:
    // 0x39af38: 0x40f809  jalr        $v0
label_39af3c:
    if (ctx->pc == 0x39AF3Cu) {
        ctx->pc = 0x39AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF38u;
        // 0x39af3c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AF40u;
        goto label_39af40;
    }
    ctx->pc = 0x39AF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39AF40u);
        ctx->pc = 0x39AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF38u;
        // 0x39af3c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AF38u, 0x39AF40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39AF40u;
label_39af40:
    // 0x39af40: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x39af40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_39af44:
    // 0x39af44: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x39af44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_39af48:
    // 0x39af48: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x39af48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_39af4c:
    // 0x39af4c: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x39af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_39af50:
    // 0x39af50: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x39af50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_39af54:
    // 0x39af54: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x39af54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
label_39af58:
    // 0x39af58: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x39af58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_39af5c:
    // 0x39af5c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x39af5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_39af60:
    // 0x39af60: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x39af60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_39af64:
    // 0x39af64: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x39af64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_39af68:
    // 0x39af68: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x39af68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39af6c:
    // 0x39af6c: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x39af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_39af70:
    // 0x39af70: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x39af70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_39af74:
    // 0x39af74: 0xac560010  sw          $s6, 0x10($v0)
    ctx->pc = 0x39af74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 22));
label_39af78:
    // 0x39af78: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x39af78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_39af7c:
    // 0x39af7c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x39af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_39af80:
    // 0x39af80: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x39af80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_39af84:
    // 0x39af84: 0x1000001f  b           . + 4 + (0x1F << 2)
label_39af88:
    if (ctx->pc == 0x39AF88u) {
        ctx->pc = 0x39AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF84u;
        // 0x39af88: 0xae45002c  sw          $a1, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AF8Cu;
        goto label_39af8c;
    }
    ctx->pc = 0x39AF84u;
    {
        const bool branch_taken_0x39af84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF84u;
        // 0x39af88: 0xae45002c  sw          $a1, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af84) {
            ctx->pc = 0x39B004u;
            goto label_39b004;
        }
    }
    ctx->pc = 0x39AF8Cu;
label_39af8c:
    // 0x39af8c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x39af8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39af90:
    // 0x39af90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x39af90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39af94:
    // 0x39af94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x39af94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39af98:
    // 0x39af98: 0x0  nop
    ctx->pc = 0x39af98u;
    // NOP
label_39af9c:
    // 0x39af9c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_39afa0:
    if (ctx->pc == 0x39AFA0u) {
        ctx->pc = 0x39AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF9Cu;
        // 0x39afa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AFA4u;
        goto label_39afa4;
    }
    ctx->pc = 0x39AF9Cu;
    {
        const bool branch_taken_0x39af9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AF9Cu;
        // 0x39afa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39af9c) {
            ctx->pc = 0x39AFD8u;
            goto label_39afd8;
        }
    }
    ctx->pc = 0x39AFA4u;
label_39afa4:
    // 0x39afa4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39afa8:
    // 0x39afa8: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x39afa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39afac:
    // 0x39afac: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x39afacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_39afb0:
    // 0x39afb0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x39afb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39afb4:
    // 0x39afb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x39afb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39afb8:
    // 0x39afb8: 0x0  nop
    ctx->pc = 0x39afb8u;
    // NOP
label_39afbc:
    // 0x39afbc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_39afc0:
    if (ctx->pc == 0x39AFC0u) {
        ctx->pc = 0x39AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AFBCu;
        // 0x39afc0: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AFC4u;
        goto label_39afc4;
    }
    ctx->pc = 0x39AFBCu;
    {
        const bool branch_taken_0x39afbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AFBCu;
        // 0x39afc0: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39afbc) {
            ctx->pc = 0x39B004u;
            goto label_39b004;
        }
    }
    ctx->pc = 0x39AFC4u;
label_39afc4:
    // 0x39afc4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x39afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_39afc8:
    // 0x39afc8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x39afc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_39afcc:
    // 0x39afcc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x39afccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_39afd0:
    // 0x39afd0: 0x1000000c  b           . + 4 + (0xC << 2)
label_39afd4:
    if (ctx->pc == 0x39AFD4u) {
        ctx->pc = 0x39AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AFD0u;
        // 0x39afd4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AFD8u;
        goto label_39afd8;
    }
    ctx->pc = 0x39AFD0u;
    {
        const bool branch_taken_0x39afd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AFD0u;
        // 0x39afd4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39afd0) {
            ctx->pc = 0x39B004u;
            goto label_39b004;
        }
    }
    ctx->pc = 0x39AFD8u;
label_39afd8:
    // 0x39afd8: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x39afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_39afdc:
    // 0x39afdc: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x39afdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39afe0:
    // 0x39afe0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x39afe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39afe4:
    // 0x39afe4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x39afe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39afe8:
    // 0x39afe8: 0x0  nop
    ctx->pc = 0x39afe8u;
    // NOP
label_39afec:
    // 0x39afec: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_39aff0:
    if (ctx->pc == 0x39AFF0u) {
        ctx->pc = 0x39AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AFECu;
        // 0x39aff0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AFF4u;
        goto label_39aff4;
    }
    ctx->pc = 0x39AFECu;
    {
        const bool branch_taken_0x39afec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39afec) {
            ctx->pc = 0x39AFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AFECu;
            // 0x39aff0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AFFCu;
            goto label_39affc;
        }
    }
    ctx->pc = 0x39AFF4u;
label_39aff4:
    // 0x39aff4: 0x10000003  b           . + 4 + (0x3 << 2)
label_39aff8:
    if (ctx->pc == 0x39AFF8u) {
        ctx->pc = 0x39AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AFF4u;
        // 0x39aff8: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39AFFCu;
        goto label_39affc;
    }
    ctx->pc = 0x39AFF4u;
    {
        const bool branch_taken_0x39aff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AFF4u;
        // 0x39aff8: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aff4) {
            ctx->pc = 0x39B004u;
            goto label_39b004;
        }
    }
    ctx->pc = 0x39AFFCu;
label_39affc:
    // 0x39affc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x39affcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_39b000:
    // 0x39b000: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x39b000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_39b004:
    // 0x39b004: 0x663ffc4  bgezl       $s3, . + 4 + (-0x3C << 2)
label_39b008:
    if (ctx->pc == 0x39B008u) {
        ctx->pc = 0x39B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B004u;
        // 0x39b008: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B00Cu;
        goto label_39b00c;
    }
    ctx->pc = 0x39B004u;
    {
        const bool branch_taken_0x39b004 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x39b004) {
            ctx->pc = 0x39B008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B004u;
            // 0x39b008: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39af18;
        }
    }
    ctx->pc = 0x39B00Cu;
label_39b00c:
    // 0x39b00c: 0x10000009  b           . + 4 + (0x9 << 2)
label_39b010:
    if (ctx->pc == 0x39B010u) {
        ctx->pc = 0x39B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B00Cu;
        // 0x39b010: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B014u;
        goto label_39b014;
    }
    ctx->pc = 0x39B00Cu;
    {
        const bool branch_taken_0x39b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B00Cu;
        // 0x39b010: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b00c) {
            ctx->pc = 0x39B034u;
            goto label_39b034;
        }
    }
    ctx->pc = 0x39B014u;
label_39b014:
    // 0x39b014: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x39b014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_39b018:
    // 0x39b018: 0x34840016  ori         $a0, $a0, 0x16
    ctx->pc = 0x39b018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
label_39b01c:
    // 0x39b01c: 0xc1035f6  jal         func_40D7D8
label_39b020:
    if (ctx->pc == 0x39B020u) {
        ctx->pc = 0x39B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B01Cu;
        // 0x39b020: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B024u;
        goto label_39b024;
    }
    ctx->pc = 0x39B01Cu;
    SET_GPR_U32(ctx, 31, 0x39B024u);
    ctx->pc = 0x39B020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B01Cu;
    // 0x39b020: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x39B01Cu, 0x39B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B024u;
label_39b024:
    // 0x39b024: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x39b024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_39b028:
    // 0x39b028: 0xc103628  jal         func_40D8A0
label_39b02c:
    if (ctx->pc == 0x39B02Cu) {
        ctx->pc = 0x39B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B028u;
        // 0x39b02c: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B030u;
        goto label_39b030;
    }
    ctx->pc = 0x39B028u;
    SET_GPR_U32(ctx, 31, 0x39B030u);
    ctx->pc = 0x39B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B028u;
    // 0x39b02c: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x39B028u, 0x39B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B030u;
label_39b030:
    // 0x39b030: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x39b030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39b034:
    // 0x39b034: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x39b034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_39b038:
    // 0x39b038: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x39b038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_39b03c:
    // 0x39b03c: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x39b03cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_39b040:
    // 0x39b040: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x39b040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_39b044:
    // 0x39b044: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x39b044u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_39b048:
    // 0x39b048: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x39b048u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_39b04c:
    // 0x39b04c: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x39b04cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_39b050:
    // 0x39b050: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x39b050u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_39b054:
    // 0x39b054: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x39b054u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_39b058:
    // 0x39b058: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x39b058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_39b05c:
    // 0x39b05c: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x39b05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39b060:
    // 0x39b060: 0x3e00008  jr          $ra
label_39b064:
    if (ctx->pc == 0x39B064u) {
        ctx->pc = 0x39B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B060u;
        // 0x39b064: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B068u;
        goto label_fallthrough_0x39b060;
    }
    ctx->pc = 0x39B060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B060u;
        // 0x39b064: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39b060:
    ctx->pc = 0x39B068u;
}
