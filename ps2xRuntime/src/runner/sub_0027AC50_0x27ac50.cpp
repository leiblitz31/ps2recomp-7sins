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

// Function: sub_0027AC50
// Address: 0x27ac50 - 0x27b120
void sub_0027AC50_0x27ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AC50_0x27ac50");
#endif

    switch (ctx->pc) {
        case 0x27ac50u: goto label_27ac50;
        case 0x27ac54u: goto label_27ac54;
        case 0x27ac58u: goto label_27ac58;
        case 0x27ac5cu: goto label_27ac5c;
        case 0x27ac60u: goto label_27ac60;
        case 0x27ac64u: goto label_27ac64;
        case 0x27ac68u: goto label_27ac68;
        case 0x27ac6cu: goto label_27ac6c;
        case 0x27ac70u: goto label_27ac70;
        case 0x27ac74u: goto label_27ac74;
        case 0x27ac78u: goto label_27ac78;
        case 0x27ac7cu: goto label_27ac7c;
        case 0x27ac80u: goto label_27ac80;
        case 0x27ac84u: goto label_27ac84;
        case 0x27ac88u: goto label_27ac88;
        case 0x27ac8cu: goto label_27ac8c;
        case 0x27ac90u: goto label_27ac90;
        case 0x27ac94u: goto label_27ac94;
        case 0x27ac98u: goto label_27ac98;
        case 0x27ac9cu: goto label_27ac9c;
        case 0x27aca0u: goto label_27aca0;
        case 0x27aca4u: goto label_27aca4;
        case 0x27aca8u: goto label_27aca8;
        case 0x27acacu: goto label_27acac;
        case 0x27acb0u: goto label_27acb0;
        case 0x27acb4u: goto label_27acb4;
        case 0x27acb8u: goto label_27acb8;
        case 0x27acbcu: goto label_27acbc;
        case 0x27acc0u: goto label_27acc0;
        case 0x27acc4u: goto label_27acc4;
        case 0x27acc8u: goto label_27acc8;
        case 0x27acccu: goto label_27accc;
        case 0x27acd0u: goto label_27acd0;
        case 0x27acd4u: goto label_27acd4;
        case 0x27acd8u: goto label_27acd8;
        case 0x27acdcu: goto label_27acdc;
        case 0x27ace0u: goto label_27ace0;
        case 0x27ace4u: goto label_27ace4;
        case 0x27ace8u: goto label_27ace8;
        case 0x27acecu: goto label_27acec;
        case 0x27acf0u: goto label_27acf0;
        case 0x27acf4u: goto label_27acf4;
        case 0x27acf8u: goto label_27acf8;
        case 0x27acfcu: goto label_27acfc;
        case 0x27ad00u: goto label_27ad00;
        case 0x27ad04u: goto label_27ad04;
        case 0x27ad08u: goto label_27ad08;
        case 0x27ad0cu: goto label_27ad0c;
        case 0x27ad10u: goto label_27ad10;
        case 0x27ad14u: goto label_27ad14;
        case 0x27ad18u: goto label_27ad18;
        case 0x27ad1cu: goto label_27ad1c;
        case 0x27ad20u: goto label_27ad20;
        case 0x27ad24u: goto label_27ad24;
        case 0x27ad28u: goto label_27ad28;
        case 0x27ad2cu: goto label_27ad2c;
        case 0x27ad30u: goto label_27ad30;
        case 0x27ad34u: goto label_27ad34;
        case 0x27ad38u: goto label_27ad38;
        case 0x27ad3cu: goto label_27ad3c;
        case 0x27ad40u: goto label_27ad40;
        case 0x27ad44u: goto label_27ad44;
        case 0x27ad48u: goto label_27ad48;
        case 0x27ad4cu: goto label_27ad4c;
        case 0x27ad50u: goto label_27ad50;
        case 0x27ad54u: goto label_27ad54;
        case 0x27ad58u: goto label_27ad58;
        case 0x27ad5cu: goto label_27ad5c;
        case 0x27ad60u: goto label_27ad60;
        case 0x27ad64u: goto label_27ad64;
        case 0x27ad68u: goto label_27ad68;
        case 0x27ad6cu: goto label_27ad6c;
        case 0x27ad70u: goto label_27ad70;
        case 0x27ad74u: goto label_27ad74;
        case 0x27ad78u: goto label_27ad78;
        case 0x27ad7cu: goto label_27ad7c;
        case 0x27ad80u: goto label_27ad80;
        case 0x27ad84u: goto label_27ad84;
        case 0x27ad88u: goto label_27ad88;
        case 0x27ad8cu: goto label_27ad8c;
        case 0x27ad90u: goto label_27ad90;
        case 0x27ad94u: goto label_27ad94;
        case 0x27ad98u: goto label_27ad98;
        case 0x27ad9cu: goto label_27ad9c;
        case 0x27ada0u: goto label_27ada0;
        case 0x27ada4u: goto label_27ada4;
        case 0x27ada8u: goto label_27ada8;
        case 0x27adacu: goto label_27adac;
        case 0x27adb0u: goto label_27adb0;
        case 0x27adb4u: goto label_27adb4;
        case 0x27adb8u: goto label_27adb8;
        case 0x27adbcu: goto label_27adbc;
        case 0x27adc0u: goto label_27adc0;
        case 0x27adc4u: goto label_27adc4;
        case 0x27adc8u: goto label_27adc8;
        case 0x27adccu: goto label_27adcc;
        case 0x27add0u: goto label_27add0;
        case 0x27add4u: goto label_27add4;
        case 0x27add8u: goto label_27add8;
        case 0x27addcu: goto label_27addc;
        case 0x27ade0u: goto label_27ade0;
        case 0x27ade4u: goto label_27ade4;
        case 0x27ade8u: goto label_27ade8;
        case 0x27adecu: goto label_27adec;
        case 0x27adf0u: goto label_27adf0;
        case 0x27adf4u: goto label_27adf4;
        case 0x27adf8u: goto label_27adf8;
        case 0x27adfcu: goto label_27adfc;
        case 0x27ae00u: goto label_27ae00;
        case 0x27ae04u: goto label_27ae04;
        case 0x27ae08u: goto label_27ae08;
        case 0x27ae0cu: goto label_27ae0c;
        case 0x27ae10u: goto label_27ae10;
        case 0x27ae14u: goto label_27ae14;
        case 0x27ae18u: goto label_27ae18;
        case 0x27ae1cu: goto label_27ae1c;
        case 0x27ae20u: goto label_27ae20;
        case 0x27ae24u: goto label_27ae24;
        case 0x27ae28u: goto label_27ae28;
        case 0x27ae2cu: goto label_27ae2c;
        case 0x27ae30u: goto label_27ae30;
        case 0x27ae34u: goto label_27ae34;
        case 0x27ae38u: goto label_27ae38;
        case 0x27ae3cu: goto label_27ae3c;
        case 0x27ae40u: goto label_27ae40;
        case 0x27ae44u: goto label_27ae44;
        case 0x27ae48u: goto label_27ae48;
        case 0x27ae4cu: goto label_27ae4c;
        case 0x27ae50u: goto label_27ae50;
        case 0x27ae54u: goto label_27ae54;
        case 0x27ae58u: goto label_27ae58;
        case 0x27ae5cu: goto label_27ae5c;
        case 0x27ae60u: goto label_27ae60;
        case 0x27ae64u: goto label_27ae64;
        case 0x27ae68u: goto label_27ae68;
        case 0x27ae6cu: goto label_27ae6c;
        case 0x27ae70u: goto label_27ae70;
        case 0x27ae74u: goto label_27ae74;
        case 0x27ae78u: goto label_27ae78;
        case 0x27ae7cu: goto label_27ae7c;
        case 0x27ae80u: goto label_27ae80;
        case 0x27ae84u: goto label_27ae84;
        case 0x27ae88u: goto label_27ae88;
        case 0x27ae8cu: goto label_27ae8c;
        case 0x27ae90u: goto label_27ae90;
        case 0x27ae94u: goto label_27ae94;
        case 0x27ae98u: goto label_27ae98;
        case 0x27ae9cu: goto label_27ae9c;
        case 0x27aea0u: goto label_27aea0;
        case 0x27aea4u: goto label_27aea4;
        case 0x27aea8u: goto label_27aea8;
        case 0x27aeacu: goto label_27aeac;
        case 0x27aeb0u: goto label_27aeb0;
        case 0x27aeb4u: goto label_27aeb4;
        case 0x27aeb8u: goto label_27aeb8;
        case 0x27aebcu: goto label_27aebc;
        case 0x27aec0u: goto label_27aec0;
        case 0x27aec4u: goto label_27aec4;
        case 0x27aec8u: goto label_27aec8;
        case 0x27aeccu: goto label_27aecc;
        case 0x27aed0u: goto label_27aed0;
        case 0x27aed4u: goto label_27aed4;
        case 0x27aed8u: goto label_27aed8;
        case 0x27aedcu: goto label_27aedc;
        case 0x27aee0u: goto label_27aee0;
        case 0x27aee4u: goto label_27aee4;
        case 0x27aee8u: goto label_27aee8;
        case 0x27aeecu: goto label_27aeec;
        case 0x27aef0u: goto label_27aef0;
        case 0x27aef4u: goto label_27aef4;
        case 0x27aef8u: goto label_27aef8;
        case 0x27aefcu: goto label_27aefc;
        case 0x27af00u: goto label_27af00;
        case 0x27af04u: goto label_27af04;
        case 0x27af08u: goto label_27af08;
        case 0x27af0cu: goto label_27af0c;
        case 0x27af10u: goto label_27af10;
        case 0x27af14u: goto label_27af14;
        case 0x27af18u: goto label_27af18;
        case 0x27af1cu: goto label_27af1c;
        case 0x27af20u: goto label_27af20;
        case 0x27af24u: goto label_27af24;
        case 0x27af28u: goto label_27af28;
        case 0x27af2cu: goto label_27af2c;
        case 0x27af30u: goto label_27af30;
        case 0x27af34u: goto label_27af34;
        case 0x27af38u: goto label_27af38;
        case 0x27af3cu: goto label_27af3c;
        case 0x27af40u: goto label_27af40;
        case 0x27af44u: goto label_27af44;
        case 0x27af48u: goto label_27af48;
        case 0x27af4cu: goto label_27af4c;
        case 0x27af50u: goto label_27af50;
        case 0x27af54u: goto label_27af54;
        case 0x27af58u: goto label_27af58;
        case 0x27af5cu: goto label_27af5c;
        case 0x27af60u: goto label_27af60;
        case 0x27af64u: goto label_27af64;
        case 0x27af68u: goto label_27af68;
        case 0x27af6cu: goto label_27af6c;
        case 0x27af70u: goto label_27af70;
        case 0x27af74u: goto label_27af74;
        case 0x27af78u: goto label_27af78;
        case 0x27af7cu: goto label_27af7c;
        case 0x27af80u: goto label_27af80;
        case 0x27af84u: goto label_27af84;
        case 0x27af88u: goto label_27af88;
        case 0x27af8cu: goto label_27af8c;
        case 0x27af90u: goto label_27af90;
        case 0x27af94u: goto label_27af94;
        case 0x27af98u: goto label_27af98;
        case 0x27af9cu: goto label_27af9c;
        case 0x27afa0u: goto label_27afa0;
        case 0x27afa4u: goto label_27afa4;
        case 0x27afa8u: goto label_27afa8;
        case 0x27afacu: goto label_27afac;
        case 0x27afb0u: goto label_27afb0;
        case 0x27afb4u: goto label_27afb4;
        case 0x27afb8u: goto label_27afb8;
        case 0x27afbcu: goto label_27afbc;
        case 0x27afc0u: goto label_27afc0;
        case 0x27afc4u: goto label_27afc4;
        case 0x27afc8u: goto label_27afc8;
        case 0x27afccu: goto label_27afcc;
        case 0x27afd0u: goto label_27afd0;
        case 0x27afd4u: goto label_27afd4;
        case 0x27afd8u: goto label_27afd8;
        case 0x27afdcu: goto label_27afdc;
        case 0x27afe0u: goto label_27afe0;
        case 0x27afe4u: goto label_27afe4;
        case 0x27afe8u: goto label_27afe8;
        case 0x27afecu: goto label_27afec;
        case 0x27aff0u: goto label_27aff0;
        case 0x27aff4u: goto label_27aff4;
        case 0x27aff8u: goto label_27aff8;
        case 0x27affcu: goto label_27affc;
        case 0x27b000u: goto label_27b000;
        case 0x27b004u: goto label_27b004;
        case 0x27b008u: goto label_27b008;
        case 0x27b00cu: goto label_27b00c;
        case 0x27b010u: goto label_27b010;
        case 0x27b014u: goto label_27b014;
        case 0x27b018u: goto label_27b018;
        case 0x27b01cu: goto label_27b01c;
        case 0x27b020u: goto label_27b020;
        case 0x27b024u: goto label_27b024;
        case 0x27b028u: goto label_27b028;
        case 0x27b02cu: goto label_27b02c;
        case 0x27b030u: goto label_27b030;
        case 0x27b034u: goto label_27b034;
        case 0x27b038u: goto label_27b038;
        case 0x27b03cu: goto label_27b03c;
        case 0x27b040u: goto label_27b040;
        case 0x27b044u: goto label_27b044;
        case 0x27b048u: goto label_27b048;
        case 0x27b04cu: goto label_27b04c;
        case 0x27b050u: goto label_27b050;
        case 0x27b054u: goto label_27b054;
        case 0x27b058u: goto label_27b058;
        case 0x27b05cu: goto label_27b05c;
        case 0x27b060u: goto label_27b060;
        case 0x27b064u: goto label_27b064;
        case 0x27b068u: goto label_27b068;
        case 0x27b06cu: goto label_27b06c;
        case 0x27b070u: goto label_27b070;
        case 0x27b074u: goto label_27b074;
        case 0x27b078u: goto label_27b078;
        case 0x27b07cu: goto label_27b07c;
        case 0x27b080u: goto label_27b080;
        case 0x27b084u: goto label_27b084;
        case 0x27b088u: goto label_27b088;
        case 0x27b08cu: goto label_27b08c;
        case 0x27b090u: goto label_27b090;
        case 0x27b094u: goto label_27b094;
        case 0x27b098u: goto label_27b098;
        case 0x27b09cu: goto label_27b09c;
        case 0x27b0a0u: goto label_27b0a0;
        case 0x27b0a4u: goto label_27b0a4;
        case 0x27b0a8u: goto label_27b0a8;
        case 0x27b0acu: goto label_27b0ac;
        case 0x27b0b0u: goto label_27b0b0;
        case 0x27b0b4u: goto label_27b0b4;
        case 0x27b0b8u: goto label_27b0b8;
        case 0x27b0bcu: goto label_27b0bc;
        case 0x27b0c0u: goto label_27b0c0;
        case 0x27b0c4u: goto label_27b0c4;
        case 0x27b0c8u: goto label_27b0c8;
        case 0x27b0ccu: goto label_27b0cc;
        case 0x27b0d0u: goto label_27b0d0;
        case 0x27b0d4u: goto label_27b0d4;
        case 0x27b0d8u: goto label_27b0d8;
        case 0x27b0dcu: goto label_27b0dc;
        case 0x27b0e0u: goto label_27b0e0;
        case 0x27b0e4u: goto label_27b0e4;
        case 0x27b0e8u: goto label_27b0e8;
        case 0x27b0ecu: goto label_27b0ec;
        case 0x27b0f0u: goto label_27b0f0;
        case 0x27b0f4u: goto label_27b0f4;
        case 0x27b0f8u: goto label_27b0f8;
        case 0x27b0fcu: goto label_27b0fc;
        case 0x27b100u: goto label_27b100;
        case 0x27b104u: goto label_27b104;
        case 0x27b108u: goto label_27b108;
        case 0x27b10cu: goto label_27b10c;
        case 0x27b110u: goto label_27b110;
        case 0x27b114u: goto label_27b114;
        case 0x27b118u: goto label_27b118;
        case 0x27b11cu: goto label_27b11c;
        default: break;
    }

    ctx->pc = 0x27ac50u;

label_27ac50:
    // 0x27ac50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_27ac54:
    // 0x27ac54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_27ac58:
    // 0x27ac58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27ac5c:
    // 0x27ac5c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x27ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_27ac60:
    // 0x27ac60: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x27ac60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_27ac64:
    // 0x27ac64: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x27ac64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27ac68:
    // 0x27ac68: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x27ac68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_27ac6c:
    // 0x27ac6c: 0xc0400e0  jal         func_100380
label_27ac70:
    if (ctx->pc == 0x27AC70u) {
        ctx->pc = 0x27AC74u;
        goto label_27ac74;
    }
    ctx->pc = 0x27AC6Cu;
    SET_GPR_U32(ctx, 31, 0x27AC74u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x27AC6Cu, 0x27AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC74u;
label_27ac74:
    // 0x27ac74: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x27ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_27ac78:
    // 0x27ac78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_27ac7c:
    if (ctx->pc == 0x27AC7Cu) {
        ctx->pc = 0x27AC80u;
        goto label_27ac80;
    }
    ctx->pc = 0x27AC78u;
    {
        const bool branch_taken_0x27ac78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ac78) {
            ctx->pc = 0x27AC90u;
            goto label_27ac90;
        }
    }
    ctx->pc = 0x27AC80u;
label_27ac80:
    // 0x27ac80: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x27ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27ac84:
    // 0x27ac84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27ac84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27ac88:
    // 0x27ac88: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x27ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_27ac8c:
    // 0x27ac8c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x27ac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_27ac90:
    // 0x27ac90: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x27ac90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_27ac94:
    // 0x27ac94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27ac94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27ac98:
    // 0x27ac98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ac98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27ac9c:
    // 0x27ac9c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27ac9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27aca0:
    // 0x27aca0: 0x3e00008  jr          $ra
label_27aca4:
    if (ctx->pc == 0x27ACA4u) {
        ctx->pc = 0x27ACA8u;
        goto label_27aca8;
    }
    ctx->pc = 0x27ACA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ACA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27ACA8u;
label_27aca8:
    // 0x27aca8: 0x0  nop
    ctx->pc = 0x27aca8u;
    // NOP
label_27acac:
    // 0x27acac: 0x0  nop
    ctx->pc = 0x27acacu;
    // NOP
label_27acb0:
    // 0x27acb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27acb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_27acb4:
    // 0x27acb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_27acb8:
    // 0x27acb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27acb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27acbc:
    // 0x27acbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27acbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27acc0:
    // 0x27acc0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x27acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_27acc4:
    // 0x27acc4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x27acc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_27acc8:
    // 0x27acc8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27acc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27accc:
    // 0x27accc: 0xc084efc  jal         func_213BF0
label_27acd0:
    if (ctx->pc == 0x27ACD0u) {
        ctx->pc = 0x27ACD4u;
        goto label_27acd4;
    }
    ctx->pc = 0x27ACCCu;
    SET_GPR_U32(ctx, 31, 0x27ACD4u);
    ctx->pc = 0x213BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213BF0u, 0x27ACCCu, 0x27ACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACD4u;
label_27acd4:
    // 0x27acd4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x27acd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27acd8:
    // 0x27acd8: 0x104300f5  beq         $v0, $v1, . + 4 + (0xF5 << 2)
label_27acdc:
    if (ctx->pc == 0x27ACDCu) {
        ctx->pc = 0x27ACE0u;
        goto label_27ace0;
    }
    ctx->pc = 0x27ACD8u;
    {
        const bool branch_taken_0x27acd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27acd8) {
            ctx->pc = 0x27B0B0u;
            goto label_27b0b0;
        }
    }
    ctx->pc = 0x27ACE0u;
label_27ace0:
    // 0x27ace0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x27ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_27ace4:
    // 0x27ace4: 0x104300e0  beq         $v0, $v1, . + 4 + (0xE0 << 2)
label_27ace8:
    if (ctx->pc == 0x27ACE8u) {
        ctx->pc = 0x27ACECu;
        goto label_27acec;
    }
    ctx->pc = 0x27ACE4u;
    {
        const bool branch_taken_0x27ace4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27ace4) {
            ctx->pc = 0x27B068u;
            goto label_27b068;
        }
    }
    ctx->pc = 0x27ACECu;
label_27acec:
    // 0x27acec: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x27acecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_27acf0:
    // 0x27acf0: 0x104300cb  beq         $v0, $v1, . + 4 + (0xCB << 2)
label_27acf4:
    if (ctx->pc == 0x27ACF4u) {
        ctx->pc = 0x27ACF8u;
        goto label_27acf8;
    }
    ctx->pc = 0x27ACF0u;
    {
        const bool branch_taken_0x27acf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27acf0) {
            ctx->pc = 0x27B020u;
            goto label_27b020;
        }
    }
    ctx->pc = 0x27ACF8u;
label_27acf8:
    // 0x27acf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27acfc:
    // 0x27acfc: 0x104300b6  beq         $v0, $v1, . + 4 + (0xB6 << 2)
label_27ad00:
    if (ctx->pc == 0x27AD00u) {
        ctx->pc = 0x27AD04u;
        goto label_27ad04;
    }
    ctx->pc = 0x27ACFCu;
    {
        const bool branch_taken_0x27acfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27acfc) {
            ctx->pc = 0x27AFD8u;
            goto label_27afd8;
        }
    }
    ctx->pc = 0x27AD04u;
label_27ad04:
    // 0x27ad04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ad08:
    // 0x27ad08: 0x104300b3  beq         $v0, $v1, . + 4 + (0xB3 << 2)
label_27ad0c:
    if (ctx->pc == 0x27AD0Cu) {
        ctx->pc = 0x27AD10u;
        goto label_27ad10;
    }
    ctx->pc = 0x27AD08u;
    {
        const bool branch_taken_0x27ad08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27ad08) {
            ctx->pc = 0x27AFD8u;
            goto label_27afd8;
        }
    }
    ctx->pc = 0x27AD10u;
label_27ad10:
    // 0x27ad10: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x27ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_27ad14:
    // 0x27ad14: 0x1043009e  beq         $v0, $v1, . + 4 + (0x9E << 2)
label_27ad18:
    if (ctx->pc == 0x27AD18u) {
        ctx->pc = 0x27AD1Cu;
        goto label_27ad1c;
    }
    ctx->pc = 0x27AD14u;
    {
        const bool branch_taken_0x27ad14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27ad14) {
            ctx->pc = 0x27AF90u;
            goto label_27af90;
        }
    }
    ctx->pc = 0x27AD1Cu;
label_27ad1c:
    // 0x27ad1c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27ad20:
    // 0x27ad20: 0x10430089  beq         $v0, $v1, . + 4 + (0x89 << 2)
label_27ad24:
    if (ctx->pc == 0x27AD24u) {
        ctx->pc = 0x27AD28u;
        goto label_27ad28;
    }
    ctx->pc = 0x27AD20u;
    {
        const bool branch_taken_0x27ad20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27ad20) {
            ctx->pc = 0x27AF48u;
            goto label_27af48;
        }
    }
    ctx->pc = 0x27AD28u;
label_27ad28:
    // 0x27ad28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27ad2c:
    // 0x27ad2c: 0x1043005b  beq         $v0, $v1, . + 4 + (0x5B << 2)
label_27ad30:
    if (ctx->pc == 0x27AD30u) {
        ctx->pc = 0x27AD34u;
        goto label_27ad34;
    }
    ctx->pc = 0x27AD2Cu;
    {
        const bool branch_taken_0x27ad2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27ad2c) {
            ctx->pc = 0x27AE9Cu;
            goto label_27ae9c;
        }
    }
    ctx->pc = 0x27AD34u;
label_27ad34:
    // 0x27ad34: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x27ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_27ad38:
    // 0x27ad38: 0x1043002d  beq         $v0, $v1, . + 4 + (0x2D << 2)
label_27ad3c:
    if (ctx->pc == 0x27AD3Cu) {
        ctx->pc = 0x27AD40u;
        goto label_27ad40;
    }
    ctx->pc = 0x27AD38u;
    {
        const bool branch_taken_0x27ad38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27ad38) {
            ctx->pc = 0x27ADF0u;
            goto label_27adf0;
        }
    }
    ctx->pc = 0x27AD40u;
label_27ad40:
    // 0x27ad40: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27ad44:
    // 0x27ad44: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
label_27ad48:
    if (ctx->pc == 0x27AD48u) {
        ctx->pc = 0x27AD4Cu;
        goto label_27ad4c;
    }
    ctx->pc = 0x27AD44u;
    {
        const bool branch_taken_0x27ad44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27ad44) {
            ctx->pc = 0x27ADA8u;
            goto label_27ada8;
        }
    }
    ctx->pc = 0x27AD4Cu;
label_27ad4c:
    // 0x27ad4c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27ad50:
    // 0x27ad50: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_27ad54:
    if (ctx->pc == 0x27AD54u) {
        ctx->pc = 0x27AD58u;
        goto label_27ad58;
    }
    ctx->pc = 0x27AD50u;
    {
        const bool branch_taken_0x27ad50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27ad50) {
            ctx->pc = 0x27AD60u;
            goto label_27ad60;
        }
    }
    ctx->pc = 0x27AD58u;
label_27ad58:
    // 0x27ad58: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_27ad5c:
    if (ctx->pc == 0x27AD5Cu) {
        ctx->pc = 0x27AD60u;
        goto label_27ad60;
    }
    ctx->pc = 0x27AD58u;
    {
        const bool branch_taken_0x27ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ad58) {
            ctx->pc = 0x27B0F8u;
            goto label_27b0f8;
        }
    }
    ctx->pc = 0x27AD60u;
label_27ad60:
    // 0x27ad60: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27ad60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27ad64:
    // 0x27ad64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27ad64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27ad68:
    // 0x27ad68: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x27ad68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_27ad6c:
    // 0x27ad6c: 0x320f809  jalr        $t9
label_27ad70:
    if (ctx->pc == 0x27AD70u) {
        ctx->pc = 0x27AD74u;
        goto label_27ad74;
    }
    ctx->pc = 0x27AD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27AD74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AD6Cu, 0x27AD74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27AD74u;
label_27ad74:
    // 0x27ad74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27ad78:
    // 0x27ad78: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27ad7c:
    if (ctx->pc == 0x27AD7Cu) {
        ctx->pc = 0x27AD80u;
        goto label_27ad80;
    }
    ctx->pc = 0x27AD78u;
    {
        const bool branch_taken_0x27ad78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ad78) {
            ctx->pc = 0x27AD9Cu;
            goto label_27ad9c;
        }
    }
    ctx->pc = 0x27AD80u;
label_27ad80:
    // 0x27ad80: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27ad80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27ad84:
    // 0x27ad84: 0xc090500  jal         func_241400
label_27ad88:
    if (ctx->pc == 0x27AD88u) {
        ctx->pc = 0x27AD8Cu;
        goto label_27ad8c;
    }
    ctx->pc = 0x27AD84u;
    SET_GPR_U32(ctx, 31, 0x27AD8Cu);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x27AD84u, 0x27AD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD8Cu;
label_27ad8c:
    // 0x27ad8c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27ad90:
    // 0x27ad90: 0xc119c5c  jal         func_467170
label_27ad94:
    if (ctx->pc == 0x27AD94u) {
        ctx->pc = 0x27AD98u;
        goto label_27ad98;
    }
    ctx->pc = 0x27AD90u;
    SET_GPR_U32(ctx, 31, 0x27AD98u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x27AD90u, 0x27AD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD98u;
label_27ad98:
    // 0x27ad98: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_27ad9c:
    // 0x27ad9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ada0:
    // 0x27ada0: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_27ada4:
    if (ctx->pc == 0x27ADA4u) {
        ctx->pc = 0x27ADA8u;
        goto label_27ada8;
    }
    ctx->pc = 0x27ADA0u;
    {
        const bool branch_taken_0x27ada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ada0) {
            ctx->pc = 0x27B0FCu;
            goto label_27b0fc;
        }
    }
    ctx->pc = 0x27ADA8u;
label_27ada8:
    // 0x27ada8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27adac:
    // 0x27adac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27adacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27adb0:
    // 0x27adb0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x27adb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_27adb4:
    // 0x27adb4: 0x320f809  jalr        $t9
label_27adb8:
    if (ctx->pc == 0x27ADB8u) {
        ctx->pc = 0x27ADBCu;
        goto label_27adbc;
    }
    ctx->pc = 0x27ADB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27ADBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ADB4u, 0x27ADBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27ADBCu;
label_27adbc:
    // 0x27adbc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27adc0:
    // 0x27adc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27adc4:
    if (ctx->pc == 0x27ADC4u) {
        ctx->pc = 0x27ADC8u;
        goto label_27adc8;
    }
    ctx->pc = 0x27ADC0u;
    {
        const bool branch_taken_0x27adc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27adc0) {
            ctx->pc = 0x27ADE4u;
            goto label_27ade4;
        }
    }
    ctx->pc = 0x27ADC8u;
label_27adc8:
    // 0x27adc8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27adcc:
    // 0x27adcc: 0xc090500  jal         func_241400
label_27add0:
    if (ctx->pc == 0x27ADD0u) {
        ctx->pc = 0x27ADD4u;
        goto label_27add4;
    }
    ctx->pc = 0x27ADCCu;
    SET_GPR_U32(ctx, 31, 0x27ADD4u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x27ADCCu, 0x27ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADD4u;
label_27add4:
    // 0x27add4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27add4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27add8:
    // 0x27add8: 0xc119c5c  jal         func_467170
label_27addc:
    if (ctx->pc == 0x27ADDCu) {
        ctx->pc = 0x27ADE0u;
        goto label_27ade0;
    }
    ctx->pc = 0x27ADD8u;
    SET_GPR_U32(ctx, 31, 0x27ADE0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x27ADD8u, 0x27ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADE0u;
label_27ade0:
    // 0x27ade0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27ade0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_27ade4:
    // 0x27ade4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ade8:
    // 0x27ade8: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_27adec:
    if (ctx->pc == 0x27ADECu) {
        ctx->pc = 0x27ADF0u;
        goto label_27adf0;
    }
    ctx->pc = 0x27ADE8u;
    {
        const bool branch_taken_0x27ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ade8) {
            ctx->pc = 0x27B0FCu;
            goto label_27b0fc;
        }
    }
    ctx->pc = 0x27ADF0u;
label_27adf0:
    // 0x27adf0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_27adf4:
    // 0x27adf4: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x27adf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_27adf8:
    // 0x27adf8: 0xc09e7d0  jal         func_279F40
label_27adfc:
    if (ctx->pc == 0x27ADFCu) {
        ctx->pc = 0x27AE00u;
        goto label_27ae00;
    }
    ctx->pc = 0x27ADF8u;
    SET_GPR_U32(ctx, 31, 0x27AE00u);
    ctx->pc = 0x279F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279F40u, 0x27ADF8u, 0x27AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE00u;
label_27ae00:
    // 0x27ae00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27ae00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ae04:
    // 0x27ae04: 0x1000000d  b           . + 4 + (0xD << 2)
label_27ae08:
    if (ctx->pc == 0x27AE08u) {
        ctx->pc = 0x27AE0Cu;
        goto label_27ae0c;
    }
    ctx->pc = 0x27AE04u;
    {
        const bool branch_taken_0x27ae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ae04) {
            ctx->pc = 0x27AE3Cu;
            goto label_27ae3c;
        }
    }
    ctx->pc = 0x27AE0Cu;
label_27ae0c:
    // 0x27ae0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27ae10:
    // 0x27ae10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27ae14:
    // 0x27ae14: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_27ae18:
    if (ctx->pc == 0x27AE18u) {
        ctx->pc = 0x27AE1Cu;
        goto label_27ae1c;
    }
    ctx->pc = 0x27AE14u;
    {
        const bool branch_taken_0x27ae14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ae14) {
            ctx->pc = 0x27AE38u;
            goto label_27ae38;
        }
    }
    ctx->pc = 0x27AE1Cu;
label_27ae1c:
    // 0x27ae1c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_27ae20:
    // 0x27ae20: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x27ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_27ae24:
    // 0x27ae24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ae24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27ae28:
    // 0x27ae28: 0xc09ec74  jal         func_27B1D0
label_27ae2c:
    if (ctx->pc == 0x27AE2Cu) {
        ctx->pc = 0x27AE30u;
        goto label_27ae30;
    }
    ctx->pc = 0x27AE28u;
    SET_GPR_U32(ctx, 31, 0x27AE30u);
    ctx->pc = 0x27B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B1D0u, 0x27AE28u, 0x27AE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE30u;
label_27ae30:
    // 0x27ae30: 0x10000008  b           . + 4 + (0x8 << 2)
label_27ae34:
    if (ctx->pc == 0x27AE34u) {
        ctx->pc = 0x27AE38u;
        goto label_27ae38;
    }
    ctx->pc = 0x27AE30u;
    {
        const bool branch_taken_0x27ae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ae30) {
            ctx->pc = 0x27AE54u;
            goto label_27ae54;
        }
    }
    ctx->pc = 0x27AE38u;
label_27ae38:
    // 0x27ae38: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x27ae38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_27ae3c:
    // 0x27ae3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_27ae40:
    // 0x27ae40: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x27ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_27ae44:
    // 0x27ae44: 0xc09e7c8  jal         func_279F20
label_27ae48:
    if (ctx->pc == 0x27AE48u) {
        ctx->pc = 0x27AE4Cu;
        goto label_27ae4c;
    }
    ctx->pc = 0x27AE44u;
    SET_GPR_U32(ctx, 31, 0x27AE4Cu);
    ctx->pc = 0x279F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279F20u, 0x27AE44u, 0x27AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE4Cu;
label_27ae4c:
    // 0x27ae4c: 0x1622ffef  bne         $s1, $v0, . + 4 + (-0x11 << 2)
label_27ae50:
    if (ctx->pc == 0x27AE50u) {
        ctx->pc = 0x27AE54u;
        goto label_27ae54;
    }
    ctx->pc = 0x27AE4Cu;
    {
        const bool branch_taken_0x27ae4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ae4c) {
            ctx->pc = 0x27AE0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ae0c;
        }
    }
    ctx->pc = 0x27AE54u;
label_27ae54:
    // 0x27ae54: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27ae58:
    // 0x27ae58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27ae58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27ae5c:
    // 0x27ae5c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x27ae5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_27ae60:
    // 0x27ae60: 0x320f809  jalr        $t9
label_27ae64:
    if (ctx->pc == 0x27AE64u) {
        ctx->pc = 0x27AE68u;
        goto label_27ae68;
    }
    ctx->pc = 0x27AE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27AE68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AE60u, 0x27AE68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27AE68u;
label_27ae68:
    // 0x27ae68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27ae6c:
    // 0x27ae6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27ae70:
    if (ctx->pc == 0x27AE70u) {
        ctx->pc = 0x27AE74u;
        goto label_27ae74;
    }
    ctx->pc = 0x27AE6Cu;
    {
        const bool branch_taken_0x27ae6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ae6c) {
            ctx->pc = 0x27AE90u;
            goto label_27ae90;
        }
    }
    ctx->pc = 0x27AE74u;
label_27ae74:
    // 0x27ae74: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27ae78:
    // 0x27ae78: 0xc090500  jal         func_241400
label_27ae7c:
    if (ctx->pc == 0x27AE7Cu) {
        ctx->pc = 0x27AE80u;
        goto label_27ae80;
    }
    ctx->pc = 0x27AE78u;
    SET_GPR_U32(ctx, 31, 0x27AE80u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x27AE78u, 0x27AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE80u;
label_27ae80:
    // 0x27ae80: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27ae84:
    // 0x27ae84: 0xc119c5c  jal         func_467170
label_27ae88:
    if (ctx->pc == 0x27AE88u) {
        ctx->pc = 0x27AE8Cu;
        goto label_27ae8c;
    }
    ctx->pc = 0x27AE84u;
    SET_GPR_U32(ctx, 31, 0x27AE8Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x27AE84u, 0x27AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE8Cu;
label_27ae8c:
    // 0x27ae8c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27ae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_27ae90:
    // 0x27ae90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ae94:
    // 0x27ae94: 0x10000099  b           . + 4 + (0x99 << 2)
label_27ae98:
    if (ctx->pc == 0x27AE98u) {
        ctx->pc = 0x27AE9Cu;
        goto label_27ae9c;
    }
    ctx->pc = 0x27AE94u;
    {
        const bool branch_taken_0x27ae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ae94) {
            ctx->pc = 0x27B0FCu;
            goto label_27b0fc;
        }
    }
    ctx->pc = 0x27AE9Cu;
label_27ae9c:
    // 0x27ae9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_27aea0:
    // 0x27aea0: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x27aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_27aea4:
    // 0x27aea4: 0xc09e77c  jal         func_279DF0
label_27aea8:
    if (ctx->pc == 0x27AEA8u) {
        ctx->pc = 0x27AEACu;
        goto label_27aeac;
    }
    ctx->pc = 0x27AEA4u;
    SET_GPR_U32(ctx, 31, 0x27AEACu);
    ctx->pc = 0x279DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279DF0u, 0x27AEA4u, 0x27AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEACu;
label_27aeac:
    // 0x27aeac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27aeacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27aeb0:
    // 0x27aeb0: 0x1000000d  b           . + 4 + (0xD << 2)
label_27aeb4:
    if (ctx->pc == 0x27AEB4u) {
        ctx->pc = 0x27AEB8u;
        goto label_27aeb8;
    }
    ctx->pc = 0x27AEB0u;
    {
        const bool branch_taken_0x27aeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27aeb0) {
            ctx->pc = 0x27AEE8u;
            goto label_27aee8;
        }
    }
    ctx->pc = 0x27AEB8u;
label_27aeb8:
    // 0x27aeb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27aebc:
    // 0x27aebc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27aec0:
    // 0x27aec0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_27aec4:
    if (ctx->pc == 0x27AEC4u) {
        ctx->pc = 0x27AEC8u;
        goto label_27aec8;
    }
    ctx->pc = 0x27AEC0u;
    {
        const bool branch_taken_0x27aec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27aec0) {
            ctx->pc = 0x27AEE4u;
            goto label_27aee4;
        }
    }
    ctx->pc = 0x27AEC8u;
label_27aec8:
    // 0x27aec8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_27aecc:
    // 0x27aecc: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x27aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_27aed0:
    // 0x27aed0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27aed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27aed4:
    // 0x27aed4: 0xc09ec48  jal         func_27B120
label_27aed8:
    if (ctx->pc == 0x27AED8u) {
        ctx->pc = 0x27AEDCu;
        goto label_27aedc;
    }
    ctx->pc = 0x27AED4u;
    SET_GPR_U32(ctx, 31, 0x27AEDCu);
    ctx->pc = 0x27B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B120u, 0x27AED4u, 0x27AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEDCu;
label_27aedc:
    // 0x27aedc: 0x10000008  b           . + 4 + (0x8 << 2)
label_27aee0:
    if (ctx->pc == 0x27AEE0u) {
        ctx->pc = 0x27AEE4u;
        goto label_27aee4;
    }
    ctx->pc = 0x27AEDCu;
    {
        const bool branch_taken_0x27aedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27aedc) {
            ctx->pc = 0x27AF00u;
            goto label_27af00;
        }
    }
    ctx->pc = 0x27AEE4u;
label_27aee4:
    // 0x27aee4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x27aee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_27aee8:
    // 0x27aee8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_27aeec:
    // 0x27aeec: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x27aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_27aef0:
    // 0x27aef0: 0xc09e774  jal         func_279DD0
label_27aef4:
    if (ctx->pc == 0x27AEF4u) {
        ctx->pc = 0x27AEF8u;
        goto label_27aef8;
    }
    ctx->pc = 0x27AEF0u;
    SET_GPR_U32(ctx, 31, 0x27AEF8u);
    ctx->pc = 0x279DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279DD0u, 0x27AEF0u, 0x27AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEF8u;
label_27aef8:
    // 0x27aef8: 0x1602ffef  bne         $s0, $v0, . + 4 + (-0x11 << 2)
label_27aefc:
    if (ctx->pc == 0x27AEFCu) {
        ctx->pc = 0x27AF00u;
        goto label_27af00;
    }
    ctx->pc = 0x27AEF8u;
    {
        const bool branch_taken_0x27aef8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x27aef8) {
            ctx->pc = 0x27AEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27aeb8;
        }
    }
    ctx->pc = 0x27AF00u;
label_27af00:
    // 0x27af00: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27af00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27af04:
    // 0x27af04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27af04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27af08:
    // 0x27af08: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x27af08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_27af0c:
    // 0x27af0c: 0x320f809  jalr        $t9
label_27af10:
    if (ctx->pc == 0x27AF10u) {
        ctx->pc = 0x27AF14u;
        goto label_27af14;
    }
    ctx->pc = 0x27AF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27AF14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AF0Cu, 0x27AF14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27AF14u;
label_27af14:
    // 0x27af14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27af18:
    // 0x27af18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27af1c:
    if (ctx->pc == 0x27AF1Cu) {
        ctx->pc = 0x27AF20u;
        goto label_27af20;
    }
    ctx->pc = 0x27AF18u;
    {
        const bool branch_taken_0x27af18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27af18) {
            ctx->pc = 0x27AF3Cu;
            goto label_27af3c;
        }
    }
    ctx->pc = 0x27AF20u;
label_27af20:
    // 0x27af20: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27af20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27af24:
    // 0x27af24: 0xc090500  jal         func_241400
label_27af28:
    if (ctx->pc == 0x27AF28u) {
        ctx->pc = 0x27AF2Cu;
        goto label_27af2c;
    }
    ctx->pc = 0x27AF24u;
    SET_GPR_U32(ctx, 31, 0x27AF2Cu);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x27AF24u, 0x27AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF2Cu;
label_27af2c:
    // 0x27af2c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27af30:
    // 0x27af30: 0xc119c5c  jal         func_467170
label_27af34:
    if (ctx->pc == 0x27AF34u) {
        ctx->pc = 0x27AF38u;
        goto label_27af38;
    }
    ctx->pc = 0x27AF30u;
    SET_GPR_U32(ctx, 31, 0x27AF38u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x27AF30u, 0x27AF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF38u;
label_27af38:
    // 0x27af38: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27af38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_27af3c:
    // 0x27af3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27af40:
    // 0x27af40: 0x1000006e  b           . + 4 + (0x6E << 2)
label_27af44:
    if (ctx->pc == 0x27AF44u) {
        ctx->pc = 0x27AF48u;
        goto label_27af48;
    }
    ctx->pc = 0x27AF40u;
    {
        const bool branch_taken_0x27af40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27af40) {
            ctx->pc = 0x27B0FCu;
            goto label_27b0fc;
        }
    }
    ctx->pc = 0x27AF48u;
label_27af48:
    // 0x27af48: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27af48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27af4c:
    // 0x27af4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27af4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27af50:
    // 0x27af50: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x27af50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_27af54:
    // 0x27af54: 0x320f809  jalr        $t9
label_27af58:
    if (ctx->pc == 0x27AF58u) {
        ctx->pc = 0x27AF5Cu;
        goto label_27af5c;
    }
    ctx->pc = 0x27AF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27AF5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AF54u, 0x27AF5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27AF5Cu;
label_27af5c:
    // 0x27af5c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27af60:
    // 0x27af60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27af64:
    if (ctx->pc == 0x27AF64u) {
        ctx->pc = 0x27AF68u;
        goto label_27af68;
    }
    ctx->pc = 0x27AF60u;
    {
        const bool branch_taken_0x27af60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27af60) {
            ctx->pc = 0x27AF84u;
            goto label_27af84;
        }
    }
    ctx->pc = 0x27AF68u;
label_27af68:
    // 0x27af68: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27af68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27af6c:
    // 0x27af6c: 0xc090500  jal         func_241400
label_27af70:
    if (ctx->pc == 0x27AF70u) {
        ctx->pc = 0x27AF74u;
        goto label_27af74;
    }
    ctx->pc = 0x27AF6Cu;
    SET_GPR_U32(ctx, 31, 0x27AF74u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x27AF6Cu, 0x27AF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF74u;
label_27af74:
    // 0x27af74: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27af74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27af78:
    // 0x27af78: 0xc119c5c  jal         func_467170
label_27af7c:
    if (ctx->pc == 0x27AF7Cu) {
        ctx->pc = 0x27AF80u;
        goto label_27af80;
    }
    ctx->pc = 0x27AF78u;
    SET_GPR_U32(ctx, 31, 0x27AF80u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x27AF78u, 0x27AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF80u;
label_27af80:
    // 0x27af80: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27af80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_27af84:
    // 0x27af84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27af84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27af88:
    // 0x27af88: 0x1000005c  b           . + 4 + (0x5C << 2)
label_27af8c:
    if (ctx->pc == 0x27AF8Cu) {
        ctx->pc = 0x27AF90u;
        goto label_27af90;
    }
    ctx->pc = 0x27AF88u;
    {
        const bool branch_taken_0x27af88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27af88) {
            ctx->pc = 0x27B0FCu;
            goto label_27b0fc;
        }
    }
    ctx->pc = 0x27AF90u;
label_27af90:
    // 0x27af90: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27af90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27af94:
    // 0x27af94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27af94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27af98:
    // 0x27af98: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x27af98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_27af9c:
    // 0x27af9c: 0x320f809  jalr        $t9
label_27afa0:
    if (ctx->pc == 0x27AFA0u) {
        ctx->pc = 0x27AFA4u;
        goto label_27afa4;
    }
    ctx->pc = 0x27AF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27AFA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AF9Cu, 0x27AFA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27AFA4u;
label_27afa4:
    // 0x27afa4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27afa8:
    // 0x27afa8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27afac:
    if (ctx->pc == 0x27AFACu) {
        ctx->pc = 0x27AFB0u;
        goto label_27afb0;
    }
    ctx->pc = 0x27AFA8u;
    {
        const bool branch_taken_0x27afa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27afa8) {
            ctx->pc = 0x27AFCCu;
            goto label_27afcc;
        }
    }
    ctx->pc = 0x27AFB0u;
label_27afb0:
    // 0x27afb0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27afb4:
    // 0x27afb4: 0xc090500  jal         func_241400
label_27afb8:
    if (ctx->pc == 0x27AFB8u) {
        ctx->pc = 0x27AFBCu;
        goto label_27afbc;
    }
    ctx->pc = 0x27AFB4u;
    SET_GPR_U32(ctx, 31, 0x27AFBCu);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x27AFB4u, 0x27AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFBCu;
label_27afbc:
    // 0x27afbc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27afc0:
    // 0x27afc0: 0xc119c5c  jal         func_467170
label_27afc4:
    if (ctx->pc == 0x27AFC4u) {
        ctx->pc = 0x27AFC8u;
        goto label_27afc8;
    }
    ctx->pc = 0x27AFC0u;
    SET_GPR_U32(ctx, 31, 0x27AFC8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x27AFC0u, 0x27AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFC8u;
label_27afc8:
    // 0x27afc8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_27afcc:
    // 0x27afcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27afccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27afd0:
    // 0x27afd0: 0x1000004a  b           . + 4 + (0x4A << 2)
label_27afd4:
    if (ctx->pc == 0x27AFD4u) {
        ctx->pc = 0x27AFD8u;
        goto label_27afd8;
    }
    ctx->pc = 0x27AFD0u;
    {
        const bool branch_taken_0x27afd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27afd0) {
            ctx->pc = 0x27B0FCu;
            goto label_27b0fc;
        }
    }
    ctx->pc = 0x27AFD8u;
label_27afd8:
    // 0x27afd8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27afdc:
    // 0x27afdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27afdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27afe0:
    // 0x27afe0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x27afe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_27afe4:
    // 0x27afe4: 0x320f809  jalr        $t9
label_27afe8:
    if (ctx->pc == 0x27AFE8u) {
        ctx->pc = 0x27AFECu;
        goto label_27afec;
    }
    ctx->pc = 0x27AFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27AFECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AFE4u, 0x27AFECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27AFECu;
label_27afec:
    // 0x27afec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27aff0:
    // 0x27aff0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27aff4:
    if (ctx->pc == 0x27AFF4u) {
        ctx->pc = 0x27AFF8u;
        goto label_27aff8;
    }
    ctx->pc = 0x27AFF0u;
    {
        const bool branch_taken_0x27aff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27aff0) {
            ctx->pc = 0x27B014u;
            goto label_27b014;
        }
    }
    ctx->pc = 0x27AFF8u;
label_27aff8:
    // 0x27aff8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27aff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27affc:
    // 0x27affc: 0xc090500  jal         func_241400
label_27b000:
    if (ctx->pc == 0x27B000u) {
        ctx->pc = 0x27B004u;
        goto label_27b004;
    }
    ctx->pc = 0x27AFFCu;
    SET_GPR_U32(ctx, 31, 0x27B004u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x27AFFCu, 0x27B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B004u;
label_27b004:
    // 0x27b004: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27b004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27b008:
    // 0x27b008: 0xc119c5c  jal         func_467170
label_27b00c:
    if (ctx->pc == 0x27B00Cu) {
        ctx->pc = 0x27B010u;
        goto label_27b010;
    }
    ctx->pc = 0x27B008u;
    SET_GPR_U32(ctx, 31, 0x27B010u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x27B008u, 0x27B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B010u;
label_27b010:
    // 0x27b010: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27b010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_27b014:
    // 0x27b014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b018:
    // 0x27b018: 0x10000038  b           . + 4 + (0x38 << 2)
label_27b01c:
    if (ctx->pc == 0x27B01Cu) {
        ctx->pc = 0x27B020u;
        goto label_27b020;
    }
    ctx->pc = 0x27B018u;
    {
        const bool branch_taken_0x27b018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b018) {
            ctx->pc = 0x27B0FCu;
            goto label_27b0fc;
        }
    }
    ctx->pc = 0x27B020u;
label_27b020:
    // 0x27b020: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27b020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27b024:
    // 0x27b024: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27b024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27b028:
    // 0x27b028: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x27b028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_27b02c:
    // 0x27b02c: 0x320f809  jalr        $t9
label_27b030:
    if (ctx->pc == 0x27B030u) {
        ctx->pc = 0x27B034u;
        goto label_27b034;
    }
    ctx->pc = 0x27B02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27B034u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B02Cu, 0x27B034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27B034u;
label_27b034:
    // 0x27b034: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27b038:
    // 0x27b038: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27b03c:
    if (ctx->pc == 0x27B03Cu) {
        ctx->pc = 0x27B040u;
        goto label_27b040;
    }
    ctx->pc = 0x27B038u;
    {
        const bool branch_taken_0x27b038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b038) {
            ctx->pc = 0x27B05Cu;
            goto label_27b05c;
        }
    }
    ctx->pc = 0x27B040u;
label_27b040:
    // 0x27b040: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27b040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27b044:
    // 0x27b044: 0xc090500  jal         func_241400
label_27b048:
    if (ctx->pc == 0x27B048u) {
        ctx->pc = 0x27B04Cu;
        goto label_27b04c;
    }
    ctx->pc = 0x27B044u;
    SET_GPR_U32(ctx, 31, 0x27B04Cu);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x27B044u, 0x27B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B04Cu;
label_27b04c:
    // 0x27b04c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27b050:
    // 0x27b050: 0xc119c5c  jal         func_467170
label_27b054:
    if (ctx->pc == 0x27B054u) {
        ctx->pc = 0x27B058u;
        goto label_27b058;
    }
    ctx->pc = 0x27B050u;
    SET_GPR_U32(ctx, 31, 0x27B058u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x27B050u, 0x27B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B058u;
label_27b058:
    // 0x27b058: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27b058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_27b05c:
    // 0x27b05c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b060:
    // 0x27b060: 0x10000026  b           . + 4 + (0x26 << 2)
label_27b064:
    if (ctx->pc == 0x27B064u) {
        ctx->pc = 0x27B068u;
        goto label_27b068;
    }
    ctx->pc = 0x27B060u;
    {
        const bool branch_taken_0x27b060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b060) {
            ctx->pc = 0x27B0FCu;
            goto label_27b0fc;
        }
    }
    ctx->pc = 0x27B068u;
label_27b068:
    // 0x27b068: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27b068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27b06c:
    // 0x27b06c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27b06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27b070:
    // 0x27b070: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x27b070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_27b074:
    // 0x27b074: 0x320f809  jalr        $t9
label_27b078:
    if (ctx->pc == 0x27B078u) {
        ctx->pc = 0x27B07Cu;
        goto label_27b07c;
    }
    ctx->pc = 0x27B074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27B07Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B074u, 0x27B07Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27B07Cu;
label_27b07c:
    // 0x27b07c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27b080:
    // 0x27b080: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27b084:
    if (ctx->pc == 0x27B084u) {
        ctx->pc = 0x27B088u;
        goto label_27b088;
    }
    ctx->pc = 0x27B080u;
    {
        const bool branch_taken_0x27b080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b080) {
            ctx->pc = 0x27B0A4u;
            goto label_27b0a4;
        }
    }
    ctx->pc = 0x27B088u;
label_27b088:
    // 0x27b088: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27b088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27b08c:
    // 0x27b08c: 0xc090500  jal         func_241400
label_27b090:
    if (ctx->pc == 0x27B090u) {
        ctx->pc = 0x27B094u;
        goto label_27b094;
    }
    ctx->pc = 0x27B08Cu;
    SET_GPR_U32(ctx, 31, 0x27B094u);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x27B08Cu, 0x27B094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B094u;
label_27b094:
    // 0x27b094: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27b094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27b098:
    // 0x27b098: 0xc119c5c  jal         func_467170
label_27b09c:
    if (ctx->pc == 0x27B09Cu) {
        ctx->pc = 0x27B0A0u;
        goto label_27b0a0;
    }
    ctx->pc = 0x27B098u;
    SET_GPR_U32(ctx, 31, 0x27B0A0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x27B098u, 0x27B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0A0u;
label_27b0a0:
    // 0x27b0a0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_27b0a4:
    // 0x27b0a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b0a8:
    // 0x27b0a8: 0x10000014  b           . + 4 + (0x14 << 2)
label_27b0ac:
    if (ctx->pc == 0x27B0ACu) {
        ctx->pc = 0x27B0B0u;
        goto label_27b0b0;
    }
    ctx->pc = 0x27B0A8u;
    {
        const bool branch_taken_0x27b0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b0a8) {
            ctx->pc = 0x27B0FCu;
            goto label_27b0fc;
        }
    }
    ctx->pc = 0x27B0B0u;
label_27b0b0:
    // 0x27b0b0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27b0b4:
    // 0x27b0b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27b0b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27b0b8:
    // 0x27b0b8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x27b0b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_27b0bc:
    // 0x27b0bc: 0x320f809  jalr        $t9
label_27b0c0:
    if (ctx->pc == 0x27B0C0u) {
        ctx->pc = 0x27B0C4u;
        goto label_27b0c4;
    }
    ctx->pc = 0x27B0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27B0C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B0BCu, 0x27B0C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27B0C4u;
label_27b0c4:
    // 0x27b0c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x27b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27b0c8:
    // 0x27b0c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27b0cc:
    if (ctx->pc == 0x27B0CCu) {
        ctx->pc = 0x27B0D0u;
        goto label_27b0d0;
    }
    ctx->pc = 0x27B0C8u;
    {
        const bool branch_taken_0x27b0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b0c8) {
            ctx->pc = 0x27B0ECu;
            goto label_27b0ec;
        }
    }
    ctx->pc = 0x27B0D0u;
label_27b0d0:
    // 0x27b0d0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27b0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27b0d4:
    // 0x27b0d4: 0xc090500  jal         func_241400
label_27b0d8:
    if (ctx->pc == 0x27B0D8u) {
        ctx->pc = 0x27B0DCu;
        goto label_27b0dc;
    }
    ctx->pc = 0x27B0D4u;
    SET_GPR_U32(ctx, 31, 0x27B0DCu);
    ctx->pc = 0x241400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241400u, 0x27B0D4u, 0x27B0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0DCu;
label_27b0dc:
    // 0x27b0dc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x27b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_27b0e0:
    // 0x27b0e0: 0xc119c5c  jal         func_467170
label_27b0e4:
    if (ctx->pc == 0x27B0E4u) {
        ctx->pc = 0x27B0E8u;
        goto label_27b0e8;
    }
    ctx->pc = 0x27B0E0u;
    SET_GPR_U32(ctx, 31, 0x27B0E8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x27B0E0u, 0x27B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0E8u;
label_27b0e8:
    // 0x27b0e8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27b0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_27b0ec:
    // 0x27b0ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b0f0:
    // 0x27b0f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_27b0f4:
    if (ctx->pc == 0x27B0F4u) {
        ctx->pc = 0x27B0F8u;
        goto label_27b0f8;
    }
    ctx->pc = 0x27B0F0u;
    {
        const bool branch_taken_0x27b0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b0f0) {
            ctx->pc = 0x27B0FCu;
            goto label_27b0fc;
        }
    }
    ctx->pc = 0x27B0F8u;
label_27b0f8:
    // 0x27b0f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27b0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b0fc:
    // 0x27b0fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27b0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27b100:
    // 0x27b100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27b104:
    // 0x27b104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27b108:
    // 0x27b108: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27b108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27b10c:
    // 0x27b10c: 0x3e00008  jr          $ra
label_27b110:
    if (ctx->pc == 0x27B110u) {
        ctx->pc = 0x27B114u;
        goto label_27b114;
    }
    ctx->pc = 0x27B10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B114u;
label_27b114:
    // 0x27b114: 0x0  nop
    ctx->pc = 0x27b114u;
    // NOP
label_27b118:
    // 0x27b118: 0x0  nop
    ctx->pc = 0x27b118u;
    // NOP
label_27b11c:
    // 0x27b11c: 0x0  nop
    ctx->pc = 0x27b11cu;
    // NOP
    ctx->pc = 0x27b120u;
}
