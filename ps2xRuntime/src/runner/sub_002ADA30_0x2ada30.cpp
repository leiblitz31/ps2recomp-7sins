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

// Function: sub_002ADA30
// Address: 0x2ada30 - 0x2af9b0
void sub_002ADA30_0x2ada30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ADA30_0x2ada30");
#endif

    switch (ctx->pc) {
        case 0x2ada68u: goto label_2ada68;
        case 0x2ada80u: goto label_2ada80;
        case 0x2adadcu: goto label_2adadc;
        case 0x2adb50u: goto label_2adb50;
        case 0x2adb64u: goto label_2adb64;
        case 0x2adbf0u: goto label_2adbf0;
        case 0x2adc34u: goto label_2adc34;
        case 0x2adc44u: goto label_2adc44;
        case 0x2adcb4u: goto label_2adcb4;
        case 0x2adcd0u: goto label_2adcd0;
        case 0x2adcecu: goto label_2adcec;
        case 0x2add48u: goto label_2add48;
        case 0x2add60u: goto label_2add60;
        case 0x2addfcu: goto label_2addfc;
        case 0x2ade28u: goto label_2ade28;
        case 0x2ade44u: goto label_2ade44;
        case 0x2ade5cu: goto label_2ade5c;
        case 0x2ade80u: goto label_2ade80;
        case 0x2ade8cu: goto label_2ade8c;
        case 0x2adf1cu: goto label_2adf1c;
        case 0x2adf3cu: goto label_2adf3c;
        case 0x2adf4cu: goto label_2adf4c;
        case 0x2adf64u: goto label_2adf64;
        case 0x2adf84u: goto label_2adf84;
        case 0x2adfa8u: goto label_2adfa8;
        case 0x2adfb4u: goto label_2adfb4;
        case 0x2adfd4u: goto label_2adfd4;
        case 0x2ae048u: goto label_2ae048;
        case 0x2ae064u: goto label_2ae064;
        case 0x2ae07cu: goto label_2ae07c;
        case 0x2ae090u: goto label_2ae090;
        case 0x2ae0a8u: goto label_2ae0a8;
        case 0x2ae0ecu: goto label_2ae0ec;
        case 0x2ae0fcu: goto label_2ae0fc;
        case 0x2ae144u: goto label_2ae144;
        case 0x2ae1b4u: goto label_2ae1b4;
        case 0x2ae1c0u: goto label_2ae1c0;
        case 0x2ae1d8u: goto label_2ae1d8;
        case 0x2ae1f4u: goto label_2ae1f4;
        case 0x2ae208u: goto label_2ae208;
        case 0x2ae220u: goto label_2ae220;
        case 0x2ae230u: goto label_2ae230;
        case 0x2ae274u: goto label_2ae274;
        case 0x2ae2a8u: goto label_2ae2a8;
        case 0x2ae2b4u: goto label_2ae2b4;
        case 0x2ae2c0u: goto label_2ae2c0;
        case 0x2ae2f0u: goto label_2ae2f0;
        case 0x2ae304u: goto label_2ae304;
        case 0x2ae3a8u: goto label_2ae3a8;
        case 0x2ae430u: goto label_2ae430;
        case 0x2ae464u: goto label_2ae464;
        case 0x2ae4d4u: goto label_2ae4d4;
        case 0x2ae5bcu: goto label_2ae5bc;
        case 0x2ae614u: goto label_2ae614;
        case 0x2ae640u: goto label_2ae640;
        case 0x2ae65cu: goto label_2ae65c;
        case 0x2ae67cu: goto label_2ae67c;
        case 0x2ae69cu: goto label_2ae69c;
        case 0x2ae774u: goto label_2ae774;
        case 0x2ae880u: goto label_2ae880;
        case 0x2ae900u: goto label_2ae900;
        case 0x2ae980u: goto label_2ae980;
        case 0x2ae9b0u: goto label_2ae9b0;
        case 0x2aea00u: goto label_2aea00;
        case 0x2aea78u: goto label_2aea78;
        case 0x2aeae0u: goto label_2aeae0;
        case 0x2aeb04u: goto label_2aeb04;
        case 0x2aeb30u: goto label_2aeb30;
        case 0x2aeb64u: goto label_2aeb64;
        case 0x2aeb70u: goto label_2aeb70;
        case 0x2aeba8u: goto label_2aeba8;
        case 0x2aebf4u: goto label_2aebf4;
        case 0x2aec34u: goto label_2aec34;
        case 0x2aec78u: goto label_2aec78;
        case 0x2aed98u: goto label_2aed98;
        case 0x2aede0u: goto label_2aede0;
        case 0x2aee04u: goto label_2aee04;
        case 0x2aee14u: goto label_2aee14;
        case 0x2aeee0u: goto label_2aeee0;
        case 0x2aef74u: goto label_2aef74;
        case 0x2aef9cu: goto label_2aef9c;
        case 0x2aefc0u: goto label_2aefc0;
        case 0x2aefe4u: goto label_2aefe4;
        case 0x2aeff0u: goto label_2aeff0;
        case 0x2af0a8u: goto label_2af0a8;
        case 0x2af0d0u: goto label_2af0d0;
        case 0x2af0f4u: goto label_2af0f4;
        case 0x2af114u: goto label_2af114;
        case 0x2af138u: goto label_2af138;
        case 0x2af148u: goto label_2af148;
        case 0x2af194u: goto label_2af194;
        case 0x2af1c0u: goto label_2af1c0;
        case 0x2af1dcu: goto label_2af1dc;
        case 0x2af1f0u: goto label_2af1f0;
        case 0x2af208u: goto label_2af208;
        case 0x2af234u: goto label_2af234;
        case 0x2af264u: goto label_2af264;
        case 0x2af29cu: goto label_2af29c;
        case 0x2af2c0u: goto label_2af2c0;
        case 0x2af2d0u: goto label_2af2d0;
        case 0x2af38cu: goto label_2af38c;
        case 0x2af414u: goto label_2af414;
        case 0x2af430u: goto label_2af430;
        case 0x2af44cu: goto label_2af44c;
        case 0x2af46cu: goto label_2af46c;
        case 0x2af478u: goto label_2af478;
        case 0x2af510u: goto label_2af510;
        case 0x2af544u: goto label_2af544;
        case 0x2af56cu: goto label_2af56c;
        case 0x2af58cu: goto label_2af58c;
        case 0x2af5d0u: goto label_2af5d0;
        case 0x2af5e0u: goto label_2af5e0;
        case 0x2af618u: goto label_2af618;
        case 0x2af640u: goto label_2af640;
        case 0x2af658u: goto label_2af658;
        case 0x2af664u: goto label_2af664;
        case 0x2af67cu: goto label_2af67c;
        case 0x2af6a8u: goto label_2af6a8;
        case 0x2af704u: goto label_2af704;
        case 0x2af730u: goto label_2af730;
        case 0x2af750u: goto label_2af750;
        case 0x2af760u: goto label_2af760;
        case 0x2af84cu: goto label_2af84c;
        case 0x2af884u: goto label_2af884;
        case 0x2af8b4u: goto label_2af8b4;
        case 0x2af8ccu: goto label_2af8cc;
        case 0x2af908u: goto label_2af908;
        case 0x2af930u: goto label_2af930;
        case 0x2af940u: goto label_2af940;
        case 0x2af958u: goto label_2af958;
        case 0x2af96cu: goto label_2af96c;
        default: break;
    }

    ctx->pc = 0x2ada30u;

    // 0x2ada30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ada30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ada34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ada34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ada38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ada38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ada3c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2ada3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2ada40: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2ada40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2ada44: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2ada44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2ada48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2ada48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ada4c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2ada4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ada50: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2ada50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ada54: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2ada54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ada58: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2ada58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ada5c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2ada5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2ada60: 0xc0ab584  jal         func_2AD610
    ctx->pc = 0x2ADA60u;
    SET_GPR_U32(ctx, 31, 0x2ADA68u);
    ctx->pc = 0x2AD610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD610u, 0x2ADA60u, 0x2ADA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADA68u;
label_2ada68:
    // 0x2ada68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ada68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada6c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2ada6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ada70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ada70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada74: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2ada74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ada78: 0xc0ab148  jal         func_2AC520
    ctx->pc = 0x2ADA78u;
    SET_GPR_U32(ctx, 31, 0x2ADA80u);
    ctx->pc = 0x2AC520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC520u, 0x2ADA78u, 0x2ADA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADA80u;
label_2ada80:
    // 0x2ada80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2ada80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ada84: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2ada84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2ada88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2ada88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ada8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ada8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ada90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ada90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ada94: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2ada94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ada98: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADAA0u;
    // 0x2adaa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2adaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2adaa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2adaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2adaa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2adaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2adaac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2adaacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2adab0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2adab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2adab4: 0x90420071  lbu         $v0, 0x71($v0)
    ctx->pc = 0x2adab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 113)));
    // 0x2adab8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2adab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2adabc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADABCu;
    {
        const bool branch_taken_0x2adabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adabc) {
            ctx->pc = 0x2ADAD0u;
            goto label_2adad0;
        }
    }
    ctx->pc = 0x2ADAC4u;
    // 0x2adac4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2adac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adac8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ADAC8u;
    {
        const bool branch_taken_0x2adac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adac8) {
            ctx->pc = 0x2ADAE4u;
            goto label_2adae4;
        }
    }
    ctx->pc = 0x2ADAD0u;
label_2adad0:
    // 0x2adad0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2adad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2adad4: 0xc0852c4  jal         func_214B10
    ctx->pc = 0x2ADAD4u;
    SET_GPR_U32(ctx, 31, 0x2ADADCu);
    ctx->pc = 0x214B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B10u, 0x2ADAD4u, 0x2ADADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADADCu;
label_2adadc:
    // 0x2adadc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2adadcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2adae0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2adae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2adae4:
    // 0x2adae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2adae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2adae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2adae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2adaec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2adaecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2adaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADAF8u;
    // 0x2adaf8: 0x0  nop
    ctx->pc = 0x2adaf8u;
    // NOP
    // 0x2adafc: 0x0  nop
    ctx->pc = 0x2adafcu;
    // NOP
    // 0x2adb00: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x2adb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
    // 0x2adb04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2adb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2adb08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2adb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2adb0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2adb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2adb10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2adb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2adb14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2adb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2adb18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2adb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2adb1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2adb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2adb20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2adb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2adb24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2adb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2adb28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2adb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2adb2c: 0xafa402f0  sw          $a0, 0x2F0($sp)
    ctx->pc = 0x2adb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 4));
    // 0x2adb30: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2adb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2adb34: 0x90850071  lbu         $a1, 0x71($a0)
    ctx->pc = 0x2adb34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 113)));
    // 0x2adb38: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2adb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2adb3c: 0x1060078f  beqz        $v1, . + 4 + (0x78F << 2)
    ctx->pc = 0x2ADB3Cu;
    {
        const bool branch_taken_0x2adb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adb3c) {
            ctx->pc = 0x2AF97Cu;
            goto label_2af97c;
        }
    }
    ctx->pc = 0x2ADB44u;
    // 0x2adb44: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2adb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2adb48: 0xc0852d0  jal         func_214B40
    ctx->pc = 0x2ADB48u;
    SET_GPR_U32(ctx, 31, 0x2ADB50u);
    ctx->pc = 0x214B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B40u, 0x2ADB48u, 0x2ADB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB50u;
label_2adb50:
    // 0x2adb50: 0x27a20278  addiu       $v0, $sp, 0x278
    ctx->pc = 0x2adb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
    // 0x2adb54: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2adb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2adb58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ADB58u;
    {
        const bool branch_taken_0x2adb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adb58) {
            ctx->pc = 0x2ADB80u;
            goto label_2adb80;
        }
    }
    ctx->pc = 0x2ADB60u;
    // 0x2adb60: 0x402821  addu        $a1, $v0, $zero
    ctx->pc = 0x2adb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_2adb64:
    // 0x2adb64: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2adb64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2adb68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2adb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2adb6c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2adb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2adb70: 0x0  nop
    ctx->pc = 0x2adb70u;
    // NOP
    // 0x2adb74: 0x0  nop
    ctx->pc = 0x2adb74u;
    // NOP
    // 0x2adb78: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2ADB78u;
    {
        const bool branch_taken_0x2adb78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adb78) {
            ctx->pc = 0x2ADB64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2adb64;
        }
    }
    ctx->pc = 0x2ADB80u;
label_2adb80:
    // 0x2adb80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2adb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2adb84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adb84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adb88: 0x0  nop
    ctx->pc = 0x2adb88u;
    // NOP
    // 0x2adb8c: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x2adb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x2adb90: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x2adb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x2adb94: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x2adb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x2adb98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2adb98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adb9c: 0x0  nop
    ctx->pc = 0x2adb9cu;
    // NOP
    // 0x2adba0: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x2adba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x2adba4: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x2adba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x2adba8: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x2adba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x2adbac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2adbacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adbb0: 0x0  nop
    ctx->pc = 0x2adbb0u;
    // NOP
    // 0x2adbb4: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x2adbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x2adbb8: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x2adbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x2adbbc: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x2adbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x2adbc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2adbc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adbc4: 0x0  nop
    ctx->pc = 0x2adbc4u;
    // NOP
    // 0x2adbc8: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x2adbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x2adbcc: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x2adbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
    // 0x2adbd0: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x2adbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x2adbd4: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x2adbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x2adbd8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2adbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2adbdc: 0x34620003  ori         $v0, $v1, 0x3
    ctx->pc = 0x2adbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2adbe0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x2adbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2adbe4: 0xafa3020c  sw          $v1, 0x20C($sp)
    ctx->pc = 0x2adbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 3));
    // 0x2adbe8: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x2ADBE8u;
    SET_GPR_U32(ctx, 31, 0x2ADBF0u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x2ADBE8u, 0x2ADBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADBF0u;
label_2adbf0:
    // 0x2adbf0: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x2adbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
    // 0x2adbf4: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2adbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2adbf8: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2ADBF8u;
    {
        const bool branch_taken_0x2adbf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adbf8) {
            ctx->pc = 0x2ADC4Cu;
            goto label_2adc4c;
        }
    }
    ctx->pc = 0x2ADC00u;
    // 0x2adc00: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x2adc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2adc04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2adc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2adc08: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ADC08u;
    {
        const bool branch_taken_0x2adc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adc08) {
            ctx->pc = 0x2ADC4Cu;
            goto label_2adc4c;
        }
    }
    ctx->pc = 0x2ADC10u;
    // 0x2adc10: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x2adc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2adc14: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2adc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2adc18: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x2adc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
    // 0x2adc1c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2adc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2adc20: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2adc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2adc24: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x2adc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2adc28: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2adc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc2c: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x2ADC2Cu;
    SET_GPR_U32(ctx, 31, 0x2ADC34u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x2ADC2Cu, 0x2ADC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC34u;
label_2adc34:
    // 0x2adc34: 0x27a40278  addiu       $a0, $sp, 0x278
    ctx->pc = 0x2adc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
    // 0x2adc38: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x2adc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2adc3c: 0xc041d58  jal         func_107560
    ctx->pc = 0x2ADC3Cu;
    SET_GPR_U32(ctx, 31, 0x2ADC44u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2ADC3Cu, 0x2ADC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC44u;
label_2adc44:
    // 0x2adc44: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2ADC44u;
    {
        const bool branch_taken_0x2adc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adc44) {
            ctx->pc = 0x2ADDE4u;
            goto label_2adde4;
        }
    }
    ctx->pc = 0x2ADC4Cu;
label_2adc4c:
    // 0x2adc4c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2adc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2adc50: 0x10800064  beqz        $a0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2ADC50u;
    {
        const bool branch_taken_0x2adc50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adc50) {
            ctx->pc = 0x2ADDE4u;
            goto label_2adde4;
        }
    }
    ctx->pc = 0x2ADC58u;
    // 0x2adc58: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2adc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2adc5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2adc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2adc60: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2ADC60u;
    {
        const bool branch_taken_0x2adc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adc60) {
            ctx->pc = 0x2ADDE4u;
            goto label_2adde4;
        }
    }
    ctx->pc = 0x2ADC68u;
    // 0x2adc68: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2adc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2adc6c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2adc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2adc70: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x2adc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2adc74: 0x27a20268  addiu       $v0, $sp, 0x268
    ctx->pc = 0x2adc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
    // 0x2adc78: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2adc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2adc7c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2adc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2adc80: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2adc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adc84: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2adc84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2adc88: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2adc88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2adc8c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2adc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2adc90: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x2adc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2adc94: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2adc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2adc98: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x2adc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
    // 0x2adc9c: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2adc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2adca0: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x2adca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2adca4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2adca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adca8: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2adca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2adcac: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x2ADCACu;
    SET_GPR_U32(ctx, 31, 0x2ADCB4u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x2ADCACu, 0x2ADCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADCB4u;
label_2adcb4:
    // 0x2adcb4: 0x8f85bcc4  lw          $a1, -0x433C($gp)
    ctx->pc = 0x2adcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2adcb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2adcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2adcbc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2adcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adcc0: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x2adcc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2adcc4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2adcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adcc8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2ADCC8u;
    SET_GPR_U32(ctx, 31, 0x2ADCD0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2ADCC8u, 0x2ADCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADCD0u;
label_2adcd0:
    // 0x2adcd0: 0xafa202e4  sw          $v0, 0x2E4($sp)
    ctx->pc = 0x2adcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 2));
    // 0x2adcd4: 0x27a20248  addiu       $v0, $sp, 0x248
    ctx->pc = 0x2adcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x2adcd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2adcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adcdc: 0x8fa702e4  lw          $a3, 0x2E4($sp)
    ctx->pc = 0x2adcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
    // 0x2adce0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2adce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adce4: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2ADCE4u;
    SET_GPR_U32(ctx, 31, 0x2ADCECu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2ADCE4u, 0x2ADCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADCECu;
label_2adcec:
    // 0x2adcec: 0x27a20248  addiu       $v0, $sp, 0x248
    ctx->pc = 0x2adcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x2adcf0: 0x27a30258  addiu       $v1, $sp, 0x258
    ctx->pc = 0x2adcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x2adcf4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2adcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2adcf8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2adcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2adcfc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2adcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2add00: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2add00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2add04: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2add04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2add08: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2add08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2add0c: 0xc7a10268  lwc1        $f1, 0x268($sp)
    ctx->pc = 0x2add0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2add10: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x2add10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2add14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2add14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2add18: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x2add18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x2add1c: 0xc7a1026c  lwc1        $f1, 0x26C($sp)
    ctx->pc = 0x2add1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2add20: 0xc7a0025c  lwc1        $f0, 0x25C($sp)
    ctx->pc = 0x2add20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2add24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2add24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2add28: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x2add28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
    // 0x2add2c: 0xc7a10270  lwc1        $f1, 0x270($sp)
    ctx->pc = 0x2add2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2add30: 0xc7a00260  lwc1        $f0, 0x260($sp)
    ctx->pc = 0x2add30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2add34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2add34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2add38: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x2add38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x2add3c: 0x27a40278  addiu       $a0, $sp, 0x278
    ctx->pc = 0x2add3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
    // 0x2add40: 0xc104d24  jal         func_413490
    ctx->pc = 0x2ADD40u;
    SET_GPR_U32(ctx, 31, 0x2ADD48u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2ADD40u, 0x2ADD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD48u;
label_2add48:
    // 0x2add48: 0xe7a002e0  swc1        $f0, 0x2E0($sp)
    ctx->pc = 0x2add48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x2add4c: 0x27a20278  addiu       $v0, $sp, 0x278
    ctx->pc = 0x2add4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
    // 0x2add50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2add50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add54: 0x27a50278  addiu       $a1, $sp, 0x278
    ctx->pc = 0x2add54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
    // 0x2add58: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x2ADD58u;
    SET_GPR_U32(ctx, 31, 0x2ADD60u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2ADD58u, 0x2ADD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD60u;
label_2add60:
    // 0x2add60: 0x3c043e80  lui         $a0, 0x3E80
    ctx->pc = 0x2add60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
    // 0x2add64: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2add64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2add68: 0xc7a002e0  lwc1        $f0, 0x2E0($sp)
    ctx->pc = 0x2add68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2add6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2add6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2add70: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x2add70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2add74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2add74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2add78: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x2add78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x2add7c: 0x3c053e80  lui         $a1, 0x3E80
    ctx->pc = 0x2add7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16000 << 16));
    // 0x2add80: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2add80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2add84: 0xc7a002e0  lwc1        $f0, 0x2E0($sp)
    ctx->pc = 0x2add84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2add88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2add88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2add8c: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x2add8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2add90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2add90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2add94: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x2add94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
    // 0x2add98: 0x3c043e80  lui         $a0, 0x3E80
    ctx->pc = 0x2add98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
    // 0x2add9c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2add9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2adda0: 0xc7a002e0  lwc1        $f0, 0x2E0($sp)
    ctx->pc = 0x2adda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adda4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2adda4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2adda8: 0xc7a00280  lwc1        $f0, 0x280($sp)
    ctx->pc = 0x2adda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2addac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2addacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2addb0: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x2addb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x2addb4: 0xc7a10278  lwc1        $f1, 0x278($sp)
    ctx->pc = 0x2addb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2addb8: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x2addb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2addbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2addbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2addc0: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x2addc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x2addc4: 0xc7a1027c  lwc1        $f1, 0x27C($sp)
    ctx->pc = 0x2addc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2addc8: 0xc7a0025c  lwc1        $f0, 0x25C($sp)
    ctx->pc = 0x2addc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2addcc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2addccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2addd0: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x2addd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
    // 0x2addd4: 0xc7a10280  lwc1        $f1, 0x280($sp)
    ctx->pc = 0x2addd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2addd8: 0xc7a00260  lwc1        $f0, 0x260($sp)
    ctx->pc = 0x2addd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adddc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2adddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2adde0: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x2adde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_2adde4:
    // 0x2adde4: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x2adde4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2adde8: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2adde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2addec: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x2addecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2addf0: 0x27a50278  addiu       $a1, $sp, 0x278
    ctx->pc = 0x2addf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
    // 0x2addf4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2ADDF4u;
    SET_GPR_U32(ctx, 31, 0x2ADDFCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2ADDF4u, 0x2ADDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADDFCu;
label_2addfc:
    // 0x2addfc: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2addfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ade00: 0x8c570040  lw          $s7, 0x40($v0)
    ctx->pc = 0x2ade00u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2ade04: 0x8ee40088  lw          $a0, 0x88($s7)
    ctx->pc = 0x2ade04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 136)));
    // 0x2ade08: 0x34850001  ori         $a1, $a0, 0x1
    ctx->pc = 0x2ade08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2ade0c: 0xaee50088  sw          $a1, 0x88($s7)
    ctx->pc = 0x2ade0cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 136), GPR_U32(ctx, 5));
    // 0x2ade10: 0x8fa602f0  lw          $a2, 0x2F0($sp)
    ctx->pc = 0x2ade10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ade14: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x2ade14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2ade18: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2ade18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2ade1c: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x2ade1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x2ade20: 0xc041d58  jal         func_107560
    ctx->pc = 0x2ADE20u;
    SET_GPR_U32(ctx, 31, 0x2ADE28u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2ADE20u, 0x2ADE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADE28u;
label_2ade28:
    // 0x2ade28: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2ade28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ade2c: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x2ade2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2ade30: 0x24830064  addiu       $v1, $a0, 0x64
    ctx->pc = 0x2ade30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x2ade34: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ade34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ade38: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x2ade38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2ade3c: 0xc041d58  jal         func_107560
    ctx->pc = 0x2ADE3Cu;
    SET_GPR_U32(ctx, 31, 0x2ADE44u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2ADE3Cu, 0x2ADE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADE44u;
label_2ade44:
    // 0x2ade44: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2ade44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ade48: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2ade48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2ade4c: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2ade4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2ade50: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x2ade50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2ade54: 0xc041d58  jal         func_107560
    ctx->pc = 0x2ADE54u;
    SET_GPR_U32(ctx, 31, 0x2ADE5Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2ADE54u, 0x2ADE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADE5Cu;
label_2ade5c:
    // 0x2ade5c: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2ade5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ade60: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x2ade60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2ade64: 0x8c640088  lw          $a0, 0x88($v1)
    ctx->pc = 0x2ade64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2ade68: 0x3482000c  ori         $v0, $a0, 0xC
    ctx->pc = 0x2ade68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x2ade6c: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x2ade6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
    // 0x2ade70: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2ade70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ade74: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x2ade74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2ade78: 0xc0ab61c  jal         func_2AD870
    ctx->pc = 0x2ADE78u;
    SET_GPR_U32(ctx, 31, 0x2ADE80u);
    ctx->pc = 0x2AD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD870u, 0x2ADE78u, 0x2ADE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADE80u;
label_2ade80:
    // 0x2ade80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ade80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ade84: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2ADE84u;
    {
        const bool branch_taken_0x2ade84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ade84) {
            ctx->pc = 0x2ADF74u;
            goto label_2adf74;
        }
    }
    ctx->pc = 0x2ADE8Cu;
label_2ade8c:
    // 0x2ade8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ade8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ade90: 0xafa302dc  sw          $v1, 0x2DC($sp)
    ctx->pc = 0x2ade90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 3));
    // 0x2ade94: 0x8fa402dc  lw          $a0, 0x2DC($sp)
    ctx->pc = 0x2ade94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x2ade98: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2ade98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ade9c: 0x14020034  bne         $zero, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2ADE9Cu;
    {
        const bool branch_taken_0x2ade9c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ade9c) {
            ctx->pc = 0x2ADF70u;
            goto label_2adf70;
        }
    }
    ctx->pc = 0x2ADEA4u;
    // 0x2adea4: 0x8fa602f0  lw          $a2, 0x2F0($sp)
    ctx->pc = 0x2adea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2adea8: 0x8fa302dc  lw          $v1, 0x2DC($sp)
    ctx->pc = 0x2adea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x2adeac: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2adeacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2adeb0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2adeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2adeb4: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x2adeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x2adeb8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2adeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2adebc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2adebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2adec0: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x2adec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2adec4: 0x30a60002  andi        $a2, $a1, 0x2
    ctx->pc = 0x2adec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x2adec8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ADEC8u;
    {
        const bool branch_taken_0x2adec8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adec8) {
            ctx->pc = 0x2ADEE0u;
            goto label_2adee0;
        }
    }
    ctx->pc = 0x2ADED0u;
    // 0x2aded0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2aded0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aded4: 0xafa70294  sw          $a3, 0x294($sp)
    ctx->pc = 0x2aded4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 7));
    // 0x2aded8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ADED8u;
    {
        const bool branch_taken_0x2aded8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aded8) {
            ctx->pc = 0x2ADEE4u;
            goto label_2adee4;
        }
    }
    ctx->pc = 0x2ADEE0u;
label_2adee0:
    // 0x2adee0: 0xafa00294  sw          $zero, 0x294($sp)
    ctx->pc = 0x2adee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 0));
label_2adee4:
    // 0x2adee4: 0x8fa20294  lw          $v0, 0x294($sp)
    ctx->pc = 0x2adee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x2adee8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2ADEE8u;
    {
        const bool branch_taken_0x2adee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adee8) {
            ctx->pc = 0x2ADF70u;
            goto label_2adf70;
        }
    }
    ctx->pc = 0x2ADEF0u;
    // 0x2adef0: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2adef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2adef4: 0x8fa402dc  lw          $a0, 0x2DC($sp)
    ctx->pc = 0x2adef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x2adef8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2adef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2adefc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2adefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2adf00: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x2adf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2adf04: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x2adf04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2adf08: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2adf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2adf0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2adf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2adf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf14: 0xc12b246  jal         func_4AC918
    ctx->pc = 0x2ADF14u;
    SET_GPR_U32(ctx, 31, 0x2ADF1Cu);
    ctx->pc = 0x4AC918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC918u, 0x2ADF14u, 0x2ADF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF1Cu;
label_2adf1c:
    // 0x2adf1c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2adf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adf20: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2ADF20u;
    {
        const bool branch_taken_0x2adf20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adf20) {
            ctx->pc = 0x2ADF50u;
            goto label_2adf50;
        }
    }
    ctx->pc = 0x2ADF28u;
    // 0x2adf28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2adf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adf2c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2adf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2adf30: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x2adf30u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2adf34: 0xc0ab548  jal         func_2AD520
    ctx->pc = 0x2ADF34u;
    SET_GPR_U32(ctx, 31, 0x2ADF3Cu);
    ctx->pc = 0x2AD520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD520u, 0x2ADF34u, 0x2ADF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF3Cu;
label_2adf3c:
    // 0x2adf3c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2adf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adf40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2adf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf44: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2ADF44u;
    SET_GPR_U32(ctx, 31, 0x2ADF4Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2ADF44u, 0x2ADF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF4Cu;
label_2adf4c:
    // 0x2adf4c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2adf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2adf50:
    // 0x2adf50: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2adf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2adf54: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2adf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2adf58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2adf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf5c: 0xc0abf70  jal         func_2AFDC0
    ctx->pc = 0x2ADF5Cu;
    SET_GPR_U32(ctx, 31, 0x2ADF64u);
    ctx->pc = 0x2AFDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFDC0u, 0x2ADF5Cu, 0x2ADF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF64u;
label_2adf64:
    // 0x2adf64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2adf64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ADF68u;
    {
        const bool branch_taken_0x2adf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adf68) {
            ctx->pc = 0x2ADF74u;
            goto label_2adf74;
        }
    }
    ctx->pc = 0x2ADF70u;
label_2adf70:
    // 0x2adf70: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2adf70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2adf74:
    // 0x2adf74: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2adf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2adf78: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2adf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2adf7c: 0xc0ab614  jal         func_2AD850
    ctx->pc = 0x2ADF7Cu;
    SET_GPR_U32(ctx, 31, 0x2ADF84u);
    ctx->pc = 0x2AD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD850u, 0x2ADF7Cu, 0x2ADF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADF84u;
label_2adf84:
    // 0x2adf84: 0x1602ffc1  bne         $s0, $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2ADF84u;
    {
        const bool branch_taken_0x2adf84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2adf84) {
            ctx->pc = 0x2ADE8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ade8c;
        }
    }
    ctx->pc = 0x2ADF8Cu;
    // 0x2adf8c: 0x8f84bc64  lw          $a0, -0x439C($gp)
    ctx->pc = 0x2adf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949988)));
    // 0x2adf90: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x2adf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2adf94: 0xaf82bc64  sw          $v0, -0x439C($gp)
    ctx->pc = 0x2adf94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949988), GPR_U32(ctx, 2));
    // 0x2adf98: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2adf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2adf9c: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x2adf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2adfa0: 0xc0ab61c  jal         func_2AD870
    ctx->pc = 0x2ADFA0u;
    SET_GPR_U32(ctx, 31, 0x2ADFA8u);
    ctx->pc = 0x2AD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD870u, 0x2ADFA0u, 0x2ADFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADFA8u;
label_2adfa8:
    // 0x2adfa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2adfa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adfac: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2ADFACu;
    {
        const bool branch_taken_0x2adfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adfac) {
            ctx->pc = 0x2AE1E0u;
            goto label_2ae1e0;
        }
    }
    ctx->pc = 0x2ADFB4u;
label_2adfb4:
    // 0x2adfb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2adfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adfb8: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2adfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2adfbc: 0x10050087  beq         $zero, $a1, . + 4 + (0x87 << 2)
    ctx->pc = 0x2ADFBCu;
    {
        const bool branch_taken_0x2adfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        if (branch_taken_0x2adfbc) {
            ctx->pc = 0x2AE1DCu;
            goto label_2ae1dc;
        }
    }
    ctx->pc = 0x2ADFC4u;
    // 0x2adfc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2adfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adfc8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2adfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2adfcc: 0xc12bf1e  jal         func_4AFC78
    ctx->pc = 0x2ADFCCu;
    SET_GPR_U32(ctx, 31, 0x2ADFD4u);
    ctx->pc = 0x4AFC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFC78u, 0x2ADFCCu, 0x2ADFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADFD4u;
label_2adfd4:
    // 0x2adfd4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2adfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2adfd8: 0x1444002f  bne         $v0, $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2ADFD8u;
    {
        const bool branch_taken_0x2adfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2adfd8) {
            ctx->pc = 0x2AE098u;
            goto label_2ae098;
        }
    }
    ctx->pc = 0x2ADFE0u;
    // 0x2adfe0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2adfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adfe4: 0x90640058  lbu         $a0, 0x58($v1)
    ctx->pc = 0x2adfe4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2adfe8: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2ADFE8u;
    {
        const bool branch_taken_0x2adfe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adfe8) {
            ctx->pc = 0x2AE098u;
            goto label_2ae098;
        }
    }
    ctx->pc = 0x2ADFF0u;
    // 0x2adff0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2adff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adff4: 0xa0400058  sb          $zero, 0x58($v0)
    ctx->pc = 0x2adff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x2adff8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2adff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2adffc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2adffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2ae000: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2ae000u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ae004: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x2ae004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
    // 0x2ae008: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ae008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae00c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2ae00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae010: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2ae010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x2ae014: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ae014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae018: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x2ae018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
    // 0x2ae01c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ae01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ae020: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x2ae020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
    // 0x2ae024: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ae024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae028: 0x9083005b  lbu         $v1, 0x5B($a0)
    ctx->pc = 0x2ae028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 91)));
    // 0x2ae02c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE02Cu;
    {
        const bool branch_taken_0x2ae02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae02c) {
            ctx->pc = 0x2AE050u;
            goto label_2ae050;
        }
    }
    ctx->pc = 0x2AE034u;
    // 0x2ae034: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ae034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae038: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2ae038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ae03c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ae03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae040: 0xc12bec2  jal         func_4AFB08
    ctx->pc = 0x2AE040u;
    SET_GPR_U32(ctx, 31, 0x2AE048u);
    ctx->pc = 0x4AFB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB08u, 0x2AE040u, 0x2AE048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE048u;
label_2ae048:
    // 0x2ae048: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE048u;
    {
        const bool branch_taken_0x2ae048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae048) {
            ctx->pc = 0x2AE064u;
            goto label_2ae064;
        }
    }
    ctx->pc = 0x2AE050u;
label_2ae050:
    // 0x2ae050: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ae050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae054: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2ae054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ae058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae05c: 0xc12bec2  jal         func_4AFB08
    ctx->pc = 0x2AE05Cu;
    SET_GPR_U32(ctx, 31, 0x2AE064u);
    ctx->pc = 0x4AFB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB08u, 0x2AE05Cu, 0x2AE064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE064u;
label_2ae064:
    // 0x2ae064: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2ae064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae068: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x2ae068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2ae06c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ae06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae070: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x2ae070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2ae074: 0xc12bf22  jal         func_4AFC88
    ctx->pc = 0x2AE074u;
    SET_GPR_U32(ctx, 31, 0x2AE07Cu);
    ctx->pc = 0x4AFC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFC88u, 0x2AE074u, 0x2AE07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE07Cu;
label_2ae07c:
    // 0x2ae07c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ae07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae080: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2ae080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ae084: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ae084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae088: 0xc12bf0a  jal         func_4AFC28
    ctx->pc = 0x2AE088u;
    SET_GPR_U32(ctx, 31, 0x2AE090u);
    ctx->pc = 0x4AFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFC28u, 0x2AE088u, 0x2AE090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE090u;
label_2ae090:
    // 0x2ae090: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2ae090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae094: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x2ae094u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_2ae098:
    // 0x2ae098: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ae098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae09c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2ae09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ae0a0: 0xc12bf12  jal         func_4AFC48
    ctx->pc = 0x2AE0A0u;
    SET_GPR_U32(ctx, 31, 0x2AE0A8u);
    ctx->pc = 0x4AFC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFC48u, 0x2AE0A0u, 0x2AE0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE0A8u;
label_2ae0a8:
    // 0x2ae0a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ae0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ae0ac: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2AE0ACu;
    {
        const bool branch_taken_0x2ae0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ae0ac) {
            ctx->pc = 0x2AE0ECu;
            goto label_2ae0ec;
        }
    }
    ctx->pc = 0x2AE0B4u;
    // 0x2ae0b4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ae0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae0b8: 0x90a30059  lbu         $v1, 0x59($a1)
    ctx->pc = 0x2ae0b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 89)));
    // 0x2ae0bc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2AE0BCu;
    {
        const bool branch_taken_0x2ae0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae0bc) {
            ctx->pc = 0x2AE0ECu;
            goto label_2ae0ec;
        }
    }
    ctx->pc = 0x2AE0C4u;
    // 0x2ae0c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ae0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae0c8: 0xa0400059  sb          $zero, 0x59($v0)
    ctx->pc = 0x2ae0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae0cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ae0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae0d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ae0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae0d4: 0xa043005a  sb          $v1, 0x5A($v0)
    ctx->pc = 0x2ae0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 90), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ae0d8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ae0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae0dc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2ae0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2ae0e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0e4: 0xc12beca  jal         func_4AFB28
    ctx->pc = 0x2AE0E4u;
    SET_GPR_U32(ctx, 31, 0x2AE0ECu);
    ctx->pc = 0x4AFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB28u, 0x2AE0E4u, 0x2AE0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE0ECu;
label_2ae0ec:
    // 0x2ae0ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ae0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae0f0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2ae0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ae0f4: 0xc12bf12  jal         func_4AFC48
    ctx->pc = 0x2AE0F4u;
    SET_GPR_U32(ctx, 31, 0x2AE0FCu);
    ctx->pc = 0x4AFC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFC48u, 0x2AE0F4u, 0x2AE0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE0FCu;
label_2ae0fc:
    // 0x2ae0fc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2ae0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ae100: 0x14430036  bne         $v0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2AE100u;
    {
        const bool branch_taken_0x2ae100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ae100) {
            ctx->pc = 0x2AE1DCu;
            goto label_2ae1dc;
        }
    }
    ctx->pc = 0x2AE108u;
    // 0x2ae108: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ae108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae10c: 0x9082005a  lbu         $v0, 0x5A($a0)
    ctx->pc = 0x2ae10cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x2ae110: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2AE110u;
    {
        const bool branch_taken_0x2ae110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae110) {
            ctx->pc = 0x2AE1DCu;
            goto label_2ae1dc;
        }
    }
    ctx->pc = 0x2AE118u;
    // 0x2ae118: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2ae118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae11c: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x2ae11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x2ae120: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ae120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae124: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ae124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ae128: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE128u;
    {
        const bool branch_taken_0x2ae128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ae128) {
            ctx->pc = 0x2AE138u;
            goto label_2ae138;
        }
    }
    ctx->pc = 0x2AE130u;
    // 0x2ae130: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2ae130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae134: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x2ae134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
label_2ae138:
    // 0x2ae138: 0xafa002d8  sw          $zero, 0x2D8($sp)
    ctx->pc = 0x2ae138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 0));
    // 0x2ae13c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2AE13Cu;
    {
        const bool branch_taken_0x2ae13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae13c) {
            ctx->pc = 0x2AE18Cu;
            goto label_2ae18c;
        }
    }
    ctx->pc = 0x2AE144u;
label_2ae144:
    // 0x2ae144: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ae144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae148: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x2ae148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2ae14c: 0x8fa202d8  lw          $v0, 0x2D8($sp)
    ctx->pc = 0x2ae14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x2ae150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ae150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ae154: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2ae154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae158: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ae158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ae15c: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x2ae15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x2ae160: 0x14c40007  bne         $a2, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AE160u;
    {
        const bool branch_taken_0x2ae160 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ae160) {
            ctx->pc = 0x2AE180u;
            goto label_2ae180;
        }
    }
    ctx->pc = 0x2AE168u;
    // 0x2ae168: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2ae168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae16c: 0x8fa302d8  lw          $v1, 0x2D8($sp)
    ctx->pc = 0x2ae16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x2ae170: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2ae170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae174: 0xa0a00080  sb          $zero, 0x80($a1)
    ctx->pc = 0x2ae174u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae178: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE178u;
    {
        const bool branch_taken_0x2ae178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae178) {
            ctx->pc = 0x2AE19Cu;
            goto label_2ae19c;
        }
    }
    ctx->pc = 0x2AE180u;
label_2ae180:
    // 0x2ae180: 0x8fa202d8  lw          $v0, 0x2D8($sp)
    ctx->pc = 0x2ae180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x2ae184: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ae184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ae188: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x2ae188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
label_2ae18c:
    // 0x2ae18c: 0x8fa302d8  lw          $v1, 0x2D8($sp)
    ctx->pc = 0x2ae18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x2ae190: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x2ae190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ae194: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2AE194u;
    {
        const bool branch_taken_0x2ae194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae194) {
            ctx->pc = 0x2AE144u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae144;
        }
    }
    ctx->pc = 0x2AE19Cu;
label_2ae19c:
    // 0x2ae19c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ae19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae1a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE1A0u;
    {
        const bool branch_taken_0x2ae1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae1a0) {
            ctx->pc = 0x2AE1C4u;
            goto label_2ae1c4;
        }
    }
    ctx->pc = 0x2AE1A8u;
    // 0x2ae1a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ae1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae1ac: 0xc0ab548  jal         func_2AD520
    ctx->pc = 0x2AE1ACu;
    SET_GPR_U32(ctx, 31, 0x2AE1B4u);
    ctx->pc = 0x2AD520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD520u, 0x2AE1ACu, 0x2AE1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE1B4u;
label_2ae1b4:
    // 0x2ae1b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ae1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae1b8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2AE1B8u;
    SET_GPR_U32(ctx, 31, 0x2AE1C0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2AE1B8u, 0x2AE1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE1C0u;
label_2ae1c0:
    // 0x2ae1c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ae1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ae1c4:
    // 0x2ae1c4: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2ae1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae1c8: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x2ae1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2ae1cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ae1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae1d0: 0xc0abf70  jal         func_2AFDC0
    ctx->pc = 0x2AE1D0u;
    SET_GPR_U32(ctx, 31, 0x2AE1D8u);
    ctx->pc = 0x2AFDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFDC0u, 0x2AE1D0u, 0x2AE1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE1D8u;
label_2ae1d8:
    // 0x2ae1d8: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x2ae1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2ae1dc:
    // 0x2ae1dc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ae1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2ae1e0:
    // 0x2ae1e0: 0x8fa602f0  lw          $a2, 0x2F0($sp)
    ctx->pc = 0x2ae1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae1e4: 0x24c70054  addiu       $a3, $a2, 0x54
    ctx->pc = 0x2ae1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 84));
    // 0x2ae1e8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2ae1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae1ec: 0xc0ab614  jal         func_2AD850
    ctx->pc = 0x2AE1ECu;
    SET_GPR_U32(ctx, 31, 0x2AE1F4u);
    ctx->pc = 0x2AD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD850u, 0x2AE1ECu, 0x2AE1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE1F4u;
label_2ae1f4:
    // 0x2ae1f4: 0x1602ff6f  bne         $s0, $v0, . + 4 + (-0x91 << 2)
    ctx->pc = 0x2AE1F4u;
    {
        const bool branch_taken_0x2ae1f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ae1f4) {
            ctx->pc = 0x2ADFB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2adfb4;
        }
    }
    ctx->pc = 0x2AE1FCu;
    // 0x2ae1fc: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2ae1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x2ae200: 0xc08f768  jal         func_23DDA0
    ctx->pc = 0x2AE200u;
    SET_GPR_U32(ctx, 31, 0x2AE208u);
    ctx->pc = 0x23DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DDA0u, 0x2AE200u, 0x2AE208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE208u;
label_2ae208:
    // 0x2ae208: 0xafa202d0  sw          $v0, 0x2D0($sp)
    ctx->pc = 0x2ae208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
    // 0x2ae20c: 0xa3a002ef  sb          $zero, 0x2EF($sp)
    ctx->pc = 0x2ae20cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 751), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae210: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x2ae210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2ae214: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ae214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae218: 0xc08f550  jal         func_23D540
    ctx->pc = 0x2AE218u;
    SET_GPR_U32(ctx, 31, 0x2AE220u);
    ctx->pc = 0x23D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D540u, 0x2AE218u, 0x2AE220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE220u;
label_2ae220:
    // 0x2ae220: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ae220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae224: 0xafa302d4  sw          $v1, 0x2D4($sp)
    ctx->pc = 0x2ae224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 3));
    // 0x2ae228: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2AE228u;
    {
        const bool branch_taken_0x2ae228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae228) {
            ctx->pc = 0x2AE260u;
            goto label_2ae260;
        }
    }
    ctx->pc = 0x2AE230u;
label_2ae230:
    // 0x2ae230: 0x8fa302d4  lw          $v1, 0x2D4($sp)
    ctx->pc = 0x2ae230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x2ae234: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2ae234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x2ae238: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2ae238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ae23c: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE23Cu;
    {
        const bool branch_taken_0x2ae23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ae23c) {
            ctx->pc = 0x2AE254u;
            goto label_2ae254;
        }
    }
    ctx->pc = 0x2AE244u;
    // 0x2ae244: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ae244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae248: 0xa3a502ef  sb          $a1, 0x2EF($sp)
    ctx->pc = 0x2ae248u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 751), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ae24c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2AE24Cu;
    {
        const bool branch_taken_0x2ae24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae24c) {
            ctx->pc = 0x2AE280u;
            goto label_2ae280;
        }
    }
    ctx->pc = 0x2AE254u;
label_2ae254:
    // 0x2ae254: 0x8fa602d4  lw          $a2, 0x2D4($sp)
    ctx->pc = 0x2ae254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x2ae258: 0x24c70070  addiu       $a3, $a2, 0x70
    ctx->pc = 0x2ae258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x2ae25c: 0xafa702d4  sw          $a3, 0x2D4($sp)
    ctx->pc = 0x2ae25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 7));
label_2ae260:
    // 0x2ae260: 0x8fa202d4  lw          $v0, 0x2D4($sp)
    ctx->pc = 0x2ae260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x2ae264: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2ae264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2ae268: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x2ae268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2ae26c: 0xc08f548  jal         func_23D520
    ctx->pc = 0x2AE26Cu;
    SET_GPR_U32(ctx, 31, 0x2AE274u);
    ctx->pc = 0x23D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D520u, 0x2AE26Cu, 0x2AE274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE274u;
label_2ae274:
    // 0x2ae274: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2ae274u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ae278: 0x1462ffed  bne         $v1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2AE278u;
    {
        const bool branch_taken_0x2ae278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ae278) {
            ctx->pc = 0x2AE230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae230;
        }
    }
    ctx->pc = 0x2AE280u;
label_2ae280:
    // 0x2ae280: 0x93a402ef  lbu         $a0, 0x2EF($sp)
    ctx->pc = 0x2ae280u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 751)));
    // 0x2ae284: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE284u;
    {
        const bool branch_taken_0x2ae284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae284) {
            ctx->pc = 0x2AE29Cu;
            goto label_2ae29c;
        }
    }
    ctx->pc = 0x2AE28Cu;
    // 0x2ae28c: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2ae28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae290: 0x90620070  lbu         $v0, 0x70($v1)
    ctx->pc = 0x2ae290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2ae294: 0x144005b3  bnez        $v0, . + 4 + (0x5B3 << 2)
    ctx->pc = 0x2AE294u;
    {
        const bool branch_taken_0x2ae294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae294) {
            ctx->pc = 0x2AF964u;
            goto label_2af964;
        }
    }
    ctx->pc = 0x2AE29Cu;
label_2ae29c:
    // 0x2ae29c: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x2ae29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2ae2a0: 0xc08f550  jal         func_23D540
    ctx->pc = 0x2AE2A0u;
    SET_GPR_U32(ctx, 31, 0x2AE2A8u);
    ctx->pc = 0x23D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D540u, 0x2AE2A0u, 0x2AE2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE2A8u;
label_2ae2a8:
    // 0x2ae2a8: 0xafa202d4  sw          $v0, 0x2D4($sp)
    ctx->pc = 0x2ae2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
    // 0x2ae2ac: 0x100005a5  b           . + 4 + (0x5A5 << 2)
    ctx->pc = 0x2AE2ACu;
    {
        const bool branch_taken_0x2ae2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae2ac) {
            ctx->pc = 0x2AF944u;
            goto label_2af944;
        }
    }
    ctx->pc = 0x2AE2B4u;
label_2ae2b4:
    // 0x2ae2b4: 0x8fa202d4  lw          $v0, 0x2D4($sp)
    ctx->pc = 0x2ae2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x2ae2b8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2ae2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2ae2bc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2ae2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2ae2c0:
    // 0x2ae2c0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2ae2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae2c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ae2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ae2c8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2ae2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2ae2cc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2ae2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2ae2d0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2ae2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2ae2d4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2ae2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2ae2d8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2ae2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2ae2dc: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2AE2DCu;
    {
        const bool branch_taken_0x2ae2dc = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x2ae2dc) {
            ctx->pc = 0x2AE2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae2c0;
        }
    }
    ctx->pc = 0x2AE2E4u;
    // 0x2ae2e4: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2ae2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ae2e8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2AE2E8u;
    SET_GPR_U32(ctx, 31, 0x2AE2F0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2AE2E8u, 0x2AE2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE2F0u;
label_2ae2f0:
    // 0x2ae2f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ae2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae2f4: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x2ae2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2ae2f8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ae2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae2fc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2AE2FCu;
    SET_GPR_U32(ctx, 31, 0x2AE304u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2AE2FCu, 0x2AE304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE304u;
label_2ae304:
    // 0x2ae304: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ae304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae308: 0xafa402cc  sw          $a0, 0x2CC($sp)
    ctx->pc = 0x2ae308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 4));
    // 0x2ae30c: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x2ae30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2ae310: 0xa0400058  sb          $zero, 0x58($v0)
    ctx->pc = 0x2ae310u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae314: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x2ae314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2ae318: 0xa0400059  sb          $zero, 0x59($v0)
    ctx->pc = 0x2ae318u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae31c: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2ae31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2ae320: 0xa080005a  sb          $zero, 0x5A($a0)
    ctx->pc = 0x2ae320u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae324: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x2ae324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x2ae328: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x2ae328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2ae32c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2ae32cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2ae330: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2ae330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2ae334: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ae334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ae338: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x2ae338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2ae33c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2ae33cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2ae340: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x2ae340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2ae344: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2ae344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2ae348: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae34c: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x2ae34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2ae350: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2ae350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2ae354: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2ae354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2ae358: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2ae358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2ae35c: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x2ae35cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x2ae360: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ae360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae364: 0xa3a302ee  sb          $v1, 0x2EE($sp)
    ctx->pc = 0x2ae364u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 750), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ae368: 0xa3a002ed  sb          $zero, 0x2ED($sp)
    ctx->pc = 0x2ae368u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 749), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae36c: 0x93a202ef  lbu         $v0, 0x2EF($sp)
    ctx->pc = 0x2ae36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 751)));
    // 0x2ae370: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AE370u;
    {
        const bool branch_taken_0x2ae370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae370) {
            ctx->pc = 0x2AE3B4u;
            goto label_2ae3b4;
        }
    }
    ctx->pc = 0x2AE378u;
    // 0x2ae378: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x2ae378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x2ae37c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2AE37Cu;
    {
        const bool branch_taken_0x2ae37c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae37c) {
            ctx->pc = 0x2AE3B4u;
            goto label_2ae3b4;
        }
    }
    ctx->pc = 0x2AE384u;
    // 0x2ae384: 0x93a401b4  lbu         $a0, 0x1B4($sp)
    ctx->pc = 0x2ae384u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x2ae388: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2ae388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ae38c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AE38Cu;
    {
        const bool branch_taken_0x2ae38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae38c) {
            ctx->pc = 0x2AE3B4u;
            goto label_2ae3b4;
        }
    }
    ctx->pc = 0x2AE394u;
    // 0x2ae394: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x2ae394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2ae398: 0x8fa602d4  lw          $a2, 0x2D4($sp)
    ctx->pc = 0x2ae398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x2ae39c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ae39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae3a0: 0xc0abf4c  jal         func_2AFD30
    ctx->pc = 0x2AE3A0u;
    SET_GPR_U32(ctx, 31, 0x2AE3A8u);
    ctx->pc = 0x2AFD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFD30u, 0x2AE3A0u, 0x2AE3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE3A8u;
label_2ae3a8:
    // 0x2ae3a8: 0xafa202d4  sw          $v0, 0x2D4($sp)
    ctx->pc = 0x2ae3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
    // 0x2ae3ac: 0x10000565  b           . + 4 + (0x565 << 2)
    ctx->pc = 0x2AE3ACu;
    {
        const bool branch_taken_0x2ae3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae3ac) {
            ctx->pc = 0x2AF944u;
            goto label_2af944;
        }
    }
    ctx->pc = 0x2AE3B4u;
label_2ae3b4:
    // 0x2ae3b4: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x2ae3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x2ae3b8: 0x2c810008  sltiu       $at, $a0, 0x8
    ctx->pc = 0x2ae3b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2ae3bc: 0x10200545  beqz        $at, . + 4 + (0x545 << 2)
    ctx->pc = 0x2AE3BCu;
    {
        const bool branch_taken_0x2ae3bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae3bc) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AE3C4u;
    // 0x2ae3c4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2ae3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x2ae3c8: 0x24a58bf0  addiu       $a1, $a1, -0x7410
    ctx->pc = 0x2ae3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937584));
    // 0x2ae3cc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ae3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae3d0: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x2ae3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ae3d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ae3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ae3d8: 0x400008  jr          $v0
    ctx->pc = 0x2AE3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AE3E0u: goto label_2ae3e0;
            case 0x2AEDF0u: goto label_2aedf0;
            case 0x2AEFD4u: goto label_2aefd4;
            case 0x2AF128u: goto label_2af128;
            case 0x2AF2ACu: goto label_2af2ac;
            case 0x2AF45Cu: goto label_2af45c;
            case 0x2AF5A0u: goto label_2af5a0;
            case 0x2AF740u: goto label_2af740;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE3D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2AE3E0u;
label_2ae3e0:
    // 0x2ae3e0: 0x93a301b4  lbu         $v1, 0x1B4($sp)
    ctx->pc = 0x2ae3e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x2ae3e4: 0x1060009d  beqz        $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x2AE3E4u;
    {
        const bool branch_taken_0x2ae3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae3e4) {
            ctx->pc = 0x2AE65Cu;
            goto label_2ae65c;
        }
    }
    ctx->pc = 0x2AE3ECu;
    // 0x2ae3ec: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2ae3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2ae3f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae3f4: 0x14820073  bne         $a0, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2AE3F4u;
    {
        const bool branch_taken_0x2ae3f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ae3f4) {
            ctx->pc = 0x2AE5C4u;
            goto label_2ae5c4;
        }
    }
    ctx->pc = 0x2AE3FCu;
    // 0x2ae3fc: 0x83a40150  lb          $a0, 0x150($sp)
    ctx->pc = 0x2ae3fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2ae400: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x2ae400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2ae404: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2ae404u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2ae408: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x2ae408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2ae40c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2AE40Cu;
    {
        const bool branch_taken_0x2ae40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ae40c) {
            ctx->pc = 0x2AE43Cu;
            goto label_2ae43c;
        }
    }
    ctx->pc = 0x2AE414u;
    // 0x2ae414: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2ae414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2ae418: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2ae418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2ae41c: 0x2442ded0  addiu       $v0, $v0, -0x2130
    ctx->pc = 0x2ae41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958800));
    // 0x2ae420: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ae420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae424: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x2ae424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2ae428: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x2AE428u;
    SET_GPR_U32(ctx, 31, 0x2AE430u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2AE428u, 0x2AE430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE430u;
label_2ae430:
    // 0x2ae430: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ae430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae434: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2AE434u;
    {
        const bool branch_taken_0x2ae434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae434) {
            ctx->pc = 0x2AE640u;
            goto label_2ae640;
        }
    }
    ctx->pc = 0x2AE43Cu;
label_2ae43c:
    // 0x2ae43c: 0xafa002c8  sw          $zero, 0x2C8($sp)
    ctx->pc = 0x2ae43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 0));
    // 0x2ae440: 0xafa002c4  sw          $zero, 0x2C4($sp)
    ctx->pc = 0x2ae440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 0));
    // 0x2ae444: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x2ae444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2ae448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ae448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae44c: 0x2785a480  addiu       $a1, $gp, -0x5B80
    ctx->pc = 0x2ae44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943872));
    // 0x2ae450: 0x27a302c8  addiu       $v1, $sp, 0x2C8
    ctx->pc = 0x2ae450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
    // 0x2ae454: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2ae454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae458: 0x27a702c4  addiu       $a3, $sp, 0x2C4
    ctx->pc = 0x2ae458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
    // 0x2ae45c: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x2AE45Cu;
    SET_GPR_U32(ctx, 31, 0x2AE464u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x2AE45Cu, 0x2AE464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE464u;
label_2ae464:
    // 0x2ae464: 0x8fa202c4  lw          $v0, 0x2C4($sp)
    ctx->pc = 0x2ae464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x2ae468: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2ae468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ae46c: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x2ae46cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ae470: 0x1012  mflo        $v0
    ctx->pc = 0x2ae470u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2ae474: 0xafa202c0  sw          $v0, 0x2C0($sp)
    ctx->pc = 0x2ae474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 2));
    // 0x2ae478: 0x8fa302c4  lw          $v1, 0x2C4($sp)
    ctx->pc = 0x2ae478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x2ae47c: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x2ae47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2ae480: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ae480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae484: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x2ae484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ae488: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2ae488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ae48c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2ae48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ae490: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2ae490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ae494: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x2ae494u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ae498: 0xafa502bc  sw          $a1, 0x2BC($sp)
    ctx->pc = 0x2ae498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 5));
    // 0x2ae49c: 0x8fa202c8  lw          $v0, 0x2C8($sp)
    ctx->pc = 0x2ae49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x2ae4a0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2ae4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ae4a4: 0xafa402c8  sw          $a0, 0x2C8($sp)
    ctx->pc = 0x2ae4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 4));
    // 0x2ae4a8: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x2ae4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2ae4ac: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x2ae4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2ae4b0: 0xafa202c0  sw          $v0, 0x2C0($sp)
    ctx->pc = 0x2ae4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 2));
    // 0x2ae4b4: 0x8fa202bc  lw          $v0, 0x2BC($sp)
    ctx->pc = 0x2ae4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x2ae4b8: 0x2457ffff  addiu       $s7, $v0, -0x1
    ctx->pc = 0x2ae4b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ae4bc: 0xafb702bc  sw          $s7, 0x2BC($sp)
    ctx->pc = 0x2ae4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 23));
    // 0x2ae4c0: 0xafa002b8  sw          $zero, 0x2B8($sp)
    ctx->pc = 0x2ae4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 0));
    // 0x2ae4c4: 0xafa002b4  sw          $zero, 0x2B4($sp)
    ctx->pc = 0x2ae4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 0));
    // 0x2ae4c8: 0xafa002b0  sw          $zero, 0x2B0($sp)
    ctx->pc = 0x2ae4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 0));
    // 0x2ae4cc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2AE4CCu;
    {
        const bool branch_taken_0x2ae4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae4cc) {
            ctx->pc = 0x2AE564u;
            goto label_2ae564;
        }
    }
    ctx->pc = 0x2AE4D4u;
label_2ae4d4:
    // 0x2ae4d4: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x2ae4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2ae4d8: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x2ae4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2ae4dc: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x2ae4dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ae4e0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2AE4E0u;
    {
        const bool branch_taken_0x2ae4e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae4e0) {
            ctx->pc = 0x2AE514u;
            goto label_2ae514;
        }
    }
    ctx->pc = 0x2AE4E8u;
    // 0x2ae4e8: 0x8fa602b0  lw          $a2, 0x2B0($sp)
    ctx->pc = 0x2ae4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2ae4ec: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2ae4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ae4f0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2ae4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2ae4f4: 0x2484de00  addiu       $a0, $a0, -0x2200
    ctx->pc = 0x2ae4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958592));
    // 0x2ae4f8: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2ae4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ae4fc: 0x8fa202b4  lw          $v0, 0x2B4($sp)
    ctx->pc = 0x2ae4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
    // 0x2ae500: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ae500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ae504: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2ae504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae508: 0xafa402b4  sw          $a0, 0x2B4($sp)
    ctx->pc = 0x2ae508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 4));
    // 0x2ae50c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2AE50Cu;
    {
        const bool branch_taken_0x2ae50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae50c) {
            ctx->pc = 0x2AE534u;
            goto label_2ae534;
        }
    }
    ctx->pc = 0x2AE514u;
label_2ae514:
    // 0x2ae514: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x2ae514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2ae518: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x2ae518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2ae51c: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE51Cu;
    {
        const bool branch_taken_0x2ae51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ae51c) {
            ctx->pc = 0x2AE534u;
            goto label_2ae534;
        }
    }
    ctx->pc = 0x2AE524u;
    // 0x2ae524: 0x8fa202b4  lw          $v0, 0x2B4($sp)
    ctx->pc = 0x2ae524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
    // 0x2ae528: 0x8fa302bc  lw          $v1, 0x2BC($sp)
    ctx->pc = 0x2ae528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x2ae52c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ae52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae530: 0xafa202b4  sw          $v0, 0x2B4($sp)
    ctx->pc = 0x2ae530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 2));
label_2ae534:
    // 0x2ae534: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x2ae534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2ae538: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2ae538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae53c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2ae53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2ae540: 0x2442de00  addiu       $v0, $v0, -0x2200
    ctx->pc = 0x2ae540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958592));
    // 0x2ae544: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x2ae544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ae548: 0x8fa302b8  lw          $v1, 0x2B8($sp)
    ctx->pc = 0x2ae548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x2ae54c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2ae54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ae550: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2ae550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ae554: 0xafa202b8  sw          $v0, 0x2B8($sp)
    ctx->pc = 0x2ae554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 2));
    // 0x2ae558: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x2ae558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2ae55c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2ae55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ae560: 0xafa402b0  sw          $a0, 0x2B0($sp)
    ctx->pc = 0x2ae560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 4));
label_2ae564:
    // 0x2ae564: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x2ae564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2ae568: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x2ae568u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x2ae56c: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2AE56Cu;
    {
        const bool branch_taken_0x2ae56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae56c) {
            ctx->pc = 0x2AE4D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae4d4;
        }
    }
    ctx->pc = 0x2AE574u;
    // 0x2ae574: 0x8fa402b8  lw          $a0, 0x2B8($sp)
    ctx->pc = 0x2ae574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x2ae578: 0x8fa202c8  lw          $v0, 0x2C8($sp)
    ctx->pc = 0x2ae578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x2ae57c: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x2ae57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2ae580: 0x8fa302b4  lw          $v1, 0x2B4($sp)
    ctx->pc = 0x2ae580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
    // 0x2ae584: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2ae584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ae588: 0xafa402ac  sw          $a0, 0x2AC($sp)
    ctx->pc = 0x2ae588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 4));
    // 0x2ae58c: 0x8fa502ac  lw          $a1, 0x2AC($sp)
    ctx->pc = 0x2ae58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
    // 0x2ae590: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2ae590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ae594: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x2ae594u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ae598: 0x1012  mflo        $v0
    ctx->pc = 0x2ae598u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2ae59c: 0xafa202a8  sw          $v0, 0x2A8($sp)
    ctx->pc = 0x2ae59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
    // 0x2ae5a0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2ae5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2ae5a4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2ae5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2ae5a8: 0x24a5def0  addiu       $a1, $a1, -0x2110
    ctx->pc = 0x2ae5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958832));
    // 0x2ae5ac: 0x8fa602a8  lw          $a2, 0x2A8($sp)
    ctx->pc = 0x2ae5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x2ae5b0: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x2ae5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2ae5b4: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x2AE5B4u;
    SET_GPR_U32(ctx, 31, 0x2AE5BCu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2AE5B4u, 0x2AE5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE5BCu;
label_2ae5bc:
    // 0x2ae5bc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2AE5BCu;
    {
        const bool branch_taken_0x2ae5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae5bc) {
            ctx->pc = 0x2AE640u;
            goto label_2ae640;
        }
    }
    ctx->pc = 0x2AE5C4u;
label_2ae5c4:
    // 0x2ae5c4: 0x83a30150  lb          $v1, 0x150($sp)
    ctx->pc = 0x2ae5c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2ae5c8: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x2ae5c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ae5cc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2ae5ccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2ae5d0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2ae5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ae5d4: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AE5D4u;
    {
        const bool branch_taken_0x2ae5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ae5d4) {
            ctx->pc = 0x2AE5F4u;
            goto label_2ae5f4;
        }
    }
    ctx->pc = 0x2AE5DCu;
    // 0x2ae5dc: 0x83a20150  lb          $v0, 0x150($sp)
    ctx->pc = 0x2ae5dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2ae5e0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2ae5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2ae5e4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2ae5e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2ae5e8: 0x2406006d  addiu       $a2, $zero, 0x6D
    ctx->pc = 0x2ae5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x2ae5ec: 0x1466000c  bne         $v1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2AE5ECu;
    {
        const bool branch_taken_0x2ae5ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2ae5ec) {
            ctx->pc = 0x2AE620u;
            goto label_2ae620;
        }
    }
    ctx->pc = 0x2AE5F4u;
label_2ae5f4:
    // 0x2ae5f4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2ae5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2ae5f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ae5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae5fc: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2ae5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2ae600: 0x2442df20  addiu       $v0, $v0, -0x20E0
    ctx->pc = 0x2ae600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958880));
    // 0x2ae604: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ae604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae608: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x2ae608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2ae60c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x2AE60Cu;
    SET_GPR_U32(ctx, 31, 0x2AE614u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2AE60Cu, 0x2AE614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE614u;
label_2ae614:
    // 0x2ae614: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2ae614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2ae618: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2AE618u;
    {
        const bool branch_taken_0x2ae618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae618) {
            ctx->pc = 0x2AE640u;
            goto label_2ae640;
        }
    }
    ctx->pc = 0x2AE620u;
label_2ae620:
    // 0x2ae620: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x2ae620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2ae624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ae624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae628: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2ae628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2ae62c: 0x24a5df50  addiu       $a1, $a1, -0x20B0
    ctx->pc = 0x2ae62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958928));
    // 0x2ae630: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x2ae630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2ae634: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ae634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae638: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x2AE638u;
    SET_GPR_U32(ctx, 31, 0x2AE640u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2AE638u, 0x2AE640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE640u;
label_2ae640:
    // 0x2ae640: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2ae640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2ae644: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x2ae644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2ae648: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ae648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae64c: 0x27b00114  addiu       $s0, $sp, 0x114
    ctx->pc = 0x2ae64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x2ae650: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ae650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae654: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2AE654u;
    SET_GPR_U32(ctx, 31, 0x2AE65Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2AE654u, 0x2AE65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE65Cu;
label_2ae65c:
    // 0x2ae65c: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2ae65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2ae660: 0xa0800053  sb          $zero, 0x53($a0)
    ctx->pc = 0x2ae660u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 83), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae664: 0x93a201b4  lbu         $v0, 0x1B4($sp)
    ctx->pc = 0x2ae664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x2ae668: 0x14400129  bnez        $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x2AE668u;
    {
        const bool branch_taken_0x2ae668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae668) {
            ctx->pc = 0x2AEB10u;
            goto label_2aeb10;
        }
    }
    ctx->pc = 0x2AE670u;
    // 0x2ae670: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2ae670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae674: 0xc0ac1a4  jal         func_2B0690
    ctx->pc = 0x2AE674u;
    SET_GPR_U32(ctx, 31, 0x2AE67Cu);
    ctx->pc = 0x2B0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0690u, 0x2AE674u, 0x2AE67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE67Cu;
label_2ae67c:
    // 0x2ae67c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ae67cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae680: 0x8fa302cc  lw          $v1, 0x2CC($sp)
    ctx->pc = 0x2ae680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2ae684: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x2ae684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x2ae688: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2ae688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae68c: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x2ae68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2ae690: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ae690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae694: 0xc0ac1e8  jal         func_2B07A0
    ctx->pc = 0x2AE694u;
    SET_GPR_U32(ctx, 31, 0x2AE69Cu);
    ctx->pc = 0x2B07A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B07A0u, 0x2AE694u, 0x2AE69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE69Cu;
label_2ae69c:
    // 0x2ae69c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ae69cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae6a0: 0xafa302a4  sw          $v1, 0x2A4($sp)
    ctx->pc = 0x2ae6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 3));
    // 0x2ae6a4: 0x8fa502a4  lw          $a1, 0x2A4($sp)
    ctx->pc = 0x2ae6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x2ae6a8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE6A8u;
    {
        const bool branch_taken_0x2ae6a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae6a8) {
            ctx->pc = 0x2AE6B8u;
            goto label_2ae6b8;
        }
    }
    ctx->pc = 0x2AE6B0u;
    // 0x2ae6b0: 0x10000488  b           . + 4 + (0x488 << 2)
    ctx->pc = 0x2AE6B0u;
    {
        const bool branch_taken_0x2ae6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae6b0) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AE6B8u;
label_2ae6b8:
    // 0x2ae6b8: 0x93a20198  lbu         $v0, 0x198($sp)
    ctx->pc = 0x2ae6b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2ae6bc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2ae6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ae6c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae6c4: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AE6C4u;
    {
        const bool branch_taken_0x2ae6c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ae6c4) {
            ctx->pc = 0x2AE710u;
            goto label_2ae710;
        }
    }
    ctx->pc = 0x2AE6CCu;
    // 0x2ae6cc: 0x8fa402a4  lw          $a0, 0x2A4($sp)
    ctx->pc = 0x2ae6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x2ae6d0: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x2ae6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2ae6d4: 0x30640002  andi        $a0, $v1, 0x2
    ctx->pc = 0x2ae6d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2ae6d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE6D8u;
    {
        const bool branch_taken_0x2ae6d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae6d8) {
            ctx->pc = 0x2AE6F0u;
            goto label_2ae6f0;
        }
    }
    ctx->pc = 0x2AE6E0u;
    // 0x2ae6e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae6e4: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x2ae6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    // 0x2ae6e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE6E8u;
    {
        const bool branch_taken_0x2ae6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae6e8) {
            ctx->pc = 0x2AE6F4u;
            goto label_2ae6f4;
        }
    }
    ctx->pc = 0x2AE6F0u;
label_2ae6f0:
    // 0x2ae6f0: 0xafa00290  sw          $zero, 0x290($sp)
    ctx->pc = 0x2ae6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 0));
label_2ae6f4:
    // 0x2ae6f4: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x2ae6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2ae6f8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2ae6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2ae6fc: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2ae6fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ae700: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE700u;
    {
        const bool branch_taken_0x2ae700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae700) {
            ctx->pc = 0x2AE710u;
            goto label_2ae710;
        }
    }
    ctx->pc = 0x2AE708u;
    // 0x2ae708: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2AE708u;
    {
        const bool branch_taken_0x2ae708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae708) {
            ctx->pc = 0x2AE750u;
            goto label_2ae750;
        }
    }
    ctx->pc = 0x2AE710u;
label_2ae710:
    // 0x2ae710: 0x93a40198  lbu         $a0, 0x198($sp)
    ctx->pc = 0x2ae710u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2ae714: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2ae714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ae718: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2AE718u;
    {
        const bool branch_taken_0x2ae718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae718) {
            ctx->pc = 0x2AE750u;
            goto label_2ae750;
        }
    }
    ctx->pc = 0x2AE720u;
    // 0x2ae720: 0x8fa202a4  lw          $v0, 0x2A4($sp)
    ctx->pc = 0x2ae720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x2ae724: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2ae724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2ae728: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x2ae728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2ae72c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE72Cu;
    {
        const bool branch_taken_0x2ae72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae72c) {
            ctx->pc = 0x2AE744u;
            goto label_2ae744;
        }
    }
    ctx->pc = 0x2AE734u;
    // 0x2ae734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ae734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae738: 0xafa3028c  sw          $v1, 0x28C($sp)
    ctx->pc = 0x2ae738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 3));
    // 0x2ae73c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE73Cu;
    {
        const bool branch_taken_0x2ae73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae73c) {
            ctx->pc = 0x2AE748u;
            goto label_2ae748;
        }
    }
    ctx->pc = 0x2AE744u;
label_2ae744:
    // 0x2ae744: 0xafa0028c  sw          $zero, 0x28C($sp)
    ctx->pc = 0x2ae744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 0));
label_2ae748:
    // 0x2ae748: 0x8fa4028c  lw          $a0, 0x28C($sp)
    ctx->pc = 0x2ae748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x2ae74c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ae74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae750:
    // 0x2ae750: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2ae750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae754: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2ae754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ae758: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x2ae758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2ae75c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2ae75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ae760: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2ae760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae764: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2ae764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae768: 0x8fa502a4  lw          $a1, 0x2A4($sp)
    ctx->pc = 0x2ae768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x2ae76c: 0xc12b246  jal         func_4AC918
    ctx->pc = 0x2AE76Cu;
    SET_GPR_U32(ctx, 31, 0x2AE774u);
    ctx->pc = 0x4AC918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC918u, 0x2AE76Cu, 0x2AE774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE774u;
label_2ae774:
    // 0x2ae774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ae774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae778: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2ae778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2ae77c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ae77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae780: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AE780u;
    {
        const bool branch_taken_0x2ae780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ae780) {
            ctx->pc = 0x2AE7D4u;
            goto label_2ae7d4;
        }
    }
    ctx->pc = 0x2AE788u;
    // 0x2ae788: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ae788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae78c: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AE78Cu;
    {
        const bool branch_taken_0x2ae78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ae78c) {
            ctx->pc = 0x2AE7BCu;
            goto label_2ae7bc;
        }
    }
    ctx->pc = 0x2AE794u;
    // 0x2ae794: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE794u;
    {
        const bool branch_taken_0x2ae794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae794) {
            ctx->pc = 0x2AE7A4u;
            goto label_2ae7a4;
        }
    }
    ctx->pc = 0x2AE79Cu;
    // 0x2ae79c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2AE79Cu;
    {
        const bool branch_taken_0x2ae79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae79c) {
            ctx->pc = 0x2AE7ECu;
            goto label_2ae7ec;
        }
    }
    ctx->pc = 0x2AE7A4u;
label_2ae7a4:
    // 0x2ae7a4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2ae7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2ae7a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ae7a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae7ac: 0x0  nop
    ctx->pc = 0x2ae7acu;
    // NOP
    // 0x2ae7b0: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x2ae7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2ae7b4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2AE7B4u;
    {
        const bool branch_taken_0x2ae7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae7b4) {
            ctx->pc = 0x2AE7FCu;
            goto label_2ae7fc;
        }
    }
    ctx->pc = 0x2AE7BCu;
label_2ae7bc:
    // 0x2ae7bc: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x2ae7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x2ae7c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae7c4: 0x0  nop
    ctx->pc = 0x2ae7c4u;
    // NOP
    // 0x2ae7c8: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x2ae7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2ae7cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2AE7CCu;
    {
        const bool branch_taken_0x2ae7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae7cc) {
            ctx->pc = 0x2AE7FCu;
            goto label_2ae7fc;
        }
    }
    ctx->pc = 0x2AE7D4u;
label_2ae7d4:
    // 0x2ae7d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2ae7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2ae7d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae7dc: 0x0  nop
    ctx->pc = 0x2ae7dcu;
    // NOP
    // 0x2ae7e0: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x2ae7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2ae7e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE7E4u;
    {
        const bool branch_taken_0x2ae7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae7e4) {
            ctx->pc = 0x2AE7FCu;
            goto label_2ae7fc;
        }
    }
    ctx->pc = 0x2AE7ECu;
label_2ae7ec:
    // 0x2ae7ec: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x2ae7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x2ae7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae7f4: 0x0  nop
    ctx->pc = 0x2ae7f4u;
    // NOP
    // 0x2ae7f8: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x2ae7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_2ae7fc:
    // 0x2ae7fc: 0xc7a002a0  lwc1        $f0, 0x2A0($sp)
    ctx->pc = 0x2ae7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae800: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2ae800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae804: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ae804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ae808: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x2ae808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2ae80c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2ae80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ae810: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ae810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ae814: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2ae814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2ae818: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x2ae818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae81c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2ae81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae820: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2ae820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ae824: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2ae824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2ae828: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2ae828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae82c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ae82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ae830: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x2ae830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x2ae834: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2ae834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae838: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2ae838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ae83c: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x2ae83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2ae840: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2ae840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ae844: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ae844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae848: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2ae848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2ae84c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AE84Cu;
    {
        const bool branch_taken_0x2ae84c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae84c) {
            ctx->pc = 0x2AE880u;
            goto label_2ae880;
        }
    }
    ctx->pc = 0x2AE854u;
    // 0x2ae854: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2ae854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae858: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2ae858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ae85c: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x2ae85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2ae860: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x2ae860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ae864: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ae864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ae868: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2ae868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2ae86c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2ae86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ae870: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ae870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae874: 0xc7ac0194  lwc1        $f12, 0x194($sp)
    ctx->pc = 0x2ae874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae878: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x2AE878u;
    SET_GPR_U32(ctx, 31, 0x2AE880u);
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x2AE878u, 0x2AE880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE880u;
label_2ae880:
    // 0x2ae880: 0x93a20190  lbu         $v0, 0x190($sp)
    ctx->pc = 0x2ae880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2ae884: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2AE884u;
    {
        const bool branch_taken_0x2ae884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae884) {
            ctx->pc = 0x2AE908u;
            goto label_2ae908;
        }
    }
    ctx->pc = 0x2AE88Cu;
    // 0x2ae88c: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2ae88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae890: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ae890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ae894: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x2ae894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2ae898: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ae898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ae89c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ae89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae8a0: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x2ae8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2ae8a4: 0x34a20004  ori         $v0, $a1, 0x4
    ctx->pc = 0x2ae8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x2ae8a8: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x2ae8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x2ae8ac: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2ae8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae8b0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2ae8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ae8b4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2ae8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2ae8b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ae8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ae8bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ae8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae8c0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2ae8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2ae8c4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2AE8C4u;
    {
        const bool branch_taken_0x2ae8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae8c4) {
            ctx->pc = 0x2AE980u;
            goto label_2ae980;
        }
    }
    ctx->pc = 0x2AE8CCu;
    // 0x2ae8cc: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2ae8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae8d0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ae8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ae8d4: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x2ae8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2ae8d8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2ae8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ae8dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ae8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ae8e0: 0x8c500048  lw          $s0, 0x48($v0)
    ctx->pc = 0x2ae8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2ae8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ae8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae8e8: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x2ae8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ae8ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ae8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae8f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ae8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae8f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ae8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae8f8: 0xc126368  jal         func_498DA0
    ctx->pc = 0x2AE8F8u;
    SET_GPR_U32(ctx, 31, 0x2AE900u);
    ctx->pc = 0x498DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498DA0u, 0x2AE8F8u, 0x2AE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE900u;
label_2ae900:
    // 0x2ae900: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2AE900u;
    {
        const bool branch_taken_0x2ae900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae900) {
            ctx->pc = 0x2AE980u;
            goto label_2ae980;
        }
    }
    ctx->pc = 0x2AE908u;
label_2ae908:
    // 0x2ae908: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2ae908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae90c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ae90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ae910: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x2ae910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2ae914: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ae914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ae918: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ae918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ae91c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2ae91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2ae920: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x2ae920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2ae924: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x2ae924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ae928: 0xac65004c  sw          $a1, 0x4C($v1)
    ctx->pc = 0x2ae928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 5));
    // 0x2ae92c: 0x8fa602f0  lw          $a2, 0x2F0($sp)
    ctx->pc = 0x2ae92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae930: 0x113880  sll         $a3, $s1, 2
    ctx->pc = 0x2ae930u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ae934: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x2ae934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x2ae938: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2ae938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2ae93c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2ae93cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ae940: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x2ae940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2ae944: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ae944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ae948: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2ae948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2ae94c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AE94Cu;
    {
        const bool branch_taken_0x2ae94c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae94c) {
            ctx->pc = 0x2AE980u;
            goto label_2ae980;
        }
    }
    ctx->pc = 0x2AE954u;
    // 0x2ae954: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2ae954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae958: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ae958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ae95c: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x2ae95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2ae960: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ae960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ae964: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ae964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae968: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2ae968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2ae96c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ae96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ae970: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ae970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae974: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae978: 0xc126368  jal         func_498DA0
    ctx->pc = 0x2AE978u;
    SET_GPR_U32(ctx, 31, 0x2AE980u);
    ctx->pc = 0x498DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498DA0u, 0x2AE978u, 0x2AE980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE980u;
label_2ae980:
    // 0x2ae980: 0x93a40198  lbu         $a0, 0x198($sp)
    ctx->pc = 0x2ae980u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2ae984: 0x10800056  beqz        $a0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2AE984u;
    {
        const bool branch_taken_0x2ae984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae984) {
            ctx->pc = 0x2AEAE0u;
            goto label_2aeae0;
        }
    }
    ctx->pc = 0x2AE98Cu;
    // 0x2ae98c: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x2ae98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae990: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2ae990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ae994: 0x8ca4004c  lw          $a0, 0x4C($a1)
    ctx->pc = 0x2ae994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2ae998: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2ae998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ae99c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ae99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae9a0: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2ae9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2ae9a4: 0x27a5019c  addiu       $a1, $sp, 0x19C
    ctx->pc = 0x2ae9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x2ae9a8: 0xc041d58  jal         func_107560
    ctx->pc = 0x2AE9A8u;
    SET_GPR_U32(ctx, 31, 0x2AE9B0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2AE9A8u, 0x2AE9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE9B0u;
label_2ae9b0:
    // 0x2ae9b0: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2ae9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae9b4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ae9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ae9b8: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x2ae9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2ae9bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ae9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ae9c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ae9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ae9c4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2ae9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2ae9c8: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2AE9C8u;
    {
        const bool branch_taken_0x2ae9c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae9c8) {
            ctx->pc = 0x2AEA04u;
            goto label_2aea04;
        }
    }
    ctx->pc = 0x2AE9D0u;
    // 0x2ae9d0: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2ae9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2ae9d4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ae9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ae9d8: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x2ae9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2ae9dc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2ae9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ae9e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ae9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ae9e4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2ae9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2ae9e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae9ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ae9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae9f0: 0x27a2019c  addiu       $v0, $sp, 0x19C
    ctx->pc = 0x2ae9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x2ae9f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ae9f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae9f8: 0xc1262e8  jal         func_498BA0
    ctx->pc = 0x2AE9F8u;
    SET_GPR_U32(ctx, 31, 0x2AEA00u);
    ctx->pc = 0x498BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498BA0u, 0x2AE9F8u, 0x2AEA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA00u;
label_2aea00:
    // 0x2aea00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aea00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aea04:
    // 0x2aea04: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x2aea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aea08: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x2aea08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aea0c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2aea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2aea10: 0x8ca4004c  lw          $a0, 0x4C($a1)
    ctx->pc = 0x2aea10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2aea14: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2aea14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aea18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2aea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aea1c: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x2aea1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x2aea20: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2aea20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aea24: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2aea24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2aea28: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x2aea28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2aea2c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2aea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aea30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2aea30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aea34: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2aea34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2aea38: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2AEA38u;
    {
        const bool branch_taken_0x2aea38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aea38) {
            ctx->pc = 0x2AEA78u;
            goto label_2aea78;
        }
    }
    ctx->pc = 0x2AEA40u;
    // 0x2aea40: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2aea40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aea44: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x2aea44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2aea48: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x2aea48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2aea4c: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x2aea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2aea50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2aea50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aea54: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2aea54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2aea58: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2aea58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea5c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2aea5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aea60: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2aea60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aea64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aea68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2aea68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea6c: 0xc7ac01a8  lwc1        $f12, 0x1A8($sp)
    ctx->pc = 0x2aea6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aea70: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x2AEA70u;
    SET_GPR_U32(ctx, 31, 0x2AEA78u);
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x2AEA70u, 0x2AEA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA78u;
label_2aea78:
    // 0x2aea78: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x2aea78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aea7c: 0x8fa702f0  lw          $a3, 0x2F0($sp)
    ctx->pc = 0x2aea7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aea80: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2aea80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2aea84: 0x8ce3004c  lw          $v1, 0x4C($a3)
    ctx->pc = 0x2aea84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x2aea88: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2aea88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aea8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2aea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aea90: 0xe440008c  swc1        $f0, 0x8C($v0)
    ctx->pc = 0x2aea90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
    // 0x2aea94: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x2aea94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aea98: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2aea98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2aea9c: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x2aea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2aeaa0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2aeaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2aeaa4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2aeaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aeaa8: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2aeaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2aeaac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AEAACu;
    {
        const bool branch_taken_0x2aeaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aeaac) {
            ctx->pc = 0x2AEAE0u;
            goto label_2aeae0;
        }
    }
    ctx->pc = 0x2AEAB4u;
    // 0x2aeab4: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2aeab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aeab8: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x2aeab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2aeabc: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2aeabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2aeac0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2aeac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aeac4: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x2aeac4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aeac8: 0x8ee40048  lw          $a0, 0x48($s7)
    ctx->pc = 0x2aeac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
    // 0x2aeacc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2aeaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aead0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2aead0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aead4: 0xc7ac01ac  lwc1        $f12, 0x1AC($sp)
    ctx->pc = 0x2aead4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aead8: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x2AEAD8u;
    SET_GPR_U32(ctx, 31, 0x2AEAE0u);
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x2AEAD8u, 0x2AEAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEAE0u;
label_2aeae0:
    // 0x2aeae0: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2aeae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aeae4: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x2aeae4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2aeae8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2aeae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2aeaec: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x2aeaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2aeaf0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2aeaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aeaf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aeaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aeaf8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2aeaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeafc: 0xc12b1f2  jal         func_4AC7C8
    ctx->pc = 0x2AEAFCu;
    SET_GPR_U32(ctx, 31, 0x2AEB04u);
    ctx->pc = 0x4AC7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC7C8u, 0x2AEAFCu, 0x2AEB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB04u;
label_2aeb04:
    // 0x2aeb04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aeb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb08: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2AEB08u;
    {
        const bool branch_taken_0x2aeb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aeb08) {
            ctx->pc = 0x2AEDC8u;
            goto label_2aedc8;
        }
    }
    ctx->pc = 0x2AEB10u;
label_2aeb10:
    // 0x2aeb10: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2aeb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aeb14: 0x90430070  lbu         $v1, 0x70($v0)
    ctx->pc = 0x2aeb14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2aeb18: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AEB18u;
    {
        const bool branch_taken_0x2aeb18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aeb18) {
            ctx->pc = 0x2AEB34u;
            goto label_2aeb34;
        }
    }
    ctx->pc = 0x2AEB20u;
    // 0x2aeb20: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2aeb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aeb24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aeb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb28: 0xc0ac214  jal         func_2B0850
    ctx->pc = 0x2AEB28u;
    SET_GPR_U32(ctx, 31, 0x2AEB30u);
    ctx->pc = 0x2B0850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0850u, 0x2AEB28u, 0x2AEB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB30u;
label_2aeb30:
    // 0x2aeb30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aeb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aeb34:
    // 0x2aeb34: 0xa3a002ec  sb          $zero, 0x2EC($sp)
    ctx->pc = 0x2aeb34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 748), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aeb38: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x2aeb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aeb3c: 0x14a00047  bnez        $a1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2AEB3Cu;
    {
        const bool branch_taken_0x2aeb3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aeb3c) {
            ctx->pc = 0x2AEC5Cu;
            goto label_2aec5c;
        }
    }
    ctx->pc = 0x2AEB44u;
    // 0x2aeb44: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2aeb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aeb48: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x2aeb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2aeb4c: 0x1080003c  beqz        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2AEB4Cu;
    {
        const bool branch_taken_0x2aeb4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aeb4c) {
            ctx->pc = 0x2AEC40u;
            goto label_2aec40;
        }
    }
    ctx->pc = 0x2AEB54u;
    // 0x2aeb54: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2aeb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aeb58: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x2aeb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2aeb5c: 0xc0ab61c  jal         func_2AD870
    ctx->pc = 0x2AEB5Cu;
    SET_GPR_U32(ctx, 31, 0x2AEB64u);
    ctx->pc = 0x2AD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD870u, 0x2AEB5Cu, 0x2AEB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB64u;
label_2aeb64:
    // 0x2aeb64: 0xafa2029c  sw          $v0, 0x29C($sp)
    ctx->pc = 0x2aeb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
    // 0x2aeb68: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2AEB68u;
    {
        const bool branch_taken_0x2aeb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aeb68) {
            ctx->pc = 0x2AEC18u;
            goto label_2aec18;
        }
    }
    ctx->pc = 0x2AEB70u;
label_2aeb70:
    // 0x2aeb70: 0x8fa3029c  lw          $v1, 0x29C($sp)
    ctx->pc = 0x2aeb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x2aeb74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2aeb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aeb78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2aeb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aeb7c: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2aeb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aeb80: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x2aeb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x2aeb84: 0x14440021  bne         $v0, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2AEB84u;
    {
        const bool branch_taken_0x2aeb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2aeb84) {
            ctx->pc = 0x2AEC0Cu;
            goto label_2aec0c;
        }
    }
    ctx->pc = 0x2AEB8Cu;
    // 0x2aeb8c: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x2aeb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2aeb90: 0x8fa6029c  lw          $a2, 0x29C($sp)
    ctx->pc = 0x2aeb90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x2aeb94: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2aeb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2aeb98: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x2aeb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2aeb9c: 0x24650014  addiu       $a1, $v1, 0x14
    ctx->pc = 0x2aeb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x2aeba0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2AEBA0u;
    SET_GPR_U32(ctx, 31, 0x2AEBA8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2AEBA0u, 0x2AEBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBA8u;
label_2aeba8:
    // 0x2aeba8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEBA8u;
    {
        const bool branch_taken_0x2aeba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aeba8) {
            ctx->pc = 0x2AEBC0u;
            goto label_2aebc0;
        }
    }
    ctx->pc = 0x2AEBB0u;
    // 0x2aebb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aebb4: 0xa3a202ec  sb          $v0, 0x2EC($sp)
    ctx->pc = 0x2aebb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 748), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aebb8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2AEBB8u;
    {
        const bool branch_taken_0x2aebb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aebb8) {
            ctx->pc = 0x2AEC40u;
            goto label_2aec40;
        }
    }
    ctx->pc = 0x2AEBC0u;
label_2aebc0:
    // 0x2aebc0: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x2aebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x2aebc4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2aebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aebc8: 0x90a60059  lbu         $a2, 0x59($a1)
    ctx->pc = 0x2aebc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 89)));
    // 0x2aebcc: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x2aebccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2aebd0: 0x14e0001b  bnez        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x2AEBD0u;
    {
        const bool branch_taken_0x2aebd0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aebd0) {
            ctx->pc = 0x2AEC40u;
            goto label_2aec40;
        }
    }
    ctx->pc = 0x2AEBD8u;
    // 0x2aebd8: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x2aebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x2aebdc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2aebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aebe0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2aebe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2aebe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aebe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aebe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aebec: 0xc12bf0a  jal         func_4AFC28
    ctx->pc = 0x2AEBECu;
    SET_GPR_U32(ctx, 31, 0x2AEBF4u);
    ctx->pc = 0x4AFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFC28u, 0x2AEBECu, 0x2AEBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBF4u;
label_2aebf4:
    // 0x2aebf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aebf8: 0x8fa6029c  lw          $a2, 0x29C($sp)
    ctx->pc = 0x2aebf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x2aebfc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2aebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2aec00: 0xa0a30059  sb          $v1, 0x59($a1)
    ctx->pc = 0x2aec00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 89), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aec04: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2AEC04u;
    {
        const bool branch_taken_0x2aec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aec04) {
            ctx->pc = 0x2AEC40u;
            goto label_2aec40;
        }
    }
    ctx->pc = 0x2AEC0Cu;
label_2aec0c:
    // 0x2aec0c: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x2aec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x2aec10: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x2aec10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2aec14: 0xafa6029c  sw          $a2, 0x29C($sp)
    ctx->pc = 0x2aec14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 6));
label_2aec18:
    // 0x2aec18: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x2aec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x2aec1c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2aec1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2aec20: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2aec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aec24: 0x24450054  addiu       $a1, $v0, 0x54
    ctx->pc = 0x2aec24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2aec28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2aec28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec2c: 0xc0ab614  jal         func_2AD850
    ctx->pc = 0x2AEC2Cu;
    SET_GPR_U32(ctx, 31, 0x2AEC34u);
    ctx->pc = 0x2AD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD850u, 0x2AEC2Cu, 0x2AEC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEC34u;
label_2aec34:
    // 0x2aec34: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x2aec34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2aec38: 0x1462ffcd  bne         $v1, $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2AEC38u;
    {
        const bool branch_taken_0x2aec38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aec38) {
            ctx->pc = 0x2AEB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aeb70;
        }
    }
    ctx->pc = 0x2AEC40u;
label_2aec40:
    // 0x2aec40: 0x93a202ec  lbu         $v0, 0x2EC($sp)
    ctx->pc = 0x2aec40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 748)));
    // 0x2aec44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEC44u;
    {
        const bool branch_taken_0x2aec44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aec44) {
            ctx->pc = 0x2AEC5Cu;
            goto label_2aec5c;
        }
    }
    ctx->pc = 0x2AEC4Cu;
    // 0x2aec4c: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2aec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2aec50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2aec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aec54: 0x8fb002f0  lw          $s0, 0x2F0($sp)
    ctx->pc = 0x2aec54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aec58: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x2aec58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_2aec5c:
    // 0x2aec5c: 0x93a202ec  lbu         $v0, 0x2EC($sp)
    ctx->pc = 0x2aec5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 748)));
    // 0x2aec60: 0x1440031c  bnez        $v0, . + 4 + (0x31C << 2)
    ctx->pc = 0x2AEC60u;
    {
        const bool branch_taken_0x2aec60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aec60) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AEC68u;
    // 0x2aec68: 0xafa00298  sw          $zero, 0x298($sp)
    ctx->pc = 0x2aec68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 0));
    // 0x2aec6c: 0xafa00298  sw          $zero, 0x298($sp)
    ctx->pc = 0x2aec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 0));
    // 0x2aec70: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2AEC70u;
    {
        const bool branch_taken_0x2aec70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aec70) {
            ctx->pc = 0x2AECE0u;
            goto label_2aece0;
        }
    }
    ctx->pc = 0x2AEC78u;
label_2aec78:
    // 0x2aec78: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2aec78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aec7c: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x2aec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2aec80: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2aec80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aec84: 0x90820080  lbu         $v0, 0x80($a0)
    ctx->pc = 0x2aec84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2aec88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2aec88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aec8c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2AEC8Cu;
    {
        const bool branch_taken_0x2aec8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aec8c) {
            ctx->pc = 0x2AECCCu;
            goto label_2aeccc;
        }
    }
    ctx->pc = 0x2AEC94u;
    // 0x2aec94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2aec94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aec98: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2aec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aec9c: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x2aec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2aeca0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2aeca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aeca4: 0xa0a40080  sb          $a0, 0x80($a1)
    ctx->pc = 0x2aeca4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 128), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aeca8: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x2aeca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2aecac: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2aecacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2aecb0: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2aecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aecb4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2aecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2aecb8: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2aecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2aecbc: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2aecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2aecc0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2aecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2aecc4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2AECC4u;
    {
        const bool branch_taken_0x2aecc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aecc4) {
            ctx->pc = 0x2AECF0u;
            goto label_2aecf0;
        }
    }
    ctx->pc = 0x2AECCCu;
label_2aeccc:
    // 0x2aeccc: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x2aecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2aecd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2aecd4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2aecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2aecd8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2aecd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2aecdc: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x2aecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
label_2aece0:
    // 0x2aece0: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x2aece0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2aece4: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x2aece4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2aece8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2AECE8u;
    {
        const bool branch_taken_0x2aece8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aece8) {
            ctx->pc = 0x2AEC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aec78;
        }
    }
    ctx->pc = 0x2AECF0u;
label_2aecf0:
    // 0x2aecf0: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x2aecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2aecf4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2aecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aecf8: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AECF8u;
    {
        const bool branch_taken_0x2aecf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2aecf8) {
            ctx->pc = 0x2AED10u;
            goto label_2aed10;
        }
    }
    ctx->pc = 0x2AED00u;
    // 0x2aed00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aed00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed04: 0xa3a302ed  sb          $v1, 0x2ED($sp)
    ctx->pc = 0x2aed04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 749), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aed08: 0x100002f2  b           . + 4 + (0x2F2 << 2)
    ctx->pc = 0x2AED08u;
    {
        const bool branch_taken_0x2aed08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aed08) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AED10u;
label_2aed10:
    // 0x2aed10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aed10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed14: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x2aed14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x2aed18: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x2aed18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x2aed1c: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x2aed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x2aed20: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x2aed20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x2aed24: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x2aed24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x2aed28: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2aed28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2aed2c: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x2aed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
    // 0x2aed30: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x2aed30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aed34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aed34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed38: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AED38u;
    {
        const bool branch_taken_0x2aed38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aed38) {
            ctx->pc = 0x2AED48u;
            goto label_2aed48;
        }
    }
    ctx->pc = 0x2AED40u;
    // 0x2aed40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2aed40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aed44: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x2aed44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
label_2aed48:
    // 0x2aed48: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2aed48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aed4c: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x2aed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
    // 0x2aed50: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aed54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2aed54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed58: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AED58u;
    {
        const bool branch_taken_0x2aed58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2aed58) {
            ctx->pc = 0x2AED68u;
            goto label_2aed68;
        }
    }
    ctx->pc = 0x2AED60u;
    // 0x2aed60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2aed60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aed64: 0xafa500fc  sw          $a1, 0xFC($sp)
    ctx->pc = 0x2aed64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 5));
label_2aed68:
    // 0x2aed68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2aed68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed6c: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x2aed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x2aed70: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x2aed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2aed74: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x2aed74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2aed78: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x2aed78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x2aed7c: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2aed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2aed80: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2aed80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2aed84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2aed84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed88: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2aed88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2aed8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aed8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed90: 0xc12beca  jal         func_4AFB28
    ctx->pc = 0x2AED90u;
    SET_GPR_U32(ctx, 31, 0x2AED98u);
    ctx->pc = 0x4AFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB28u, 0x2AED90u, 0x2AED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AED98u;
label_2aed98:
    // 0x2aed98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aed98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aed9c: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2aed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aeda0: 0xa0820070  sb          $v0, 0x70($a0)
    ctx->pc = 0x2aeda0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aeda4: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x2aeda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aeda8: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x2aeda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2aedac: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2aedacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2aedb0: 0x93a30190  lbu         $v1, 0x190($sp)
    ctx->pc = 0x2aedb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2aedb4: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x2aedb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2aedb8: 0xa0a3005b  sb          $v1, 0x5B($a1)
    ctx->pc = 0x2aedb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 91), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aedbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aedbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aedc0: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x2aedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2aedc4: 0xa0430058  sb          $v1, 0x58($v0)
    ctx->pc = 0x2aedc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 88), (uint8_t)GPR_U32(ctx, 3));
label_2aedc8:
    // 0x2aedc8: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2aedc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aedcc: 0x24620054  addiu       $v0, $v1, 0x54
    ctx->pc = 0x2aedccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2aedd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aedd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aedd4: 0x27a502cc  addiu       $a1, $sp, 0x2CC
    ctx->pc = 0x2aedd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
    // 0x2aedd8: 0xc0abe6c  jal         func_2AF9B0
    ctx->pc = 0x2AEDD8u;
    SET_GPR_U32(ctx, 31, 0x2AEDE0u);
    ctx->pc = 0x2AF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF9B0u, 0x2AEDD8u, 0x2AEDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEDE0u;
label_2aede0:
    // 0x2aede0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aede0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aede4: 0xa3a002ee  sb          $zero, 0x2EE($sp)
    ctx->pc = 0x2aede4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 750), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aede8: 0x100002ba  b           . + 4 + (0x2BA << 2)
    ctx->pc = 0x2AEDE8u;
    {
        const bool branch_taken_0x2aede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aede8) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AEDF0u;
label_2aedf0:
    // 0x2aedf0: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2aedf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aedf4: 0x24430054  addiu       $v1, $v0, 0x54
    ctx->pc = 0x2aedf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2aedf8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2aedf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aedfc: 0xc0ab61c  jal         func_2AD870
    ctx->pc = 0x2AEDFCu;
    SET_GPR_U32(ctx, 31, 0x2AEE04u);
    ctx->pc = 0x2AD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD870u, 0x2AEDFCu, 0x2AEE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE04u;
label_2aee04:
    // 0x2aee04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aee04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee08: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2aee08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee0c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2AEE0Cu;
    {
        const bool branch_taken_0x2aee0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aee0c) {
            ctx->pc = 0x2AEFB0u;
            goto label_2aefb0;
        }
    }
    ctx->pc = 0x2AEE14u;
label_2aee14:
    // 0x2aee14: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2aee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aee18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2aee18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aee1c: 0x8fa401b8  lw          $a0, 0x1B8($sp)
    ctx->pc = 0x2aee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x2aee20: 0x14640061  bne         $v1, $a0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2AEE20u;
    {
        const bool branch_taken_0x2aee20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2aee20) {
            ctx->pc = 0x2AEFA8u;
            goto label_2aefa8;
        }
    }
    ctx->pc = 0x2AEE28u;
    // 0x2aee28: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2aee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aee2c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2aee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2aee30: 0x14600053  bnez        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x2AEE30u;
    {
        const bool branch_taken_0x2aee30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aee30) {
            ctx->pc = 0x2AEF80u;
            goto label_2aef80;
        }
    }
    ctx->pc = 0x2AEE38u;
    // 0x2aee38: 0xa3a002ea  sb          $zero, 0x2EA($sp)
    ctx->pc = 0x2aee38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 746), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aee3c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2aee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aee40: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2aee40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2aee44: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2aee44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2aee48: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2aee48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aee4c: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x2aee4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2aee50: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x2aee50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2aee54: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2aee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2aee58: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2aee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2aee5c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2AEE5Cu;
    {
        const bool branch_taken_0x2aee5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aee5c) {
            ctx->pc = 0x2AEE98u;
            goto label_2aee98;
        }
    }
    ctx->pc = 0x2AEE64u;
    // 0x2aee64: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2aee64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aee68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2aee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2aee6c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2aee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2aee70: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2aee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aee74: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x2aee74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2aee78: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2aee78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aee7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2aee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2aee80: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2aee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2aee84: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x2aee84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2aee88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AEE88u;
    {
        const bool branch_taken_0x2aee88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aee88) {
            ctx->pc = 0x2AEE98u;
            goto label_2aee98;
        }
    }
    ctx->pc = 0x2AEE90u;
    // 0x2aee90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aee90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aee94: 0xa3a202ea  sb          $v0, 0x2EA($sp)
    ctx->pc = 0x2aee94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 746), (uint8_t)GPR_U32(ctx, 2));
label_2aee98:
    // 0x2aee98: 0x93a202ea  lbu         $v0, 0x2EA($sp)
    ctx->pc = 0x2aee98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 746)));
    // 0x2aee9c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AEE9Cu;
    {
        const bool branch_taken_0x2aee9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aee9c) {
            ctx->pc = 0x2AEEF0u;
            goto label_2aeef0;
        }
    }
    ctx->pc = 0x2AEEA4u;
    // 0x2aeea4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2aeea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aeea8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2aeea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2aeeac: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2aeeacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2aeeb0: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2aeeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aeeb4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x2aeeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2aeeb8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2aeeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2aeebc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2aeebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aeec0: 0x8c500048  lw          $s0, 0x48($v0)
    ctx->pc = 0x2aeec0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2aeec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aeec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeec8: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x2aeec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2aeecc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2aeeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeed0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2aeed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aeed4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aeed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeed8: 0xc126482  jal         func_499208
    ctx->pc = 0x2AEED8u;
    SET_GPR_U32(ctx, 31, 0x2AEEE0u);
    ctx->pc = 0x499208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499208u, 0x2AEED8u, 0x2AEEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEEE0u;
label_2aeee0:
    // 0x2aeee0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2aeee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeee4: 0xafa70288  sw          $a3, 0x288($sp)
    ctx->pc = 0x2aeee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 7));
    // 0x2aeee8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2AEEE8u;
    {
        const bool branch_taken_0x2aeee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aeee8) {
            ctx->pc = 0x2AEF14u;
            goto label_2aef14;
        }
    }
    ctx->pc = 0x2AEEF0u;
label_2aeef0:
    // 0x2aeef0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2aeef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aeef4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2aeef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2aeef8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2aeef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2aeefc: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2aeefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aef00: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x2aef00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2aef04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2aef04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aef08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2aef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aef0c: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x2aef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2aef10: 0xafa40288  sw          $a0, 0x288($sp)
    ctx->pc = 0x2aef10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 4));
label_2aef14:
    // 0x2aef14: 0x8fa50288  lw          $a1, 0x288($sp)
    ctx->pc = 0x2aef14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x2aef18: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2aef18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aef1c: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x2aef1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2aef20: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2aef20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2aef24: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2aef24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2aef28: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2aef28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aef2c: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2aef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2aef30: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2aef30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2aef34: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2aef34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aef38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2aef38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2aef3c: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x2aef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x2aef40: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2aef40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aef44: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x2aef44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x2aef48: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2aef48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aef4c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2aef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2aef50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2aef50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2aef54: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2aef54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aef58: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x2aef58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2aef5c: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x2aef5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2aef60: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2aef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2aef64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aef64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aef68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef6c: 0xc12b1f2  jal         func_4AC7C8
    ctx->pc = 0x2AEF6Cu;
    SET_GPR_U32(ctx, 31, 0x2AEF74u);
    ctx->pc = 0x4AC7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC7C8u, 0x2AEF6Cu, 0x2AEF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF74u;
label_2aef74:
    // 0x2aef74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aef74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef78: 0x10000256  b           . + 4 + (0x256 << 2)
    ctx->pc = 0x2AEF78u;
    {
        const bool branch_taken_0x2aef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aef78) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AEF80u;
label_2aef80:
    // 0x2aef80: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2aef80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aef84: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2aef84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2aef88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2aef88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2aef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aef90: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2aef90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef94: 0xc12bf0a  jal         func_4AFC28
    ctx->pc = 0x2AEF94u;
    SET_GPR_U32(ctx, 31, 0x2AEF9Cu);
    ctx->pc = 0x4AFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFC28u, 0x2AEF94u, 0x2AEF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF9Cu;
label_2aef9c:
    // 0x2aef9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aef9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aefa0: 0x1000024c  b           . + 4 + (0x24C << 2)
    ctx->pc = 0x2AEFA0u;
    {
        const bool branch_taken_0x2aefa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aefa0) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AEFA8u;
label_2aefa8:
    // 0x2aefa8: 0x26820004  addiu       $v0, $s4, 0x4
    ctx->pc = 0x2aefa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2aefac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2aefacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aefb0:
    // 0x2aefb0: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2aefb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aefb4: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2aefb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2aefb8: 0xc0ab614  jal         func_2AD850
    ctx->pc = 0x2AEFB8u;
    SET_GPR_U32(ctx, 31, 0x2AEFC0u);
    ctx->pc = 0x2AD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD850u, 0x2AEFB8u, 0x2AEFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEFC0u;
label_2aefc0:
    // 0x2aefc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aefc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aefc4: 0x1685ff93  bne         $s4, $a1, . + 4 + (-0x6D << 2)
    ctx->pc = 0x2AEFC4u;
    {
        const bool branch_taken_0x2aefc4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 5));
        if (branch_taken_0x2aefc4) {
            ctx->pc = 0x2AEE14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aee14;
        }
    }
    ctx->pc = 0x2AEFCCu;
    // 0x2aefcc: 0x10000241  b           . + 4 + (0x241 << 2)
    ctx->pc = 0x2AEFCCu;
    {
        const bool branch_taken_0x2aefcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aefcc) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AEFD4u;
label_2aefd4:
    // 0x2aefd4: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2aefd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2aefd8: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2aefd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2aefdc: 0xc0ab61c  jal         func_2AD870
    ctx->pc = 0x2AEFDCu;
    SET_GPR_U32(ctx, 31, 0x2AEFE4u);
    ctx->pc = 0x2AD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD870u, 0x2AEFDCu, 0x2AEFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEFE4u;
label_2aefe4:
    // 0x2aefe4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2aefe4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aefe8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2AEFE8u;
    {
        const bool branch_taken_0x2aefe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aefe8) {
            ctx->pc = 0x2AF100u;
            goto label_2af100;
        }
    }
    ctx->pc = 0x2AEFF0u;
label_2aeff0:
    // 0x2aeff0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2aeff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2aeff4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2aeff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aeff8: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x2aeff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x2aeffc: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2AEFFCu;
    {
        const bool branch_taken_0x2aeffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aeffc) {
            ctx->pc = 0x2AF0FCu;
            goto label_2af0fc;
        }
    }
    ctx->pc = 0x2AF004u;
    // 0x2af004: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2af004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2af008: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2af008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2af00c: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2AF00Cu;
    {
        const bool branch_taken_0x2af00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af00c) {
            ctx->pc = 0x2AF0D8u;
            goto label_2af0d8;
        }
    }
    ctx->pc = 0x2AF014u;
    // 0x2af014: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2af014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2af018: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2af018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2af01c: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2af01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2af020: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2af020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2af024: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2af024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af028: 0x8fa602f0  lw          $a2, 0x2F0($sp)
    ctx->pc = 0x2af028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af02c: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x2af02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x2af030: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2af030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2af034: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2af034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2af038: 0xaca30060  sw          $v1, 0x60($a1)
    ctx->pc = 0x2af038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 3));
    // 0x2af03c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2af03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2af040: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2af040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2af044: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2af044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af048: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2af048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af04c: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x2af04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2af050: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2af050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2af054: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2af054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af058: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2af058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2af05c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AF05Cu;
    {
        const bool branch_taken_0x2af05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af05c) {
            ctx->pc = 0x2AF0A8u;
            goto label_2af0a8;
        }
    }
    ctx->pc = 0x2AF064u;
    // 0x2af064: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2af064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2af068: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2af068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2af06c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2af06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af070: 0x8fa602f0  lw          $a2, 0x2F0($sp)
    ctx->pc = 0x2af070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af074: 0x8cc5004c  lw          $a1, 0x4C($a2)
    ctx->pc = 0x2af074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x2af078: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2af078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2af07c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2af07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af080: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2af080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2af084: 0x8ca70048  lw          $a3, 0x48($a1)
    ctx->pc = 0x2af084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2af088: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2af088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af08c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2af08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2af090: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af098: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2af098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af09c: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x2af09cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2af0a0: 0xc12637e  jal         func_498DF8
    ctx->pc = 0x2AF0A0u;
    SET_GPR_U32(ctx, 31, 0x2AF0A8u);
    ctx->pc = 0x498DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498DF8u, 0x2AF0A0u, 0x2AF0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF0A8u;
label_2af0a8:
    // 0x2af0a8: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2af0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2af0ac: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2af0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2af0b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2af0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af0b4: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x2af0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af0b8: 0x8ca4004c  lw          $a0, 0x4C($a1)
    ctx->pc = 0x2af0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2af0bc: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2af0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2af0c0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2af0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2af0c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2af0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af0c8: 0xc12b1f2  jal         func_4AC7C8
    ctx->pc = 0x2AF0C8u;
    SET_GPR_U32(ctx, 31, 0x2AF0D0u);
    ctx->pc = 0x4AC7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC7C8u, 0x2AF0C8u, 0x2AF0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF0D0u;
label_2af0d0:
    // 0x2af0d0: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x2AF0D0u;
    {
        const bool branch_taken_0x2af0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af0d0) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AF0D8u;
label_2af0d8:
    // 0x2af0d8: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2af0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2af0dc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2af0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2af0e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2af0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af0e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2af0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af0e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af0ec: 0xc12bf0a  jal         func_4AFC28
    ctx->pc = 0x2AF0ECu;
    SET_GPR_U32(ctx, 31, 0x2AF0F4u);
    ctx->pc = 0x4AFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFC28u, 0x2AF0ECu, 0x2AF0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF0F4u;
label_2af0f4:
    // 0x2af0f4: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x2AF0F4u;
    {
        const bool branch_taken_0x2af0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af0f4) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AF0FCu;
label_2af0fc:
    // 0x2af0fc: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x2af0fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_2af100:
    // 0x2af100: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2af100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af104: 0x24850054  addiu       $a1, $a0, 0x54
    ctx->pc = 0x2af104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x2af108: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2af108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af10c: 0xc0ab614  jal         func_2AD850
    ctx->pc = 0x2AF10Cu;
    SET_GPR_U32(ctx, 31, 0x2AF114u);
    ctx->pc = 0x2AD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD850u, 0x2AF10Cu, 0x2AF114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF114u;
label_2af114:
    // 0x2af114: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2af114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af118: 0x16e6ffb5  bne         $s7, $a2, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2AF118u;
    {
        const bool branch_taken_0x2af118 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 6));
        if (branch_taken_0x2af118) {
            ctx->pc = 0x2AEFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aeff0;
        }
    }
    ctx->pc = 0x2AF120u;
    // 0x2af120: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x2AF120u;
    {
        const bool branch_taken_0x2af120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af120) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AF128u;
label_2af128:
    // 0x2af128: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2af128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af12c: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2af12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2af130: 0xc0ab61c  jal         func_2AD870
    ctx->pc = 0x2AF130u;
    SET_GPR_U32(ctx, 31, 0x2AF138u);
    ctx->pc = 0x2AD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD870u, 0x2AF130u, 0x2AF138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF138u;
label_2af138:
    // 0x2af138: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af13c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2af13cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af140: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2AF140u;
    {
        const bool branch_taken_0x2af140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af140) {
            ctx->pc = 0x2AF288u;
            goto label_2af288;
        }
    }
    ctx->pc = 0x2AF148u;
label_2af148:
    // 0x2af148: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2af148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2af14c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2af14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af150: 0x8fa401b8  lw          $a0, 0x1B8($sp)
    ctx->pc = 0x2af150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x2af154: 0x1464004a  bne         $v1, $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2AF154u;
    {
        const bool branch_taken_0x2af154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2af154) {
            ctx->pc = 0x2AF280u;
            goto label_2af280;
        }
    }
    ctx->pc = 0x2AF15Cu;
    // 0x2af15c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2af15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2af160: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2af160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2af164: 0x14a0002b  bnez        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2AF164u;
    {
        const bool branch_taken_0x2af164 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af164) {
            ctx->pc = 0x2AF214u;
            goto label_2af214;
        }
    }
    ctx->pc = 0x2AF16Cu;
    // 0x2af16c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2af16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2af170: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2af170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2af174: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2af174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af178: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2af178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af17c: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x2af17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2af180: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2af180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2af184: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2af184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af18c: 0xc12b1f2  jal         func_4AC7C8
    ctx->pc = 0x2AF18Cu;
    SET_GPR_U32(ctx, 31, 0x2AF194u);
    ctx->pc = 0x4AC7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC7C8u, 0x2AF18Cu, 0x2AF194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF194u;
label_2af194:
    // 0x2af194: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2af194u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af198: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2af198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2af19c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2af19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2af1a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2af1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af1a4: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2af1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af1a8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2af1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2af1ac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2af1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af1b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2af1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af1b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af1b8: 0xc12b246  jal         func_4AC918
    ctx->pc = 0x2AF1B8u;
    SET_GPR_U32(ctx, 31, 0x2AF1C0u);
    ctx->pc = 0x4AC918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC918u, 0x2AF1B8u, 0x2AF1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF1C0u;
label_2af1c0:
    // 0x2af1c0: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x2af1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2af1c4: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x2AF1C4u;
    {
        const bool branch_taken_0x2af1c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af1c4) {
            ctx->pc = 0x2AF1F4u;
            goto label_2af1f4;
        }
    }
    ctx->pc = 0x2AF1CCu;
    // 0x2af1cc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2af1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2af1d0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2af1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af1d4: 0xc0ab548  jal         func_2AD520
    ctx->pc = 0x2AF1D4u;
    SET_GPR_U32(ctx, 31, 0x2AF1DCu);
    ctx->pc = 0x2AD520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD520u, 0x2AF1D4u, 0x2AF1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF1DCu;
label_2af1dc:
    // 0x2af1dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af1e0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2af1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2af1e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2af1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af1e8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2AF1E8u;
    SET_GPR_U32(ctx, 31, 0x2AF1F0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2AF1E8u, 0x2AF1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF1F0u;
label_2af1f0:
    // 0x2af1f0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2af1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2af1f4:
    // 0x2af1f4: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2af1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af1f8: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2af1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2af1fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2af1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af200: 0xc0abf70  jal         func_2AFDC0
    ctx->pc = 0x2AF200u;
    SET_GPR_U32(ctx, 31, 0x2AF208u);
    ctx->pc = 0x2AFDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFDC0u, 0x2AF200u, 0x2AF208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF208u;
label_2af208:
    // 0x2af208: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af20c: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x2AF20Cu;
    {
        const bool branch_taken_0x2af20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af20c) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AF214u;
label_2af214:
    // 0x2af214: 0x8fa602f0  lw          $a2, 0x2F0($sp)
    ctx->pc = 0x2af214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af218: 0x90c70070  lbu         $a3, 0x70($a2)
    ctx->pc = 0x2af218u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x2af21c: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF21Cu;
    {
        const bool branch_taken_0x2af21c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af21c) {
            ctx->pc = 0x2AF238u;
            goto label_2af238;
        }
    }
    ctx->pc = 0x2AF224u;
    // 0x2af224: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2af224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af22c: 0xc0ac214  jal         func_2B0850
    ctx->pc = 0x2AF22Cu;
    SET_GPR_U32(ctx, 31, 0x2AF234u);
    ctx->pc = 0x2B0850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0850u, 0x2AF22Cu, 0x2AF234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF234u;
label_2af234:
    // 0x2af234: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2af234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2af238:
    // 0x2af238: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2af238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2af23c: 0x90820059  lbu         $v0, 0x59($a0)
    ctx->pc = 0x2af23cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 89)));
    // 0x2af240: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2af240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2af244: 0x144001a3  bnez        $v0, . + 4 + (0x1A3 << 2)
    ctx->pc = 0x2AF244u;
    {
        const bool branch_taken_0x2af244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af244) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AF24Cu;
    // 0x2af24c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2af24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2af250: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x2af250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2af254: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2af254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af258: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2af258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af25c: 0xc12bf0a  jal         func_4AFC28
    ctx->pc = 0x2AF25Cu;
    SET_GPR_U32(ctx, 31, 0x2AF264u);
    ctx->pc = 0x4AFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFC28u, 0x2AF25Cu, 0x2AF264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF264u;
label_2af264:
    // 0x2af264: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2af264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af268: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2af268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2af26c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2af26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2af270: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2af270u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2af274: 0xa0460059  sb          $a2, 0x59($v0)
    ctx->pc = 0x2af274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 89), (uint8_t)GPR_U32(ctx, 6));
    // 0x2af278: 0x10000196  b           . + 4 + (0x196 << 2)
    ctx->pc = 0x2AF278u;
    {
        const bool branch_taken_0x2af278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af278) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AF280u;
label_2af280:
    // 0x2af280: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x2af280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2af284: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2af284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2af288:
    // 0x2af288: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x2af288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af28c: 0x24a20054  addiu       $v0, $a1, 0x54
    ctx->pc = 0x2af28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x2af290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af294: 0xc0ab614  jal         func_2AD850
    ctx->pc = 0x2AF294u;
    SET_GPR_U32(ctx, 31, 0x2AF29Cu);
    ctx->pc = 0x2AD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD850u, 0x2AF294u, 0x2AF29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF29Cu;
label_2af29c:
    // 0x2af29c: 0x1662ffaa  bne         $s3, $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x2AF29Cu;
    {
        const bool branch_taken_0x2af29c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2af29c) {
            ctx->pc = 0x2AF148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af148;
        }
    }
    ctx->pc = 0x2AF2A4u;
    // 0x2af2a4: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x2AF2A4u;
    {
        const bool branch_taken_0x2af2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af2a4) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AF2ACu;
label_2af2ac:
    // 0x2af2ac: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2af2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af2b0: 0x24820054  addiu       $v0, $a0, 0x54
    ctx->pc = 0x2af2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x2af2b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af2b8: 0xc0ab61c  jal         func_2AD870
    ctx->pc = 0x2AF2B8u;
    SET_GPR_U32(ctx, 31, 0x2AF2C0u);
    ctx->pc = 0x2AD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD870u, 0x2AF2B8u, 0x2AF2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF2C0u;
label_2af2c0:
    // 0x2af2c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2af2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af2c4: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x2af2c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af2c8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2AF2C8u;
    {
        const bool branch_taken_0x2af2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af2c8) {
            ctx->pc = 0x2AF438u;
            goto label_2af438;
        }
    }
    ctx->pc = 0x2AF2D0u;
label_2af2d0:
    // 0x2af2d0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2af2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2af2d4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2af2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2af2d8: 0x14800050  bnez        $a0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2AF2D8u;
    {
        const bool branch_taken_0x2af2d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af2d8) {
            ctx->pc = 0x2AF41Cu;
            goto label_2af41c;
        }
    }
    ctx->pc = 0x2AF2E0u;
    // 0x2af2e0: 0xa3a002e9  sb          $zero, 0x2E9($sp)
    ctx->pc = 0x2af2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 745), (uint8_t)GPR_U32(ctx, 0));
    // 0x2af2e4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2af2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2af2e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2af2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2af2ec: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2af2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af2f0: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2af2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af2f4: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x2af2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2af2f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2af2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2af2fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2af2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af300: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x2af300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2af304: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AF304u;
    {
        const bool branch_taken_0x2af304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af304) {
            ctx->pc = 0x2AF348u;
            goto label_2af348;
        }
    }
    ctx->pc = 0x2AF30Cu;
    // 0x2af30c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2af30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2af310: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2af310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2af314: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2af314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af318: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2af318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af31c: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x2af31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2af320: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2af320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2af324: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2af324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2af328: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2af328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2af32c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2af32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2af330: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2af330u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2af334: 0x30440002  andi        $a0, $v0, 0x2
    ctx->pc = 0x2af334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2af338: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF338u;
    {
        const bool branch_taken_0x2af338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af338) {
            ctx->pc = 0x2AF348u;
            goto label_2af348;
        }
    }
    ctx->pc = 0x2AF340u;
    // 0x2af340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af344: 0xa3a202e9  sb          $v0, 0x2E9($sp)
    ctx->pc = 0x2af344u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 745), (uint8_t)GPR_U32(ctx, 2));
label_2af348:
    // 0x2af348: 0x93a202e9  lbu         $v0, 0x2E9($sp)
    ctx->pc = 0x2af348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 745)));
    // 0x2af34c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AF34Cu;
    {
        const bool branch_taken_0x2af34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af34c) {
            ctx->pc = 0x2AF39Cu;
            goto label_2af39c;
        }
    }
    ctx->pc = 0x2AF354u;
    // 0x2af354: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2af354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2af358: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2af358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2af35c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2af35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af360: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2af360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af364: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x2af364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2af368: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2af368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2af36c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2af36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af370: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2af370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2af374: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2af374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2af378: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af37c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2af37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af380: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2af380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af384: 0xc126482  jal         func_499208
    ctx->pc = 0x2AF384u;
    SET_GPR_U32(ctx, 31, 0x2AF38Cu);
    ctx->pc = 0x499208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499208u, 0x2AF384u, 0x2AF38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF38Cu;
label_2af38c:
    // 0x2af38c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af390: 0xafa50284  sw          $a1, 0x284($sp)
    ctx->pc = 0x2af390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 5));
    // 0x2af394: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2AF394u;
    {
        const bool branch_taken_0x2af394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af394) {
            ctx->pc = 0x2AF3C0u;
            goto label_2af3c0;
        }
    }
    ctx->pc = 0x2AF39Cu;
label_2af39c:
    // 0x2af39c: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x2af39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2af3a0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2af3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2af3a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2af3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af3a8: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2af3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af3ac: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x2af3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2af3b0: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2af3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2af3b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2af3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af3b8: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2af3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2af3bc: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x2af3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
label_2af3c0:
    // 0x2af3c0: 0x8fa40284  lw          $a0, 0x284($sp)
    ctx->pc = 0x2af3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x2af3c4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2af3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2af3c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2af3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2af3cc: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2af3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af3d0: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2af3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af3d4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2af3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2af3d8: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x2af3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2af3dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2af3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af3e0: 0xac440060  sw          $a0, 0x60($v0)
    ctx->pc = 0x2af3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 4));
    // 0x2af3e4: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x2af3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2af3e8: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x2af3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x2af3ec: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2af3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2af3f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2af3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2af3f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2af3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af3f8: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2af3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af3fc: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2af3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2af400: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2af400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af404: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2af404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af40c: 0xc12b1f2  jal         func_4AC7C8
    ctx->pc = 0x2AF40Cu;
    SET_GPR_U32(ctx, 31, 0x2AF414u);
    ctx->pc = 0x4AC7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC7C8u, 0x2AF40Cu, 0x2AF414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF414u;
label_2af414:
    // 0x2af414: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF414u;
    {
        const bool branch_taken_0x2af414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af414) {
            ctx->pc = 0x2AF430u;
            goto label_2af430;
        }
    }
    ctx->pc = 0x2AF41Cu;
label_2af41c:
    // 0x2af41c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2af41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2af420: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2af420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2af424: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2af424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2af428: 0xc12bf0a  jal         func_4AFC28
    ctx->pc = 0x2AF428u;
    SET_GPR_U32(ctx, 31, 0x2AF430u);
    ctx->pc = 0x4AFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFC28u, 0x2AF428u, 0x2AF430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF430u;
label_2af430:
    // 0x2af430: 0x26c40004  addiu       $a0, $s6, 0x4
    ctx->pc = 0x2af430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x2af434: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2af434u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2af438:
    // 0x2af438: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x2af438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af43c: 0x24a60054  addiu       $a2, $a1, 0x54
    ctx->pc = 0x2af43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x2af440: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2af440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af444: 0xc0ab614  jal         func_2AD850
    ctx->pc = 0x2AF444u;
    SET_GPR_U32(ctx, 31, 0x2AF44Cu);
    ctx->pc = 0x2AD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD850u, 0x2AF444u, 0x2AF44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF44Cu;
label_2af44c:
    // 0x2af44c: 0x16c2ffa0  bne         $s6, $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x2AF44Cu;
    {
        const bool branch_taken_0x2af44c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x2af44c) {
            ctx->pc = 0x2AF2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af2d0;
        }
    }
    ctx->pc = 0x2AF454u;
    // 0x2af454: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x2AF454u;
    {
        const bool branch_taken_0x2af454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af454) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AF45Cu;
label_2af45c:
    // 0x2af45c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2af45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af460: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2af460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2af464: 0xc0ab61c  jal         func_2AD870
    ctx->pc = 0x2AF464u;
    SET_GPR_U32(ctx, 31, 0x2AF46Cu);
    ctx->pc = 0x2AD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD870u, 0x2AF464u, 0x2AF46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF46Cu;
label_2af46c:
    // 0x2af46c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2af46cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af470: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2AF470u;
    {
        const bool branch_taken_0x2af470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af470) {
            ctx->pc = 0x2AF578u;
            goto label_2af578;
        }
    }
    ctx->pc = 0x2AF478u;
label_2af478:
    // 0x2af478: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2af478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2af47c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2af47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2af480: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2AF480u;
    {
        const bool branch_taken_0x2af480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af480) {
            ctx->pc = 0x2AF550u;
            goto label_2af550;
        }
    }
    ctx->pc = 0x2AF488u;
    // 0x2af488: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2af488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2af48c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2af48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2af490: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2af490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2af494: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2af494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2af498: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2af498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af49c: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2af49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af4a0: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2af4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2af4a4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2af4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af4a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2af4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2af4ac: 0xac450060  sw          $a1, 0x60($v0)
    ctx->pc = 0x2af4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 5));
    // 0x2af4b0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2af4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2af4b4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2af4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2af4b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2af4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af4bc: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2af4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af4c0: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2af4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2af4c4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2af4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af4c8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2af4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2af4cc: 0x8e060048  lw          $a2, 0x48($s0)
    ctx->pc = 0x2af4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2af4d0: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AF4D0u;
    {
        const bool branch_taken_0x2af4d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af4d0) {
            ctx->pc = 0x2AF514u;
            goto label_2af514;
        }
    }
    ctx->pc = 0x2AF4D8u;
    // 0x2af4d8: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x2af4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2af4dc: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2af4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2af4e0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2af4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af4e4: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2af4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af4e8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x2af4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2af4ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2af4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2af4f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2af4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af4f4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2af4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2af4f8: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2af4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2af4fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2af4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2af500: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2af500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af504: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x2af504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2af508: 0xc12637e  jal         func_498DF8
    ctx->pc = 0x2AF508u;
    SET_GPR_U32(ctx, 31, 0x2AF510u);
    ctx->pc = 0x498DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498DF8u, 0x2AF508u, 0x2AF510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF510u;
label_2af510:
    // 0x2af510: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2af510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2af514:
    // 0x2af514: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2af514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2af518: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2af518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2af51c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2af51cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af520: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2af520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af524: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2af524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2af528: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2af528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2af52c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2af52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2af530: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af53c: 0xc12b1f2  jal         func_4AC7C8
    ctx->pc = 0x2AF53Cu;
    SET_GPR_U32(ctx, 31, 0x2AF544u);
    ctx->pc = 0x4AC7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC7C8u, 0x2AF53Cu, 0x2AF544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF544u;
label_2af544:
    // 0x2af544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af548: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF548u;
    {
        const bool branch_taken_0x2af548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af548) {
            ctx->pc = 0x2AF570u;
            goto label_2af570;
        }
    }
    ctx->pc = 0x2AF550u;
label_2af550:
    // 0x2af550: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x2af550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2af554: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x2af554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2af558: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2af558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af55c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2af55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af560: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af564: 0xc12bf0a  jal         func_4AFC28
    ctx->pc = 0x2AF564u;
    SET_GPR_U32(ctx, 31, 0x2AF56Cu);
    ctx->pc = 0x4AFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFC28u, 0x2AF564u, 0x2AF56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF56Cu;
label_2af56c:
    // 0x2af56c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2af570:
    // 0x2af570: 0x27c40004  addiu       $a0, $fp, 0x4
    ctx->pc = 0x2af570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x2af574: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2af574u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2af578:
    // 0x2af578: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x2af578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af57c: 0x24a30054  addiu       $v1, $a1, 0x54
    ctx->pc = 0x2af57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x2af580: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2af580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af584: 0xc0ab614  jal         func_2AD850
    ctx->pc = 0x2AF584u;
    SET_GPR_U32(ctx, 31, 0x2AF58Cu);
    ctx->pc = 0x2AD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD850u, 0x2AF584u, 0x2AF58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF58Cu;
label_2af58c:
    // 0x2af58c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af590: 0x17c4ffb9  bne         $fp, $a0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x2AF590u;
    {
        const bool branch_taken_0x2af590 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 4));
        if (branch_taken_0x2af590) {
            ctx->pc = 0x2AF478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af478;
        }
    }
    ctx->pc = 0x2AF598u;
    // 0x2af598: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x2AF598u;
    {
        const bool branch_taken_0x2af598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af598) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AF5A0u;
label_2af5a0:
    // 0x2af5a0: 0xa3a002eb  sb          $zero, 0x2EB($sp)
    ctx->pc = 0x2af5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 747), (uint8_t)GPR_U32(ctx, 0));
    // 0x2af5a4: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x2af5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2af5a8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x2af5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2af5ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF5ACu;
    {
        const bool branch_taken_0x2af5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af5ac) {
            ctx->pc = 0x2AF5BCu;
            goto label_2af5bc;
        }
    }
    ctx->pc = 0x2AF5B4u;
    // 0x2af5b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2af5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af5b8: 0xa3a402eb  sb          $a0, 0x2EB($sp)
    ctx->pc = 0x2af5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 747), (uint8_t)GPR_U32(ctx, 4));
label_2af5bc:
    // 0x2af5bc: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x2af5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af5c0: 0x24a20054  addiu       $v0, $a1, 0x54
    ctx->pc = 0x2af5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x2af5c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5c8: 0xc0ab61c  jal         func_2AD870
    ctx->pc = 0x2AF5C8u;
    SET_GPR_U32(ctx, 31, 0x2AF5D0u);
    ctx->pc = 0x2AD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD870u, 0x2AF5C8u, 0x2AF5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF5D0u;
label_2af5d0:
    // 0x2af5d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2af5d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5d8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2AF5D8u;
    {
        const bool branch_taken_0x2af5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af5d8) {
            ctx->pc = 0x2AF71Cu;
            goto label_2af71c;
        }
    }
    ctx->pc = 0x2AF5E0u;
label_2af5e0:
    // 0x2af5e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2af5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af5e4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2af5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2af5e8: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2AF5E8u;
    {
        const bool branch_taken_0x2af5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af5e8) {
            ctx->pc = 0x2AF688u;
            goto label_2af688;
        }
    }
    ctx->pc = 0x2AF5F0u;
    // 0x2af5f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2af5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af5f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2af5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2af5f8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2af5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2af5fc: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2af5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af600: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2af600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2af604: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2af604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2af608: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2af608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af60c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af610: 0xc12b1f2  jal         func_4AC7C8
    ctx->pc = 0x2AF610u;
    SET_GPR_U32(ctx, 31, 0x2AF618u);
    ctx->pc = 0x4AC7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC7C8u, 0x2AF610u, 0x2AF618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF618u;
label_2af618:
    // 0x2af618: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2af618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af61c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2af61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2af620: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2af620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2af624: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2af624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af628: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x2af628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2af62c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2af62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2af630: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2af630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af638: 0xc12b246  jal         func_4AC918
    ctx->pc = 0x2AF638u;
    SET_GPR_U32(ctx, 31, 0x2AF640u);
    ctx->pc = 0x4AC918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC918u, 0x2AF638u, 0x2AF640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF640u;
label_2af640:
    // 0x2af640: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2af640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af644: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AF644u;
    {
        const bool branch_taken_0x2af644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af644) {
            ctx->pc = 0x2AF668u;
            goto label_2af668;
        }
    }
    ctx->pc = 0x2AF64Cu;
    // 0x2af64c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2af64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af650: 0xc0ab548  jal         func_2AD520
    ctx->pc = 0x2AF650u;
    SET_GPR_U32(ctx, 31, 0x2AF658u);
    ctx->pc = 0x2AD520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD520u, 0x2AF650u, 0x2AF658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF658u;
label_2af658:
    // 0x2af658: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2af658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af65c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2AF65Cu;
    SET_GPR_U32(ctx, 31, 0x2AF664u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2AF65Cu, 0x2AF664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF664u;
label_2af664:
    // 0x2af664: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2af664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2af668:
    // 0x2af668: 0x8fa302f0  lw          $v1, 0x2F0($sp)
    ctx->pc = 0x2af668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af66c: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x2af66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2af670: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2af670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af674: 0xc0abf70  jal         func_2AFDC0
    ctx->pc = 0x2AF674u;
    SET_GPR_U32(ctx, 31, 0x2AF67Cu);
    ctx->pc = 0x2AFDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFDC0u, 0x2AF674u, 0x2AF67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF67Cu;
label_2af67c:
    // 0x2af67c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2af67cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af680: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2AF680u;
    {
        const bool branch_taken_0x2af680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af680) {
            ctx->pc = 0x2AF71Cu;
            goto label_2af71c;
        }
    }
    ctx->pc = 0x2AF688u;
label_2af688:
    // 0x2af688: 0x8fa602f0  lw          $a2, 0x2F0($sp)
    ctx->pc = 0x2af688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af68c: 0x90c50070  lbu         $a1, 0x70($a2)
    ctx->pc = 0x2af68cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x2af690: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF690u;
    {
        const bool branch_taken_0x2af690 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af690) {
            ctx->pc = 0x2AF6ACu;
            goto label_2af6ac;
        }
    }
    ctx->pc = 0x2AF698u;
    // 0x2af698: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2af698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af69c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af6a0: 0xc0ac214  jal         func_2B0850
    ctx->pc = 0x2AF6A0u;
    SET_GPR_U32(ctx, 31, 0x2AF6A8u);
    ctx->pc = 0x2B0850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0850u, 0x2AF6A0u, 0x2AF6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF6A8u;
label_2af6a8:
    // 0x2af6a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2af6ac:
    // 0x2af6ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2af6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af6b0: 0x90670059  lbu         $a3, 0x59($v1)
    ctx->pc = 0x2af6b0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 89)));
    // 0x2af6b4: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2af6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2af6b8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AF6B8u;
    {
        const bool branch_taken_0x2af6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af6b8) {
            ctx->pc = 0x2AF714u;
            goto label_2af714;
        }
    }
    ctx->pc = 0x2AF6C0u;
    // 0x2af6c0: 0x93a202eb  lbu         $v0, 0x2EB($sp)
    ctx->pc = 0x2af6c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 747)));
    // 0x2af6c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF6C4u;
    {
        const bool branch_taken_0x2af6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af6c4) {
            ctx->pc = 0x2AF6E4u;
            goto label_2af6e4;
        }
    }
    ctx->pc = 0x2AF6CCu;
    // 0x2af6cc: 0x8fa702cc  lw          $a3, 0x2CC($sp)
    ctx->pc = 0x2af6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2af6d0: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x2af6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x2af6d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2af6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af6d8: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x2af6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2af6dc: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF6DCu;
    {
        const bool branch_taken_0x2af6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2af6dc) {
            ctx->pc = 0x2AF6F0u;
            goto label_2af6f0;
        }
    }
    ctx->pc = 0x2AF6E4u;
label_2af6e4:
    // 0x2af6e4: 0x93a202eb  lbu         $v0, 0x2EB($sp)
    ctx->pc = 0x2af6e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 747)));
    // 0x2af6e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AF6E8u;
    {
        const bool branch_taken_0x2af6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af6e8) {
            ctx->pc = 0x2AF714u;
            goto label_2af714;
        }
    }
    ctx->pc = 0x2AF6F0u;
label_2af6f0:
    // 0x2af6f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2af6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af6f4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2af6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2af6f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2af6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af6fc: 0xc12bf0a  jal         func_4AFC28
    ctx->pc = 0x2AF6FCu;
    SET_GPR_U32(ctx, 31, 0x2AF704u);
    ctx->pc = 0x4AFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFC28u, 0x2AF6FCu, 0x2AF704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF704u;
label_2af704:
    // 0x2af704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af708: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2af708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af70c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2af70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af710: 0xa0450059  sb          $a1, 0x59($v0)
    ctx->pc = 0x2af710u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 89), (uint8_t)GPR_U32(ctx, 5));
label_2af714:
    // 0x2af714: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x2af714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2af718: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2af718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2af71c:
    // 0x2af71c: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x2af71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af720: 0x24a20054  addiu       $v0, $a1, 0x54
    ctx->pc = 0x2af720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x2af724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af728: 0xc0ab614  jal         func_2AD850
    ctx->pc = 0x2AF728u;
    SET_GPR_U32(ctx, 31, 0x2AF730u);
    ctx->pc = 0x2AD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD850u, 0x2AF728u, 0x2AF730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF730u;
label_2af730:
    // 0x2af730: 0x1642ffab  bne         $s2, $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x2AF730u;
    {
        const bool branch_taken_0x2af730 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2af730) {
            ctx->pc = 0x2AF5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af5e0;
        }
    }
    ctx->pc = 0x2AF738u;
    // 0x2af738: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2AF738u;
    {
        const bool branch_taken_0x2af738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af738) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AF740u;
label_2af740:
    // 0x2af740: 0x8fb702f0  lw          $s7, 0x2F0($sp)
    ctx->pc = 0x2af740u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af744: 0x26e40054  addiu       $a0, $s7, 0x54
    ctx->pc = 0x2af744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 84));
    // 0x2af748: 0xc0ab61c  jal         func_2AD870
    ctx->pc = 0x2AF748u;
    SET_GPR_U32(ctx, 31, 0x2AF750u);
    ctx->pc = 0x2AD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD870u, 0x2AF748u, 0x2AF750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF750u;
label_2af750:
    // 0x2af750: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af754: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2af754u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af758: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2AF758u;
    {
        const bool branch_taken_0x2af758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af758) {
            ctx->pc = 0x2AF8BCu;
            goto label_2af8bc;
        }
    }
    ctx->pc = 0x2AF760u;
label_2af760:
    // 0x2af760: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x2af760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2af764: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2af764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2af768: 0x8fa401b8  lw          $a0, 0x1B8($sp)
    ctx->pc = 0x2af768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x2af76c: 0x14440051  bne         $v0, $a0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2AF76Cu;
    {
        const bool branch_taken_0x2af76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2af76c) {
            ctx->pc = 0x2AF8B4u;
            goto label_2af8b4;
        }
    }
    ctx->pc = 0x2AF774u;
    // 0x2af774: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2af774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2af778: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2af778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2af77c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2AF77Cu;
    {
        const bool branch_taken_0x2af77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af77c) {
            ctx->pc = 0x2AF858u;
            goto label_2af858;
        }
    }
    ctx->pc = 0x2AF784u;
    // 0x2af784: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2af784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2af788: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x2af788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2af78c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2af78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af790: 0x8f85bbb4  lw          $a1, -0x444C($gp)
    ctx->pc = 0x2af790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x2af794: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x2af794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2af798: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2af798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2af79c: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2af79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af7a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2af7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af7a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2af7a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2af7a8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2af7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2af7ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2af7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2af7b0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2af7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af7b4: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2af7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af7b8: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x2af7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2af7bc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2af7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2af7c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2af7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2af7c4: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x2af7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x2af7c8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2af7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2af7cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2af7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2af7d0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2af7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2af7d4: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2af7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af7d8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x2af7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2af7dc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2af7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2af7e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2af7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2af7e4: 0x8c460048  lw          $a2, 0x48($v0)
    ctx->pc = 0x2af7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2af7e8: 0x10c0003a  beqz        $a2, . + 4 + (0x3A << 2)
    ctx->pc = 0x2AF7E8u;
    {
        const bool branch_taken_0x2af7e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af7e8) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AF7F0u;
    // 0x2af7f0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2af7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2af7f4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2af7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2af7f8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2af7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af7fc: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2af7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af800: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2af800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2af804: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x2af804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2af808: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2af808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2af80c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x2af80cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2af810: 0x8cc70054  lw          $a3, 0x54($a2)
    ctx->pc = 0x2af810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x2af814: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2af814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2af818: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x2af818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x2af81c: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x2af81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2af820: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2af820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2af824: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2af824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af828: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2af828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af82c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2af82cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2af830: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2af830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2af834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af838: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2af838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2af83c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2af83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af840: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2af840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af844: 0xc1263d6  jal         func_498F58
    ctx->pc = 0x2AF844u;
    SET_GPR_U32(ctx, 31, 0x2AF84Cu);
    ctx->pc = 0x498F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F58u, 0x2AF844u, 0x2AF84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF84Cu;
label_2af84c:
    // 0x2af84c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2af84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af850: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2AF850u;
    {
        const bool branch_taken_0x2af850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af850) {
            ctx->pc = 0x2AF8D4u;
            goto label_2af8d4;
        }
    }
    ctx->pc = 0x2AF858u;
label_2af858:
    // 0x2af858: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2af858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2af85c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x2af85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x2af860: 0x8fa602f0  lw          $a2, 0x2F0($sp)
    ctx->pc = 0x2af860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af864: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2af864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2af868: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2af868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2af86c: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x2af86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x2af870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af874: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2af874u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2af878: 0x24450014  addiu       $a1, $v0, 0x14
    ctx->pc = 0x2af878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2af87c: 0xc08f790  jal         func_23DE40
    ctx->pc = 0x2AF87Cu;
    SET_GPR_U32(ctx, 31, 0x2AF884u);
    ctx->pc = 0x23DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DE40u, 0x2AF87Cu, 0x2AF884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF884u;
label_2af884:
    // 0x2af884: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2af884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2af888: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2af888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2af88c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x2af88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x2af890: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2af890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2af894: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2af894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2af898: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2af898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2af89c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2af89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2af8a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2af8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8a4: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x2af8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2af8a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2af8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8ac: 0xc12bf22  jal         func_4AFC88
    ctx->pc = 0x2AF8ACu;
    SET_GPR_U32(ctx, 31, 0x2AF8B4u);
    ctx->pc = 0x4AFC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFC88u, 0x2AF8ACu, 0x2AF8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF8B4u;
label_2af8b4:
    // 0x2af8b4: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x2af8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2af8b8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2af8b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2af8bc:
    // 0x2af8bc: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2af8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2af8c0: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2af8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2af8c4: 0xc0ab614  jal         func_2AD850
    ctx->pc = 0x2AF8C4u;
    SET_GPR_U32(ctx, 31, 0x2AF8CCu);
    ctx->pc = 0x2AD850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD850u, 0x2AF8C4u, 0x2AF8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF8CCu;
label_2af8cc:
    // 0x2af8cc: 0x16a2ffa4  bne         $s5, $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x2AF8CCu;
    {
        const bool branch_taken_0x2af8cc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2af8cc) {
            ctx->pc = 0x2AF760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af760;
        }
    }
    ctx->pc = 0x2AF8D4u;
label_2af8d4:
    // 0x2af8d4: 0x93a302ed  lbu         $v1, 0x2ED($sp)
    ctx->pc = 0x2af8d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 749)));
    // 0x2af8d8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF8D8u;
    {
        const bool branch_taken_0x2af8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af8d8) {
            ctx->pc = 0x2AF8F4u;
            goto label_2af8f4;
        }
    }
    ctx->pc = 0x2AF8E0u;
    // 0x2af8e0: 0x8fa402d4  lw          $a0, 0x2D4($sp)
    ctx->pc = 0x2af8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x2af8e4: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x2af8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2af8e8: 0xafa202d4  sw          $v0, 0x2D4($sp)
    ctx->pc = 0x2af8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
    // 0x2af8ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF8ECu;
    {
        const bool branch_taken_0x2af8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af8ec) {
            ctx->pc = 0x2AF90Cu;
            goto label_2af90c;
        }
    }
    ctx->pc = 0x2AF8F4u;
label_2af8f4:
    // 0x2af8f4: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x2af8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2af8f8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2af8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8fc: 0x8fa502d4  lw          $a1, 0x2D4($sp)
    ctx->pc = 0x2af8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x2af900: 0xc0abf4c  jal         func_2AFD30
    ctx->pc = 0x2AF900u;
    SET_GPR_U32(ctx, 31, 0x2AF908u);
    ctx->pc = 0x2AFD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFD30u, 0x2AF900u, 0x2AF908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF908u;
label_2af908:
    // 0x2af908: 0xafa202d4  sw          $v0, 0x2D4($sp)
    ctx->pc = 0x2af908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
label_2af90c:
    // 0x2af90c: 0x93a402ee  lbu         $a0, 0x2EE($sp)
    ctx->pc = 0x2af90cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 750)));
    // 0x2af910: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AF910u;
    {
        const bool branch_taken_0x2af910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af910) {
            ctx->pc = 0x2AF944u;
            goto label_2af944;
        }
    }
    ctx->pc = 0x2AF918u;
    // 0x2af918: 0x8fa202cc  lw          $v0, 0x2CC($sp)
    ctx->pc = 0x2af918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2af91c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF91Cu;
    {
        const bool branch_taken_0x2af91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af91c) {
            ctx->pc = 0x2AF944u;
            goto label_2af944;
        }
    }
    ctx->pc = 0x2AF924u;
    // 0x2af924: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2af924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2af928: 0xc0ab548  jal         func_2AD520
    ctx->pc = 0x2AF928u;
    SET_GPR_U32(ctx, 31, 0x2AF930u);
    ctx->pc = 0x2AD520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD520u, 0x2AF928u, 0x2AF930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF930u;
label_2af930:
    // 0x2af930: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2af930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af934: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2af934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
    // 0x2af938: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2AF938u;
    SET_GPR_U32(ctx, 31, 0x2AF940u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2AF938u, 0x2AF940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF940u;
label_2af940:
    // 0x2af940: 0xafa002cc  sw          $zero, 0x2CC($sp)
    ctx->pc = 0x2af940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 0));
label_2af944:
    // 0x2af944: 0x8fa202d4  lw          $v0, 0x2D4($sp)
    ctx->pc = 0x2af944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x2af948: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2af948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2af94c: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x2af94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2af950: 0xc08f548  jal         func_23D520
    ctx->pc = 0x2AF950u;
    SET_GPR_U32(ctx, 31, 0x2AF958u);
    ctx->pc = 0x23D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D520u, 0x2AF950u, 0x2AF958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF958u;
label_2af958:
    // 0x2af958: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2af958u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2af95c: 0x1462fa55  bne         $v1, $v0, . + 4 + (-0x5AB << 2)
    ctx->pc = 0x2AF95Cu;
    {
        const bool branch_taken_0x2af95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2af95c) {
            ctx->pc = 0x2AE2B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae2b4;
        }
    }
    ctx->pc = 0x2AF964u;
label_2af964:
    // 0x2af964: 0xc127dba  jal         func_49F6E8
    ctx->pc = 0x2AF964u;
    SET_GPR_U32(ctx, 31, 0x2AF96Cu);
    ctx->pc = 0x49F6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F6E8u, 0x2AF964u, 0x2AF96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF96Cu;
label_2af96c:
    // 0x2af96c: 0x8f84bc64  lw          $a0, -0x439C($gp)
    ctx->pc = 0x2af96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949988)));
    // 0x2af970: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2af970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2af974: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2af974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2af978: 0xaf83bc64  sw          $v1, -0x439C($gp)
    ctx->pc = 0x2af978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949988), GPR_U32(ctx, 3));
label_2af97c:
    // 0x2af97c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2af97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2af980: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2af980u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2af984: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2af984u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2af988: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2af988u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2af98c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2af98cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2af990: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2af990u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2af994: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2af994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2af998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af99c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2af99cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af9a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2af9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af9a4: 0x27bd0300  addiu       $sp, $sp, 0x300
    ctx->pc = 0x2af9a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x2af9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF9B0u;
}
