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

// Function: sub_0041AC28
// Address: 0x41ac28 - 0x41b100
void sub_0041AC28_0x41ac28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041AC28_0x41ac28");
#endif

    switch (ctx->pc) {
        case 0x41ac28u: goto label_41ac28;
        case 0x41ac2cu: goto label_41ac2c;
        case 0x41ac30u: goto label_41ac30;
        case 0x41ac34u: goto label_41ac34;
        case 0x41ac38u: goto label_41ac38;
        case 0x41ac3cu: goto label_41ac3c;
        case 0x41ac40u: goto label_41ac40;
        case 0x41ac44u: goto label_41ac44;
        case 0x41ac48u: goto label_41ac48;
        case 0x41ac4cu: goto label_41ac4c;
        case 0x41ac50u: goto label_41ac50;
        case 0x41ac54u: goto label_41ac54;
        case 0x41ac58u: goto label_41ac58;
        case 0x41ac5cu: goto label_41ac5c;
        case 0x41ac60u: goto label_41ac60;
        case 0x41ac64u: goto label_41ac64;
        case 0x41ac68u: goto label_41ac68;
        case 0x41ac6cu: goto label_41ac6c;
        case 0x41ac70u: goto label_41ac70;
        case 0x41ac74u: goto label_41ac74;
        case 0x41ac78u: goto label_41ac78;
        case 0x41ac7cu: goto label_41ac7c;
        case 0x41ac80u: goto label_41ac80;
        case 0x41ac84u: goto label_41ac84;
        case 0x41ac88u: goto label_41ac88;
        case 0x41ac8cu: goto label_41ac8c;
        case 0x41ac90u: goto label_41ac90;
        case 0x41ac94u: goto label_41ac94;
        case 0x41ac98u: goto label_41ac98;
        case 0x41ac9cu: goto label_41ac9c;
        case 0x41aca0u: goto label_41aca0;
        case 0x41aca4u: goto label_41aca4;
        case 0x41aca8u: goto label_41aca8;
        case 0x41acacu: goto label_41acac;
        case 0x41acb0u: goto label_41acb0;
        case 0x41acb4u: goto label_41acb4;
        case 0x41acb8u: goto label_41acb8;
        case 0x41acbcu: goto label_41acbc;
        case 0x41acc0u: goto label_41acc0;
        case 0x41acc4u: goto label_41acc4;
        case 0x41acc8u: goto label_41acc8;
        case 0x41acccu: goto label_41accc;
        case 0x41acd0u: goto label_41acd0;
        case 0x41acd4u: goto label_41acd4;
        case 0x41acd8u: goto label_41acd8;
        case 0x41acdcu: goto label_41acdc;
        case 0x41ace0u: goto label_41ace0;
        case 0x41ace4u: goto label_41ace4;
        case 0x41ace8u: goto label_41ace8;
        case 0x41acecu: goto label_41acec;
        case 0x41acf0u: goto label_41acf0;
        case 0x41acf4u: goto label_41acf4;
        case 0x41acf8u: goto label_41acf8;
        case 0x41acfcu: goto label_41acfc;
        case 0x41ad00u: goto label_41ad00;
        case 0x41ad04u: goto label_41ad04;
        case 0x41ad08u: goto label_41ad08;
        case 0x41ad0cu: goto label_41ad0c;
        case 0x41ad10u: goto label_41ad10;
        case 0x41ad14u: goto label_41ad14;
        case 0x41ad18u: goto label_41ad18;
        case 0x41ad1cu: goto label_41ad1c;
        case 0x41ad20u: goto label_41ad20;
        case 0x41ad24u: goto label_41ad24;
        case 0x41ad28u: goto label_41ad28;
        case 0x41ad2cu: goto label_41ad2c;
        case 0x41ad30u: goto label_41ad30;
        case 0x41ad34u: goto label_41ad34;
        case 0x41ad38u: goto label_41ad38;
        case 0x41ad3cu: goto label_41ad3c;
        case 0x41ad40u: goto label_41ad40;
        case 0x41ad44u: goto label_41ad44;
        case 0x41ad48u: goto label_41ad48;
        case 0x41ad4cu: goto label_41ad4c;
        case 0x41ad50u: goto label_41ad50;
        case 0x41ad54u: goto label_41ad54;
        case 0x41ad58u: goto label_41ad58;
        case 0x41ad5cu: goto label_41ad5c;
        case 0x41ad60u: goto label_41ad60;
        case 0x41ad64u: goto label_41ad64;
        case 0x41ad68u: goto label_41ad68;
        case 0x41ad6cu: goto label_41ad6c;
        case 0x41ad70u: goto label_41ad70;
        case 0x41ad74u: goto label_41ad74;
        case 0x41ad78u: goto label_41ad78;
        case 0x41ad7cu: goto label_41ad7c;
        case 0x41ad80u: goto label_41ad80;
        case 0x41ad84u: goto label_41ad84;
        case 0x41ad88u: goto label_41ad88;
        case 0x41ad8cu: goto label_41ad8c;
        case 0x41ad90u: goto label_41ad90;
        case 0x41ad94u: goto label_41ad94;
        case 0x41ad98u: goto label_41ad98;
        case 0x41ad9cu: goto label_41ad9c;
        case 0x41ada0u: goto label_41ada0;
        case 0x41ada4u: goto label_41ada4;
        case 0x41ada8u: goto label_41ada8;
        case 0x41adacu: goto label_41adac;
        case 0x41adb0u: goto label_41adb0;
        case 0x41adb4u: goto label_41adb4;
        case 0x41adb8u: goto label_41adb8;
        case 0x41adbcu: goto label_41adbc;
        case 0x41adc0u: goto label_41adc0;
        case 0x41adc4u: goto label_41adc4;
        case 0x41adc8u: goto label_41adc8;
        case 0x41adccu: goto label_41adcc;
        case 0x41add0u: goto label_41add0;
        case 0x41add4u: goto label_41add4;
        case 0x41add8u: goto label_41add8;
        case 0x41addcu: goto label_41addc;
        case 0x41ade0u: goto label_41ade0;
        case 0x41ade4u: goto label_41ade4;
        case 0x41ade8u: goto label_41ade8;
        case 0x41adecu: goto label_41adec;
        case 0x41adf0u: goto label_41adf0;
        case 0x41adf4u: goto label_41adf4;
        case 0x41adf8u: goto label_41adf8;
        case 0x41adfcu: goto label_41adfc;
        case 0x41ae00u: goto label_41ae00;
        case 0x41ae04u: goto label_41ae04;
        case 0x41ae08u: goto label_41ae08;
        case 0x41ae0cu: goto label_41ae0c;
        case 0x41ae10u: goto label_41ae10;
        case 0x41ae14u: goto label_41ae14;
        case 0x41ae18u: goto label_41ae18;
        case 0x41ae1cu: goto label_41ae1c;
        case 0x41ae20u: goto label_41ae20;
        case 0x41ae24u: goto label_41ae24;
        case 0x41ae28u: goto label_41ae28;
        case 0x41ae2cu: goto label_41ae2c;
        case 0x41ae30u: goto label_41ae30;
        case 0x41ae34u: goto label_41ae34;
        case 0x41ae38u: goto label_41ae38;
        case 0x41ae3cu: goto label_41ae3c;
        case 0x41ae40u: goto label_41ae40;
        case 0x41ae44u: goto label_41ae44;
        case 0x41ae48u: goto label_41ae48;
        case 0x41ae4cu: goto label_41ae4c;
        case 0x41ae50u: goto label_41ae50;
        case 0x41ae54u: goto label_41ae54;
        case 0x41ae58u: goto label_41ae58;
        case 0x41ae5cu: goto label_41ae5c;
        case 0x41ae60u: goto label_41ae60;
        case 0x41ae64u: goto label_41ae64;
        case 0x41ae68u: goto label_41ae68;
        case 0x41ae6cu: goto label_41ae6c;
        case 0x41ae70u: goto label_41ae70;
        case 0x41ae74u: goto label_41ae74;
        case 0x41ae78u: goto label_41ae78;
        case 0x41ae7cu: goto label_41ae7c;
        case 0x41ae80u: goto label_41ae80;
        case 0x41ae84u: goto label_41ae84;
        case 0x41ae88u: goto label_41ae88;
        case 0x41ae8cu: goto label_41ae8c;
        case 0x41ae90u: goto label_41ae90;
        case 0x41ae94u: goto label_41ae94;
        case 0x41ae98u: goto label_41ae98;
        case 0x41ae9cu: goto label_41ae9c;
        case 0x41aea0u: goto label_41aea0;
        case 0x41aea4u: goto label_41aea4;
        case 0x41aea8u: goto label_41aea8;
        case 0x41aeacu: goto label_41aeac;
        case 0x41aeb0u: goto label_41aeb0;
        case 0x41aeb4u: goto label_41aeb4;
        case 0x41aeb8u: goto label_41aeb8;
        case 0x41aebcu: goto label_41aebc;
        case 0x41aec0u: goto label_41aec0;
        case 0x41aec4u: goto label_41aec4;
        case 0x41aec8u: goto label_41aec8;
        case 0x41aeccu: goto label_41aecc;
        case 0x41aed0u: goto label_41aed0;
        case 0x41aed4u: goto label_41aed4;
        case 0x41aed8u: goto label_41aed8;
        case 0x41aedcu: goto label_41aedc;
        case 0x41aee0u: goto label_41aee0;
        case 0x41aee4u: goto label_41aee4;
        case 0x41aee8u: goto label_41aee8;
        case 0x41aeecu: goto label_41aeec;
        case 0x41aef0u: goto label_41aef0;
        case 0x41aef4u: goto label_41aef4;
        case 0x41aef8u: goto label_41aef8;
        case 0x41aefcu: goto label_41aefc;
        case 0x41af00u: goto label_41af00;
        case 0x41af04u: goto label_41af04;
        case 0x41af08u: goto label_41af08;
        case 0x41af0cu: goto label_41af0c;
        case 0x41af10u: goto label_41af10;
        case 0x41af14u: goto label_41af14;
        case 0x41af18u: goto label_41af18;
        case 0x41af1cu: goto label_41af1c;
        case 0x41af20u: goto label_41af20;
        case 0x41af24u: goto label_41af24;
        case 0x41af28u: goto label_41af28;
        case 0x41af2cu: goto label_41af2c;
        case 0x41af30u: goto label_41af30;
        case 0x41af34u: goto label_41af34;
        case 0x41af38u: goto label_41af38;
        case 0x41af3cu: goto label_41af3c;
        case 0x41af40u: goto label_41af40;
        case 0x41af44u: goto label_41af44;
        case 0x41af48u: goto label_41af48;
        case 0x41af4cu: goto label_41af4c;
        case 0x41af50u: goto label_41af50;
        case 0x41af54u: goto label_41af54;
        case 0x41af58u: goto label_41af58;
        case 0x41af5cu: goto label_41af5c;
        case 0x41af60u: goto label_41af60;
        case 0x41af64u: goto label_41af64;
        case 0x41af68u: goto label_41af68;
        case 0x41af6cu: goto label_41af6c;
        case 0x41af70u: goto label_41af70;
        case 0x41af74u: goto label_41af74;
        case 0x41af78u: goto label_41af78;
        case 0x41af7cu: goto label_41af7c;
        case 0x41af80u: goto label_41af80;
        case 0x41af84u: goto label_41af84;
        case 0x41af88u: goto label_41af88;
        case 0x41af8cu: goto label_41af8c;
        case 0x41af90u: goto label_41af90;
        case 0x41af94u: goto label_41af94;
        case 0x41af98u: goto label_41af98;
        case 0x41af9cu: goto label_41af9c;
        case 0x41afa0u: goto label_41afa0;
        case 0x41afa4u: goto label_41afa4;
        case 0x41afa8u: goto label_41afa8;
        case 0x41afacu: goto label_41afac;
        case 0x41afb0u: goto label_41afb0;
        case 0x41afb4u: goto label_41afb4;
        case 0x41afb8u: goto label_41afb8;
        case 0x41afbcu: goto label_41afbc;
        case 0x41afc0u: goto label_41afc0;
        case 0x41afc4u: goto label_41afc4;
        case 0x41afc8u: goto label_41afc8;
        case 0x41afccu: goto label_41afcc;
        case 0x41afd0u: goto label_41afd0;
        case 0x41afd4u: goto label_41afd4;
        case 0x41afd8u: goto label_41afd8;
        case 0x41afdcu: goto label_41afdc;
        case 0x41afe0u: goto label_41afe0;
        case 0x41afe4u: goto label_41afe4;
        case 0x41afe8u: goto label_41afe8;
        case 0x41afecu: goto label_41afec;
        case 0x41aff0u: goto label_41aff0;
        case 0x41aff4u: goto label_41aff4;
        case 0x41aff8u: goto label_41aff8;
        case 0x41affcu: goto label_41affc;
        case 0x41b000u: goto label_41b000;
        case 0x41b004u: goto label_41b004;
        case 0x41b008u: goto label_41b008;
        case 0x41b00cu: goto label_41b00c;
        case 0x41b010u: goto label_41b010;
        case 0x41b014u: goto label_41b014;
        case 0x41b018u: goto label_41b018;
        case 0x41b01cu: goto label_41b01c;
        case 0x41b020u: goto label_41b020;
        case 0x41b024u: goto label_41b024;
        case 0x41b028u: goto label_41b028;
        case 0x41b02cu: goto label_41b02c;
        case 0x41b030u: goto label_41b030;
        case 0x41b034u: goto label_41b034;
        case 0x41b038u: goto label_41b038;
        case 0x41b03cu: goto label_41b03c;
        case 0x41b040u: goto label_41b040;
        case 0x41b044u: goto label_41b044;
        case 0x41b048u: goto label_41b048;
        case 0x41b04cu: goto label_41b04c;
        case 0x41b050u: goto label_41b050;
        case 0x41b054u: goto label_41b054;
        case 0x41b058u: goto label_41b058;
        case 0x41b05cu: goto label_41b05c;
        case 0x41b060u: goto label_41b060;
        case 0x41b064u: goto label_41b064;
        case 0x41b068u: goto label_41b068;
        case 0x41b06cu: goto label_41b06c;
        case 0x41b070u: goto label_41b070;
        case 0x41b074u: goto label_41b074;
        case 0x41b078u: goto label_41b078;
        case 0x41b07cu: goto label_41b07c;
        case 0x41b080u: goto label_41b080;
        case 0x41b084u: goto label_41b084;
        case 0x41b088u: goto label_41b088;
        case 0x41b08cu: goto label_41b08c;
        case 0x41b090u: goto label_41b090;
        case 0x41b094u: goto label_41b094;
        case 0x41b098u: goto label_41b098;
        case 0x41b09cu: goto label_41b09c;
        case 0x41b0a0u: goto label_41b0a0;
        case 0x41b0a4u: goto label_41b0a4;
        case 0x41b0a8u: goto label_41b0a8;
        case 0x41b0acu: goto label_41b0ac;
        case 0x41b0b0u: goto label_41b0b0;
        case 0x41b0b4u: goto label_41b0b4;
        case 0x41b0b8u: goto label_41b0b8;
        case 0x41b0bcu: goto label_41b0bc;
        case 0x41b0c0u: goto label_41b0c0;
        case 0x41b0c4u: goto label_41b0c4;
        case 0x41b0c8u: goto label_41b0c8;
        case 0x41b0ccu: goto label_41b0cc;
        case 0x41b0d0u: goto label_41b0d0;
        case 0x41b0d4u: goto label_41b0d4;
        case 0x41b0d8u: goto label_41b0d8;
        case 0x41b0dcu: goto label_41b0dc;
        case 0x41b0e0u: goto label_41b0e0;
        case 0x41b0e4u: goto label_41b0e4;
        case 0x41b0e8u: goto label_41b0e8;
        case 0x41b0ecu: goto label_41b0ec;
        case 0x41b0f0u: goto label_41b0f0;
        case 0x41b0f4u: goto label_41b0f4;
        case 0x41b0f8u: goto label_41b0f8;
        case 0x41b0fcu: goto label_41b0fc;
        default: break;
    }

    ctx->pc = 0x41ac28u;

label_41ac28:
    // 0x41ac28: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x41ac28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_41ac2c:
    // 0x41ac2c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x41ac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_41ac30:
    // 0x41ac30: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x41ac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_41ac34:
    // 0x41ac34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41ac34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41ac38:
    // 0x41ac38: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x41ac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_41ac3c:
    // 0x41ac3c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x41ac3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41ac40:
    // 0x41ac40: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x41ac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_41ac44:
    // 0x41ac44: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x41ac44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_41ac48:
    // 0x41ac48: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x41ac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_41ac4c:
    // 0x41ac4c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x41ac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_41ac50:
    // 0x41ac50: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x41ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_41ac54:
    // 0x41ac54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41ac58:
    // 0x41ac58: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x41ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_41ac5c:
    // 0x41ac5c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x41ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_41ac60:
    // 0x41ac60: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_41ac64:
    if (ctx->pc == 0x41AC64u) {
        ctx->pc = 0x41AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AC60u;
        // 0x41ac64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AC68u;
        goto label_41ac68;
    }
    ctx->pc = 0x41AC60u;
    {
        const bool branch_taken_0x41ac60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x41AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AC60u;
        // 0x41ac64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ac60) {
            ctx->pc = 0x41AC78u;
            goto label_41ac78;
        }
    }
    ctx->pc = 0x41AC68u;
label_41ac68:
    // 0x41ac68: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x41ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_41ac6c:
    // 0x41ac6c: 0x8e340008  lw          $s4, 0x8($s1)
    ctx->pc = 0x41ac6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_41ac70:
    // 0x41ac70: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
label_41ac74:
    if (ctx->pc == 0x41AC74u) {
        ctx->pc = 0x41AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AC70u;
        // 0x41ac74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AC78u;
        goto label_41ac78;
    }
    ctx->pc = 0x41AC70u;
    {
        const bool branch_taken_0x41ac70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x41AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AC70u;
        // 0x41ac74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ac70) {
            ctx->pc = 0x41AC94u;
            goto label_41ac94;
        }
    }
    ctx->pc = 0x41AC78u;
label_41ac78:
    // 0x41ac78: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41ac7c:
    // 0x41ac7c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_41ac80:
    // 0x41ac80: 0xc1035f6  jal         func_40D7D8
label_41ac84:
    if (ctx->pc == 0x41AC84u) {
        ctx->pc = 0x41AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AC80u;
        // 0x41ac84: 0x3484000a  ori         $a0, $a0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AC88u;
        goto label_41ac88;
    }
    ctx->pc = 0x41AC80u;
    SET_GPR_U32(ctx, 31, 0x41AC88u);
    ctx->pc = 0x41AC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AC80u;
    // 0x41ac84: 0x3484000a  ori         $a0, $a0, 0xA (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41AC80u, 0x41AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AC88u;
label_41ac88:
    // 0x41ac88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41ac88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41ac8c:
    // 0x41ac8c: 0x1000010c  b           . + 4 + (0x10C << 2)
label_41ac90:
    if (ctx->pc == 0x41AC90u) {
        ctx->pc = 0x41AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AC8Cu;
        // 0x41ac90: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AC94u;
        goto label_41ac94;
    }
    ctx->pc = 0x41AC8Cu;
    {
        const bool branch_taken_0x41ac8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AC8Cu;
        // 0x41ac90: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ac8c) {
            ctx->pc = 0x41B0C0u;
            goto label_41b0c0;
        }
    }
    ctx->pc = 0x41AC94u;
label_41ac94:
    // 0x41ac94: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x41ac94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_41ac98:
    // 0x41ac98: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x41ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_41ac9c:
    // 0x41ac9c: 0x1242000c  beq         $s2, $v0, . + 4 + (0xC << 2)
label_41aca0:
    if (ctx->pc == 0x41ACA0u) {
        ctx->pc = 0x41ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AC9Cu;
        // 0x41aca0: 0x2a420009  slti        $v0, $s2, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ACA4u;
        goto label_41aca4;
    }
    ctx->pc = 0x41AC9Cu;
    {
        const bool branch_taken_0x41ac9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x41ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AC9Cu;
        // 0x41aca0: 0x2a420009  slti        $v0, $s2, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ac9c) {
            ctx->pc = 0x41ACD0u;
            goto label_41acd0;
        }
    }
    ctx->pc = 0x41ACA4u;
label_41aca4:
    // 0x41aca4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_41aca8:
    if (ctx->pc == 0x41ACA8u) {
        ctx->pc = 0x41ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ACA4u;
        // 0x41aca8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ACACu;
        goto label_41acac;
    }
    ctx->pc = 0x41ACA4u;
    {
        const bool branch_taken_0x41aca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ACA4u;
        // 0x41aca8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aca4) {
            ctx->pc = 0x41ACBCu;
            goto label_41acbc;
        }
    }
    ctx->pc = 0x41ACACu;
label_41acac:
    // 0x41acac: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
label_41acb0:
    if (ctx->pc == 0x41ACB0u) {
        ctx->pc = 0x41ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ACACu;
        // 0x41acb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ACB4u;
        goto label_41acb4;
    }
    ctx->pc = 0x41ACACu;
    {
        const bool branch_taken_0x41acac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x41ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ACACu;
        // 0x41acb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41acac) {
            ctx->pc = 0x41ACD0u;
            goto label_41acd0;
        }
    }
    ctx->pc = 0x41ACB4u;
label_41acb4:
    // 0x41acb4: 0x100000fc  b           . + 4 + (0xFC << 2)
label_41acb8:
    if (ctx->pc == 0x41ACB8u) {
        ctx->pc = 0x41ACBCu;
        goto label_41acbc;
    }
    ctx->pc = 0x41ACB4u;
    {
        const bool branch_taken_0x41acb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41acb4) {
            ctx->pc = 0x41B0A8u;
            goto label_41b0a8;
        }
    }
    ctx->pc = 0x41ACBCu;
label_41acbc:
    // 0x41acbc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x41acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_41acc0:
    // 0x41acc0: 0x124200b8  beq         $s2, $v0, . + 4 + (0xB8 << 2)
label_41acc4:
    if (ctx->pc == 0x41ACC4u) {
        ctx->pc = 0x41ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ACC0u;
        // 0x41acc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ACC8u;
        goto label_41acc8;
    }
    ctx->pc = 0x41ACC0u;
    {
        const bool branch_taken_0x41acc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x41ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ACC0u;
        // 0x41acc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41acc0) {
            ctx->pc = 0x41AFA4u;
            goto label_41afa4;
        }
    }
    ctx->pc = 0x41ACC8u;
label_41acc8:
    // 0x41acc8: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_41accc:
    if (ctx->pc == 0x41ACCCu) {
        ctx->pc = 0x41ACD0u;
        goto label_41acd0;
    }
    ctx->pc = 0x41ACC8u;
    {
        const bool branch_taken_0x41acc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41acc8) {
            ctx->pc = 0x41B0A8u;
            goto label_41b0a8;
        }
    }
    ctx->pc = 0x41ACD0u;
label_41acd0:
    // 0x41acd0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41acd4:
    // 0x41acd4: 0x8f85be08  lw          $a1, -0x41F8($gp)
    ctx->pc = 0x41acd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41acd8:
    // 0x41acd8: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x41acd8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_41acdc:
    // 0x41acdc: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x41acdcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_41ace0:
    // 0x41ace0: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x41ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_41ace4:
    // 0x41ace4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x41ace4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_41ace8:
    // 0x41ace8: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x41ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_41acec:
    // 0x41acec: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x41acecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_41acf0:
    // 0x41acf0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x41acf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_41acf4:
    // 0x41acf4: 0x40f809  jalr        $v0
label_41acf8:
    if (ctx->pc == 0x41ACF8u) {
        ctx->pc = 0x41ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ACF4u;
        // 0x41acf8: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ACFCu;
        goto label_41acfc;
    }
    ctx->pc = 0x41ACF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41ACFCu);
        ctx->pc = 0x41ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ACF4u;
        // 0x41acf8: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41ACF4u, 0x41ACFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41ACFCu;
label_41acfc:
    // 0x41acfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41acfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ad00:
    // 0x41ad00: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_41ad04:
    if (ctx->pc == 0x41AD04u) {
        ctx->pc = 0x41AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD00u;
        // 0x41ad04: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AD08u;
        goto label_41ad08;
    }
    ctx->pc = 0x41AD00u;
    {
        const bool branch_taken_0x41ad00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD00u;
        // 0x41ad04: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ad00) {
            ctx->pc = 0x41AD10u;
            goto label_41ad10;
        }
    }
    ctx->pc = 0x41AD08u;
label_41ad08:
    // 0x41ad08: 0x1000000b  b           . + 4 + (0xB << 2)
label_41ad0c:
    if (ctx->pc == 0x41AD0Cu) {
        ctx->pc = 0x41AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD08u;
        // 0x41ad0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AD10u;
        goto label_41ad10;
    }
    ctx->pc = 0x41AD08u;
    {
        const bool branch_taken_0x41ad08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD08u;
        // 0x41ad0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ad08) {
            ctx->pc = 0x41AD38u;
            goto label_41ad38;
        }
    }
    ctx->pc = 0x41AD10u;
label_41ad10:
    // 0x41ad10: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x41ad10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_41ad14:
    // 0x41ad14: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x41ad14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_41ad18:
    // 0x41ad18: 0x2484c9e0  addiu       $a0, $a0, -0x3620
    ctx->pc = 0x41ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
label_41ad1c:
    // 0x41ad1c: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x41ad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
label_41ad20:
    // 0x41ad20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41ad20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ad24:
    // 0x41ad24: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x41ad24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_41ad28:
    // 0x41ad28: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x41ad28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ad2c:
    // 0x41ad2c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x41ad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_41ad30:
    // 0x41ad30: 0xc104c80  jal         func_413200
label_41ad34:
    if (ctx->pc == 0x41AD34u) {
        ctx->pc = 0x41AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD30u;
        // 0x41ad34: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AD38u;
        goto label_41ad38;
    }
    ctx->pc = 0x41AD30u;
    SET_GPR_U32(ctx, 31, 0x41AD38u);
    ctx->pc = 0x41AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AD30u;
    // 0x41ad34: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x41AD30u, 0x41AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AD38u;
label_41ad38:
    // 0x41ad38: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
label_41ad3c:
    if (ctx->pc == 0x41AD3Cu) {
        ctx->pc = 0x41AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD38u;
        // 0x41ad3c: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AD40u;
        goto label_41ad40;
    }
    ctx->pc = 0x41AD38u;
    {
        const bool branch_taken_0x41ad38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x41ad38) {
            ctx->pc = 0x41AD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41AD38u;
            // 0x41ad3c: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41AD48u;
            goto label_41ad48;
        }
    }
    ctx->pc = 0x41AD40u;
label_41ad40:
    // 0x41ad40: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_41ad44:
    if (ctx->pc == 0x41AD44u) {
        ctx->pc = 0x41AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD40u;
        // 0x41ad44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AD48u;
        goto label_41ad48;
    }
    ctx->pc = 0x41AD40u;
    {
        const bool branch_taken_0x41ad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD40u;
        // 0x41ad44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ad40) {
            ctx->pc = 0x41B0D4u;
            goto label_41b0d4;
        }
    }
    ctx->pc = 0x41AD48u;
label_41ad48:
    // 0x41ad48: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x41ad48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_41ad4c:
    // 0x41ad4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x41ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41ad50:
    // 0x41ad50: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x41ad50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41ad54:
    // 0x41ad54: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_41ad58:
    if (ctx->pc == 0x41AD58u) {
        ctx->pc = 0x41AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD54u;
        // 0x41ad58: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AD5Cu;
        goto label_41ad5c;
    }
    ctx->pc = 0x41AD54u;
    {
        const bool branch_taken_0x41ad54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD54u;
        // 0x41ad58: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ad54) {
            ctx->pc = 0x41AD68u;
            goto label_41ad68;
        }
    }
    ctx->pc = 0x41AD5Cu;
label_41ad5c:
    // 0x41ad5c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x41ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_41ad60:
    // 0x41ad60: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_41ad64:
    if (ctx->pc == 0x41AD64u) {
        ctx->pc = 0x41AD68u;
        goto label_41ad68;
    }
    ctx->pc = 0x41AD60u;
    {
        const bool branch_taken_0x41ad60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x41ad60) {
            ctx->pc = 0x41AD6Cu;
            goto label_41ad6c;
        }
    }
    ctx->pc = 0x41AD68u;
label_41ad68:
    // 0x41ad68: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x41ad68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41ad6c:
    // 0x41ad6c: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_41ad70:
    if (ctx->pc == 0x41AD70u) {
        ctx->pc = 0x41AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD6Cu;
        // 0x41ad70: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AD74u;
        goto label_41ad74;
    }
    ctx->pc = 0x41AD6Cu;
    {
        const bool branch_taken_0x41ad6c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD6Cu;
        // 0x41ad70: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ad6c) {
            ctx->pc = 0x41AD88u;
            goto label_41ad88;
        }
    }
    ctx->pc = 0x41AD74u;
label_41ad74:
    // 0x41ad74: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x41ad74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_41ad78:
    // 0x41ad78: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x41ad78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
label_41ad7c:
    // 0x41ad7c: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x41ad7cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_41ad80:
    // 0x41ad80: 0x10000003  b           . + 4 + (0x3 << 2)
label_41ad84:
    if (ctx->pc == 0x41AD84u) {
        ctx->pc = 0x41AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD80u;
        // 0x41ad84: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AD88u;
        goto label_41ad88;
    }
    ctx->pc = 0x41AD80u;
    {
        const bool branch_taken_0x41ad80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AD80u;
        // 0x41ad84: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ad80) {
            ctx->pc = 0x41AD90u;
            goto label_41ad90;
        }
    }
    ctx->pc = 0x41AD88u;
label_41ad88:
    // 0x41ad88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x41ad88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41ad8c:
    // 0x41ad8c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x41ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_41ad90:
    // 0x41ad90: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x41ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_41ad94:
    // 0x41ad94: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x41ad94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_41ad98:
    // 0x41ad98: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x41ad98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_41ad9c:
    // 0x41ad9c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x41ad9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_41ada0:
    // 0x41ada0: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x41ada0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_41ada4:
    // 0x41ada4: 0x26e4e880  addiu       $a0, $s7, -0x1780
    ctx->pc = 0x41ada4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_41ada8:
    // 0x41ada8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x41ada8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_41adac:
    // 0x41adac: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x41adacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_41adb0:
    // 0x41adb0: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x41adb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
label_41adb4:
    // 0x41adb4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x41adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_41adb8:
    // 0x41adb8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x41adb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_41adbc:
    // 0x41adbc: 0x679818  mult        $s3, $v1, $a3
    ctx->pc = 0x41adbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_41adc0:
    // 0x41adc0: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x41adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_41adc4:
    // 0x41adc4: 0x2688021  addu        $s0, $s3, $t0
    ctx->pc = 0x41adc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
label_41adc8:
    // 0x41adc8: 0x40f809  jalr        $v0
label_41adcc:
    if (ctx->pc == 0x41ADCCu) {
        ctx->pc = 0x41ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ADC8u;
        // 0x41adcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ADD0u;
        goto label_41add0;
    }
    ctx->pc = 0x41ADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41ADD0u);
        ctx->pc = 0x41ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ADC8u;
        // 0x41adcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41ADC8u, 0x41ADD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41ADD0u;
label_41add0:
    // 0x41add0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_41add4:
    if (ctx->pc == 0x41ADD4u) {
        ctx->pc = 0x41ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ADD0u;
        // 0x41add4: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ADD8u;
        goto label_41add8;
    }
    ctx->pc = 0x41ADD0u;
    {
        const bool branch_taken_0x41add0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ADD0u;
        // 0x41add4: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41add0) {
            ctx->pc = 0x41AE08u;
            goto label_41ae08;
        }
    }
    ctx->pc = 0x41ADD8u;
label_41add8:
    // 0x41add8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41add8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41addc:
    // 0x41addc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41addcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41ade0:
    // 0x41ade0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41ade0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ade4:
    // 0x41ade4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x41ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_41ade8:
    // 0x41ade8: 0xc1035f6  jal         func_40D7D8
label_41adec:
    if (ctx->pc == 0x41ADECu) {
        ctx->pc = 0x41ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ADE8u;
        // 0x41adec: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ADF0u;
        goto label_41adf0;
    }
    ctx->pc = 0x41ADE8u;
    SET_GPR_U32(ctx, 31, 0x41ADF0u);
    ctx->pc = 0x41ADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41ADE8u;
    // 0x41adec: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41ADE8u, 0x41ADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41ADF0u;
label_41adf0:
    // 0x41adf0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x41adf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_41adf4:
    // 0x41adf4: 0xc103628  jal         func_40D8A0
label_41adf8:
    if (ctx->pc == 0x41ADF8u) {
        ctx->pc = 0x41ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ADF4u;
        // 0x41adf8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41ADFCu;
        goto label_41adfc;
    }
    ctx->pc = 0x41ADF4u;
    SET_GPR_U32(ctx, 31, 0x41ADFCu);
    ctx->pc = 0x41ADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41ADF4u;
    // 0x41adf8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41ADF4u, 0x41ADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41ADFCu;
label_41adfc:
    // 0x41adfc: 0x10000009  b           . + 4 + (0x9 << 2)
label_41ae00:
    if (ctx->pc == 0x41AE00u) {
        ctx->pc = 0x41AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ADFCu;
        // 0x41ae00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AE04u;
        goto label_41ae04;
    }
    ctx->pc = 0x41ADFCu;
    {
        const bool branch_taken_0x41adfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41ADFCu;
        // 0x41ae00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41adfc) {
            ctx->pc = 0x41AE24u;
            goto label_41ae24;
        }
    }
    ctx->pc = 0x41AE04u;
label_41ae04:
    // 0x41ae04: 0x0  nop
    ctx->pc = 0x41ae04u;
    // NOP
label_41ae08:
    // 0x41ae08: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x41ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_41ae0c:
    // 0x41ae0c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x41ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_41ae10:
    // 0x41ae10: 0x14100a  movz        $v0, $zero, $s4
    ctx->pc = 0x41ae10u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_41ae14:
    // 0x41ae14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41ae14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41ae18:
    // 0x41ae18: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x41ae18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_41ae1c:
    // 0x41ae1c: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x41ae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_41ae20:
    // 0x41ae20: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x41ae20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_41ae24:
    // 0x41ae24: 0x54800014  bnel        $a0, $zero, . + 4 + (0x14 << 2)
label_41ae28:
    if (ctx->pc == 0x41AE28u) {
        ctx->pc = 0x41AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE24u;
        // 0x41ae28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AE2Cu;
        goto label_41ae2c;
    }
    ctx->pc = 0x41AE24u;
    {
        const bool branch_taken_0x41ae24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x41ae24) {
            ctx->pc = 0x41AE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41AE24u;
            // 0x41ae28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41AE78u;
            goto label_41ae78;
        }
    }
    ctx->pc = 0x41AE2Cu;
label_41ae2c:
    // 0x41ae2c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x41ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_41ae30:
    // 0x41ae30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x41ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_41ae34:
    // 0x41ae34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_41ae38:
    if (ctx->pc == 0x41AE38u) {
        ctx->pc = 0x41AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE34u;
        // 0x41ae38: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AE3Cu;
        goto label_41ae3c;
    }
    ctx->pc = 0x41AE34u;
    {
        const bool branch_taken_0x41ae34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE34u;
        // 0x41ae38: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ae34) {
            ctx->pc = 0x41AE48u;
            goto label_41ae48;
        }
    }
    ctx->pc = 0x41AE3Cu;
label_41ae3c:
    // 0x41ae3c: 0xc1070bc  jal         func_41C2F0
label_41ae40:
    if (ctx->pc == 0x41AE40u) {
        ctx->pc = 0x41AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE3Cu;
        // 0x41ae40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AE44u;
        goto label_41ae44;
    }
    ctx->pc = 0x41AE3Cu;
    SET_GPR_U32(ctx, 31, 0x41AE44u);
    ctx->pc = 0x41AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AE3Cu;
    // 0x41ae40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C2F0u, 0x41AE3Cu, 0x41AE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AE44u;
label_41ae44:
    // 0x41ae44: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41ae44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_41ae48:
    // 0x41ae48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41ae48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41ae4c:
    // 0x41ae4c: 0xc104ca6  jal         func_413298
label_41ae50:
    if (ctx->pc == 0x41AE50u) {
        ctx->pc = 0x41AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE4Cu;
        // 0x41ae50: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AE54u;
        goto label_41ae54;
    }
    ctx->pc = 0x41AE4Cu;
    SET_GPR_U32(ctx, 31, 0x41AE54u);
    ctx->pc = 0x41AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AE4Cu;
    // 0x41ae50: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x41AE4Cu, 0x41AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AE54u;
label_41ae54:
    // 0x41ae54: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41ae54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41ae58:
    // 0x41ae58: 0x26e4e880  addiu       $a0, $s7, -0x1780
    ctx->pc = 0x41ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_41ae5c:
    // 0x41ae5c: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x41ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_41ae60:
    // 0x41ae60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41ae60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41ae64:
    // 0x41ae64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x41ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_41ae68:
    // 0x41ae68: 0x40f809  jalr        $v0
label_41ae6c:
    if (ctx->pc == 0x41AE6Cu) {
        ctx->pc = 0x41AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE68u;
        // 0x41ae6c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AE70u;
        goto label_41ae70;
    }
    ctx->pc = 0x41AE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41AE70u);
        ctx->pc = 0x41AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE68u;
        // 0x41ae6c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AE68u, 0x41AE70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41AE70u;
label_41ae70:
    // 0x41ae70: 0x10000098  b           . + 4 + (0x98 << 2)
label_41ae74:
    if (ctx->pc == 0x41AE74u) {
        ctx->pc = 0x41AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE70u;
        // 0x41ae74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AE78u;
        goto label_41ae78;
    }
    ctx->pc = 0x41AE70u;
    {
        const bool branch_taken_0x41ae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE70u;
        // 0x41ae74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ae70) {
            ctx->pc = 0x41B0D4u;
            goto label_41b0d4;
        }
    }
    ctx->pc = 0x41AE78u;
label_41ae78:
    // 0x41ae78: 0xc1070d0  jal         func_41C340
label_41ae7c:
    if (ctx->pc == 0x41AE7Cu) {
        ctx->pc = 0x41AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE78u;
        // 0x41ae7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AE80u;
        goto label_41ae80;
    }
    ctx->pc = 0x41AE78u;
    SET_GPR_U32(ctx, 31, 0x41AE80u);
    ctx->pc = 0x41AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AE78u;
    // 0x41ae7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C340u, 0x41AE78u, 0x41AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AE80u;
label_41ae80:
    // 0x41ae80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x41ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41ae84:
    // 0x41ae84: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x41ae84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_41ae88:
    // 0x41ae88: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_41ae8c:
    if (ctx->pc == 0x41AE8Cu) {
        ctx->pc = 0x41AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE88u;
        // 0x41ae8c: 0x26e3e880  addiu       $v1, $s7, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AE90u;
        goto label_41ae90;
    }
    ctx->pc = 0x41AE88u;
    {
        const bool branch_taken_0x41ae88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE88u;
        // 0x41ae8c: 0x26e3e880  addiu       $v1, $s7, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ae88) {
            ctx->pc = 0x41AEB4u;
            goto label_41aeb4;
        }
    }
    ctx->pc = 0x41AE90u;
label_41ae90:
    // 0x41ae90: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x41ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_41ae94:
    // 0x41ae94: 0x40f809  jalr        $v0
label_41ae98:
    if (ctx->pc == 0x41AE98u) {
        ctx->pc = 0x41AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE94u;
        // 0x41ae98: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AE9Cu;
        goto label_41ae9c;
    }
    ctx->pc = 0x41AE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41AE9Cu);
        ctx->pc = 0x41AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE94u;
        // 0x41ae98: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AE94u, 0x41AE9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41AE9Cu;
label_41ae9c:
    // 0x41ae9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x41ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41aea0:
    // 0x41aea0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x41aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_41aea4:
    // 0x41aea4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x41aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_41aea8:
    // 0x41aea8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x41aea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_41aeac:
    // 0x41aeac: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x41aeacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_41aeb0:
    // 0x41aeb0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x41aeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_41aeb4:
    // 0x41aeb4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x41aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_41aeb8:
    // 0x41aeb8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x41aeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_41aebc:
    // 0x41aebc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x41aebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_41aec0:
    // 0x41aec0: 0x2407fffc  addiu       $a3, $zero, -0x4
    ctx->pc = 0x41aec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_41aec4:
    // 0x41aec4: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x41aec4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_41aec8:
    // 0x41aec8: 0x26e4e880  addiu       $a0, $s7, -0x1780
    ctx->pc = 0x41aec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_41aecc:
    // 0x41aecc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x41aeccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41aed0:
    // 0x41aed0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x41aed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_41aed4:
    // 0x41aed4: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x41aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_41aed8:
    // 0x41aed8: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x41aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_41aedc:
    // 0x41aedc: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x41aedcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_41aee0:
    // 0x41aee0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x41aee0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_41aee4:
    // 0x41aee4: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x41aee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_41aee8:
    // 0x41aee8: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x41aee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
label_41aeec:
    // 0x41aeec: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x41aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_41aef0:
    // 0x41aef0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x41aef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_41aef4:
    // 0x41aef4: 0x688018  mult        $s0, $v1, $t0
    ctx->pc = 0x41aef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_41aef8:
    // 0x41aef8: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x41aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_41aefc:
    // 0x41aefc: 0x40f809  jalr        $v0
label_41af00:
    if (ctx->pc == 0x41AF00u) {
        ctx->pc = 0x41AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AEFCu;
        // 0x41af00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AF04u;
        goto label_41af04;
    }
    ctx->pc = 0x41AEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41AF04u);
        ctx->pc = 0x41AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AEFCu;
        // 0x41af00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AEFCu, 0x41AF04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41AF04u;
label_41af04:
    // 0x41af04: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_41af08:
    if (ctx->pc == 0x41AF08u) {
        ctx->pc = 0x41AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF04u;
        // 0x41af08: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AF0Cu;
        goto label_41af0c;
    }
    ctx->pc = 0x41AF04u;
    {
        const bool branch_taken_0x41af04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF04u;
        // 0x41af08: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41af04) {
            ctx->pc = 0x41AF38u;
            goto label_41af38;
        }
    }
    ctx->pc = 0x41AF0Cu;
label_41af0c:
    // 0x41af0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41af10:
    // 0x41af10: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41af10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41af14:
    // 0x41af14: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x41af14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_41af18:
    // 0x41af18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41af18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41af1c:
    // 0x41af1c: 0xc1035f6  jal         func_40D7D8
label_41af20:
    if (ctx->pc == 0x41AF20u) {
        ctx->pc = 0x41AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF1Cu;
        // 0x41af20: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AF24u;
        goto label_41af24;
    }
    ctx->pc = 0x41AF1Cu;
    SET_GPR_U32(ctx, 31, 0x41AF24u);
    ctx->pc = 0x41AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AF1Cu;
    // 0x41af20: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41AF1Cu, 0x41AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AF24u;
label_41af24:
    // 0x41af24: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x41af24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_41af28:
    // 0x41af28: 0xc103628  jal         func_40D8A0
label_41af2c:
    if (ctx->pc == 0x41AF2Cu) {
        ctx->pc = 0x41AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF28u;
        // 0x41af2c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AF30u;
        goto label_41af30;
    }
    ctx->pc = 0x41AF28u;
    SET_GPR_U32(ctx, 31, 0x41AF30u);
    ctx->pc = 0x41AF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AF28u;
    // 0x41af2c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41AF28u, 0x41AF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AF30u;
label_41af30:
    // 0x41af30: 0x10000006  b           . + 4 + (0x6 << 2)
label_41af34:
    if (ctx->pc == 0x41AF34u) {
        ctx->pc = 0x41AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF30u;
        // 0x41af34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AF38u;
        goto label_41af38;
    }
    ctx->pc = 0x41AF30u;
    {
        const bool branch_taken_0x41af30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF30u;
        // 0x41af34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41af30) {
            ctx->pc = 0x41AF4Cu;
            goto label_41af4c;
        }
    }
    ctx->pc = 0x41AF38u;
label_41af38:
    // 0x41af38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x41af38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41af3c:
    // 0x41af3c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x41af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_41af40:
    // 0x41af40: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x41af40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_41af44:
    // 0x41af44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x41af44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_41af48:
    // 0x41af48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41af48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41af4c:
    // 0x41af4c: 0xc1070d0  jal         func_41C340
label_41af50:
    if (ctx->pc == 0x41AF50u) {
        ctx->pc = 0x41AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF4Cu;
        // 0x41af50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AF54u;
        goto label_41af54;
    }
    ctx->pc = 0x41AF4Cu;
    SET_GPR_U32(ctx, 31, 0x41AF54u);
    ctx->pc = 0x41AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AF4Cu;
    // 0x41af50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C340u, 0x41AF4Cu, 0x41AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AF54u;
label_41af54:
    // 0x41af54: 0x26f0e880  addiu       $s0, $s7, -0x1780
    ctx->pc = 0x41af54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_41af58:
    // 0x41af58: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x41af58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_41af5c:
    // 0x41af5c: 0x40f809  jalr        $v0
label_41af60:
    if (ctx->pc == 0x41AF60u) {
        ctx->pc = 0x41AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF5Cu;
        // 0x41af60: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AF64u;
        goto label_41af64;
    }
    ctx->pc = 0x41AF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41AF64u);
        ctx->pc = 0x41AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF5Cu;
        // 0x41af60: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AF5Cu, 0x41AF64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41AF64u;
label_41af64:
    // 0x41af64: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x41af64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_41af68:
    // 0x41af68: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x41af68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_41af6c:
    // 0x41af6c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x41af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_41af70:
    // 0x41af70: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41af70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_41af74:
    // 0x41af74: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x41af74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_41af78:
    // 0x41af78: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x41af78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_41af7c:
    // 0x41af7c: 0x2484c9e0  addiu       $a0, $a0, -0x3620
    ctx->pc = 0x41af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
label_41af80:
    // 0x41af80: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x41af80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_41af84:
    // 0x41af84: 0xc104ca6  jal         func_413298
label_41af88:
    if (ctx->pc == 0x41AF88u) {
        ctx->pc = 0x41AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF84u;
        // 0x41af88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AF8Cu;
        goto label_41af8c;
    }
    ctx->pc = 0x41AF84u;
    SET_GPR_U32(ctx, 31, 0x41AF8Cu);
    ctx->pc = 0x41AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41AF84u;
    // 0x41af88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x41AF84u, 0x41AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41AF8Cu;
label_41af8c:
    // 0x41af8c: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41af8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41af90:
    // 0x41af90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41af90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41af94:
    // 0x41af94: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x41af94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_41af98:
    // 0x41af98: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x41af98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_41af9c:
    // 0x41af9c: 0x40f809  jalr        $v0
label_41afa0:
    if (ctx->pc == 0x41AFA0u) {
        ctx->pc = 0x41AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF9Cu;
        // 0x41afa0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AFA4u;
        goto label_41afa4;
    }
    ctx->pc = 0x41AF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41AFA4u);
        ctx->pc = 0x41AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF9Cu;
        // 0x41afa0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AF9Cu, 0x41AFA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41AFA4u;
label_41afa4:
    // 0x41afa4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x41afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_41afa8:
    // 0x41afa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41afa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41afac:
    // 0x41afac: 0x8ea90014  lw          $t1, 0x14($s5)
    ctx->pc = 0x41afacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_41afb0:
    // 0x41afb0: 0x8eaa0018  lw          $t2, 0x18($s5)
    ctx->pc = 0x41afb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_41afb4:
    // 0x41afb4: 0x18400046  blez        $v0, . + 4 + (0x46 << 2)
label_41afb8:
    if (ctx->pc == 0x41AFB8u) {
        ctx->pc = 0x41AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFB4u;
        // 0x41afb8: 0x8e280014  lw          $t0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AFBCu;
        goto label_41afbc;
    }
    ctx->pc = 0x41AFB4u;
    {
        const bool branch_taken_0x41afb4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x41AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFB4u;
        // 0x41afb8: 0x8e280014  lw          $t0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41afb4) {
            ctx->pc = 0x41B0D0u;
            goto label_41b0d0;
        }
    }
    ctx->pc = 0x41AFBCu;
label_41afbc:
    // 0x41afbc: 0x240d0008  addiu       $t5, $zero, 0x8
    ctx->pc = 0x41afbcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_41afc0:
    // 0x41afc0: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x41afc0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41afc4:
    // 0x41afc4: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x41afc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_41afc8:
    // 0x41afc8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x41afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_41afcc:
    // 0x41afcc: 0x106d000c  beq         $v1, $t5, . + 4 + (0xC << 2)
label_41afd0:
    if (ctx->pc == 0x41AFD0u) {
        ctx->pc = 0x41AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFCCu;
        // 0x41afd0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AFD4u;
        goto label_41afd4;
    }
    ctx->pc = 0x41AFCCu;
    {
        const bool branch_taken_0x41afcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        ctx->pc = 0x41AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFCCu;
        // 0x41afd0: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41afcc) {
            ctx->pc = 0x41B000u;
            goto label_41b000;
        }
    }
    ctx->pc = 0x41AFD4u;
label_41afd4:
    // 0x41afd4: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x41afd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_41afd8:
    // 0x41afd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_41afdc:
    if (ctx->pc == 0x41AFDCu) {
        ctx->pc = 0x41AFE0u;
        goto label_41afe0;
    }
    ctx->pc = 0x41AFD8u;
    {
        const bool branch_taken_0x41afd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41afd8) {
            ctx->pc = 0x41AFF0u;
            goto label_41aff0;
        }
    }
    ctx->pc = 0x41AFE0u;
label_41afe0:
    // 0x41afe0: 0x106c0007  beq         $v1, $t4, . + 4 + (0x7 << 2)
label_41afe4:
    if (ctx->pc == 0x41AFE4u) {
        ctx->pc = 0x41AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFE0u;
        // 0x41afe4: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AFE8u;
        goto label_41afe8;
    }
    ctx->pc = 0x41AFE0u;
    {
        const bool branch_taken_0x41afe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x41AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFE0u;
        // 0x41afe4: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41afe0) {
            ctx->pc = 0x41B000u;
            goto label_41b000;
        }
    }
    ctx->pc = 0x41AFE8u;
label_41afe8:
    // 0x41afe8: 0x10000026  b           . + 4 + (0x26 << 2)
label_41afec:
    if (ctx->pc == 0x41AFECu) {
        ctx->pc = 0x41AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFE8u;
        // 0x41afec: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AFF0u;
        goto label_41aff0;
    }
    ctx->pc = 0x41AFE8u;
    {
        const bool branch_taken_0x41afe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFE8u;
        // 0x41afec: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41afe8) {
            ctx->pc = 0x41B084u;
            goto label_41b084;
        }
    }
    ctx->pc = 0x41AFF0u;
label_41aff0:
    // 0x41aff0: 0x106b0016  beq         $v1, $t3, . + 4 + (0x16 << 2)
label_41aff4:
    if (ctx->pc == 0x41AFF4u) {
        ctx->pc = 0x41AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFF0u;
        // 0x41aff4: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AFF8u;
        goto label_41aff8;
    }
    ctx->pc = 0x41AFF0u;
    {
        const bool branch_taken_0x41aff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x41AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFF0u;
        // 0x41aff4: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aff0) {
            ctx->pc = 0x41B04Cu;
            goto label_41b04c;
        }
    }
    ctx->pc = 0x41AFF8u;
label_41aff8:
    // 0x41aff8: 0x10000022  b           . + 4 + (0x22 << 2)
label_41affc:
    if (ctx->pc == 0x41AFFCu) {
        ctx->pc = 0x41AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFF8u;
        // 0x41affc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B000u;
        goto label_41b000;
    }
    ctx->pc = 0x41AFF8u;
    {
        const bool branch_taken_0x41aff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AFF8u;
        // 0x41affc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aff8) {
            ctx->pc = 0x41B084u;
            goto label_41b084;
        }
    }
    ctx->pc = 0x41B000u;
label_41b000:
    // 0x41b000: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x41b000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_41b004:
    // 0x41b004: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x41b004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_41b008:
    // 0x41b008: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
label_41b00c:
    if (ctx->pc == 0x41B00Cu) {
        ctx->pc = 0x41B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B008u;
        // 0x41b00c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B010u;
        goto label_41b010;
    }
    ctx->pc = 0x41B008u;
    {
        const bool branch_taken_0x41b008 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x41B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B008u;
        // 0x41b00c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b008) {
            ctx->pc = 0x41B080u;
            goto label_41b080;
        }
    }
    ctx->pc = 0x41B010u;
label_41b010:
    // 0x41b010: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x41b010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_41b014:
    // 0x41b014: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x41b014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_41b018:
    // 0x41b018: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x41b018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_41b01c:
    // 0x41b01c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x41b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_41b020:
    // 0x41b020: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x41b020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_41b024:
    // 0x41b024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x41b024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_41b028:
    // 0x41b028: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x41b028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_41b02c:
    // 0x41b02c: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x41b02cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_41b030:
    // 0x41b030: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x41b030u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_41b034:
    // 0x41b034: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x41b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_41b038:
    // 0x41b038: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x41b038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41b03c:
    // 0x41b03c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_41b040:
    if (ctx->pc == 0x41B040u) {
        ctx->pc = 0x41B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B03Cu;
        // 0x41b040: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B044u;
        goto label_41b044;
    }
    ctx->pc = 0x41B03Cu;
    {
        const bool branch_taken_0x41b03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B03Cu;
        // 0x41b040: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b03c) {
            ctx->pc = 0x41B018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41b018;
        }
    }
    ctx->pc = 0x41B044u;
label_41b044:
    // 0x41b044: 0x1000000f  b           . + 4 + (0xF << 2)
label_41b048:
    if (ctx->pc == 0x41B048u) {
        ctx->pc = 0x41B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B044u;
        // 0x41b048: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B04Cu;
        goto label_41b04c;
    }
    ctx->pc = 0x41B044u;
    {
        const bool branch_taken_0x41b044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B044u;
        // 0x41b048: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b044) {
            ctx->pc = 0x41B084u;
            goto label_41b084;
        }
    }
    ctx->pc = 0x41B04Cu;
label_41b04c:
    // 0x41b04c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x41b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_41b050:
    // 0x41b050: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_41b054:
    if (ctx->pc == 0x41B054u) {
        ctx->pc = 0x41B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B050u;
        // 0x41b054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B058u;
        goto label_41b058;
    }
    ctx->pc = 0x41B050u;
    {
        const bool branch_taken_0x41b050 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x41B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B050u;
        // 0x41b054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b050) {
            ctx->pc = 0x41B080u;
            goto label_41b080;
        }
    }
    ctx->pc = 0x41B058u;
label_41b058:
    // 0x41b058: 0x25240003  addiu       $a0, $t1, 0x3
    ctx->pc = 0x41b058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_41b05c:
    // 0x41b05c: 0x25030003  addiu       $v1, $t0, 0x3
    ctx->pc = 0x41b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_41b060:
    // 0x41b060: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x41b060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_41b064:
    // 0x41b064: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x41b064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_41b068:
    // 0x41b068: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x41b068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_41b06c:
    // 0x41b06c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x41b06cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_41b070:
    // 0x41b070: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x41b070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_41b074:
    // 0x41b074: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x41b074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41b078:
    // 0x41b078: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_41b07c:
    if (ctx->pc == 0x41B07Cu) {
        ctx->pc = 0x41B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B078u;
        // 0x41b07c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B080u;
        goto label_41b080;
    }
    ctx->pc = 0x41B078u;
    {
        const bool branch_taken_0x41b078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B078u;
        // 0x41b07c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b078) {
            ctx->pc = 0x41B060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41b060;
        }
    }
    ctx->pc = 0x41B080u;
label_41b080:
    // 0x41b080: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x41b080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_41b084:
    // 0x41b084: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x41b084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_41b088:
    // 0x41b088: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x41b088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_41b08c:
    // 0x41b08c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x41b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_41b090:
    // 0x41b090: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x41b090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_41b094:
    // 0x41b094: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x41b094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41b098:
    // 0x41b098: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_41b09c:
    if (ctx->pc == 0x41B09Cu) {
        ctx->pc = 0x41B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B098u;
        // 0x41b09c: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B0A0u;
        goto label_41b0a0;
    }
    ctx->pc = 0x41B098u;
    {
        const bool branch_taken_0x41b098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B098u;
        // 0x41b09c: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b098) {
            ctx->pc = 0x41AFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41afc8;
        }
    }
    ctx->pc = 0x41B0A0u;
label_41b0a0:
    // 0x41b0a0: 0x1000000c  b           . + 4 + (0xC << 2)
label_41b0a4:
    if (ctx->pc == 0x41B0A4u) {
        ctx->pc = 0x41B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B0A0u;
        // 0x41b0a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B0A8u;
        goto label_41b0a8;
    }
    ctx->pc = 0x41B0A0u;
    {
        const bool branch_taken_0x41b0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B0A0u;
        // 0x41b0a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b0a0) {
            ctx->pc = 0x41B0D4u;
            goto label_41b0d4;
        }
    }
    ctx->pc = 0x41B0A8u;
label_41b0a8:
    // 0x41b0a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41b0ac:
    // 0x41b0ac: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x41b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_41b0b0:
    // 0x41b0b0: 0xc1035f6  jal         func_40D7D8
label_41b0b4:
    if (ctx->pc == 0x41B0B4u) {
        ctx->pc = 0x41B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B0B0u;
        // 0x41b0b4: 0x34840009  ori         $a0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B0B8u;
        goto label_41b0b8;
    }
    ctx->pc = 0x41B0B0u;
    SET_GPR_U32(ctx, 31, 0x41B0B8u);
    ctx->pc = 0x41B0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B0B0u;
    // 0x41b0b4: 0x34840009  ori         $a0, $a0, 0x9 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41B0B0u, 0x41B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B0B8u;
label_41b0b8:
    // 0x41b0b8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x41b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_41b0bc:
    // 0x41b0bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x41b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_41b0c0:
    // 0x41b0c0: 0xc103628  jal         func_40D8A0
label_41b0c4:
    if (ctx->pc == 0x41B0C4u) {
        ctx->pc = 0x41B0C8u;
        goto label_41b0c8;
    }
    ctx->pc = 0x41B0C0u;
    SET_GPR_U32(ctx, 31, 0x41B0C8u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41B0C0u, 0x41B0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B0C8u;
label_41b0c8:
    // 0x41b0c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_41b0cc:
    if (ctx->pc == 0x41B0CCu) {
        ctx->pc = 0x41B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B0C8u;
        // 0x41b0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B0D0u;
        goto label_41b0d0;
    }
    ctx->pc = 0x41B0C8u;
    {
        const bool branch_taken_0x41b0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B0C8u;
        // 0x41b0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b0c8) {
            ctx->pc = 0x41B0D4u;
            goto label_41b0d4;
        }
    }
    ctx->pc = 0x41B0D0u;
label_41b0d0:
    // 0x41b0d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41b0d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b0d4:
    // 0x41b0d4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x41b0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_41b0d8:
    // 0x41b0d8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x41b0d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_41b0dc:
    // 0x41b0dc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x41b0dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_41b0e0:
    // 0x41b0e0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x41b0e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_41b0e4:
    // 0x41b0e4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x41b0e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41b0e8:
    // 0x41b0e8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x41b0e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41b0ec:
    // 0x41b0ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x41b0ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41b0f0:
    // 0x41b0f0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x41b0f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41b0f4:
    // 0x41b0f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41b0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41b0f8:
    // 0x41b0f8: 0x3e00008  jr          $ra
label_41b0fc:
    if (ctx->pc == 0x41B0FCu) {
        ctx->pc = 0x41B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B0F8u;
        // 0x41b0fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B100u;
        goto label_fallthrough_0x41b0f8;
    }
    ctx->pc = 0x41B0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B0F8u;
        // 0x41b0fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41b0f8:
    ctx->pc = 0x41B100u;
}
