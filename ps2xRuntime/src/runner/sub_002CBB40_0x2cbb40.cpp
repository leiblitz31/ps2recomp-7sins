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

// Function: sub_002CBB40
// Address: 0x2cbb40 - 0x2cbed0
void sub_002CBB40_0x2cbb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBB40_0x2cbb40");
#endif

    switch (ctx->pc) {
        case 0x2cbb40u: goto label_2cbb40;
        case 0x2cbb44u: goto label_2cbb44;
        case 0x2cbb48u: goto label_2cbb48;
        case 0x2cbb4cu: goto label_2cbb4c;
        case 0x2cbb50u: goto label_2cbb50;
        case 0x2cbb54u: goto label_2cbb54;
        case 0x2cbb58u: goto label_2cbb58;
        case 0x2cbb5cu: goto label_2cbb5c;
        case 0x2cbb60u: goto label_2cbb60;
        case 0x2cbb64u: goto label_2cbb64;
        case 0x2cbb68u: goto label_2cbb68;
        case 0x2cbb6cu: goto label_2cbb6c;
        case 0x2cbb70u: goto label_2cbb70;
        case 0x2cbb74u: goto label_2cbb74;
        case 0x2cbb78u: goto label_2cbb78;
        case 0x2cbb7cu: goto label_2cbb7c;
        case 0x2cbb80u: goto label_2cbb80;
        case 0x2cbb84u: goto label_2cbb84;
        case 0x2cbb88u: goto label_2cbb88;
        case 0x2cbb8cu: goto label_2cbb8c;
        case 0x2cbb90u: goto label_2cbb90;
        case 0x2cbb94u: goto label_2cbb94;
        case 0x2cbb98u: goto label_2cbb98;
        case 0x2cbb9cu: goto label_2cbb9c;
        case 0x2cbba0u: goto label_2cbba0;
        case 0x2cbba4u: goto label_2cbba4;
        case 0x2cbba8u: goto label_2cbba8;
        case 0x2cbbacu: goto label_2cbbac;
        case 0x2cbbb0u: goto label_2cbbb0;
        case 0x2cbbb4u: goto label_2cbbb4;
        case 0x2cbbb8u: goto label_2cbbb8;
        case 0x2cbbbcu: goto label_2cbbbc;
        case 0x2cbbc0u: goto label_2cbbc0;
        case 0x2cbbc4u: goto label_2cbbc4;
        case 0x2cbbc8u: goto label_2cbbc8;
        case 0x2cbbccu: goto label_2cbbcc;
        case 0x2cbbd0u: goto label_2cbbd0;
        case 0x2cbbd4u: goto label_2cbbd4;
        case 0x2cbbd8u: goto label_2cbbd8;
        case 0x2cbbdcu: goto label_2cbbdc;
        case 0x2cbbe0u: goto label_2cbbe0;
        case 0x2cbbe4u: goto label_2cbbe4;
        case 0x2cbbe8u: goto label_2cbbe8;
        case 0x2cbbecu: goto label_2cbbec;
        case 0x2cbbf0u: goto label_2cbbf0;
        case 0x2cbbf4u: goto label_2cbbf4;
        case 0x2cbbf8u: goto label_2cbbf8;
        case 0x2cbbfcu: goto label_2cbbfc;
        case 0x2cbc00u: goto label_2cbc00;
        case 0x2cbc04u: goto label_2cbc04;
        case 0x2cbc08u: goto label_2cbc08;
        case 0x2cbc0cu: goto label_2cbc0c;
        case 0x2cbc10u: goto label_2cbc10;
        case 0x2cbc14u: goto label_2cbc14;
        case 0x2cbc18u: goto label_2cbc18;
        case 0x2cbc1cu: goto label_2cbc1c;
        case 0x2cbc20u: goto label_2cbc20;
        case 0x2cbc24u: goto label_2cbc24;
        case 0x2cbc28u: goto label_2cbc28;
        case 0x2cbc2cu: goto label_2cbc2c;
        case 0x2cbc30u: goto label_2cbc30;
        case 0x2cbc34u: goto label_2cbc34;
        case 0x2cbc38u: goto label_2cbc38;
        case 0x2cbc3cu: goto label_2cbc3c;
        case 0x2cbc40u: goto label_2cbc40;
        case 0x2cbc44u: goto label_2cbc44;
        case 0x2cbc48u: goto label_2cbc48;
        case 0x2cbc4cu: goto label_2cbc4c;
        case 0x2cbc50u: goto label_2cbc50;
        case 0x2cbc54u: goto label_2cbc54;
        case 0x2cbc58u: goto label_2cbc58;
        case 0x2cbc5cu: goto label_2cbc5c;
        case 0x2cbc60u: goto label_2cbc60;
        case 0x2cbc64u: goto label_2cbc64;
        case 0x2cbc68u: goto label_2cbc68;
        case 0x2cbc6cu: goto label_2cbc6c;
        case 0x2cbc70u: goto label_2cbc70;
        case 0x2cbc74u: goto label_2cbc74;
        case 0x2cbc78u: goto label_2cbc78;
        case 0x2cbc7cu: goto label_2cbc7c;
        case 0x2cbc80u: goto label_2cbc80;
        case 0x2cbc84u: goto label_2cbc84;
        case 0x2cbc88u: goto label_2cbc88;
        case 0x2cbc8cu: goto label_2cbc8c;
        case 0x2cbc90u: goto label_2cbc90;
        case 0x2cbc94u: goto label_2cbc94;
        case 0x2cbc98u: goto label_2cbc98;
        case 0x2cbc9cu: goto label_2cbc9c;
        case 0x2cbca0u: goto label_2cbca0;
        case 0x2cbca4u: goto label_2cbca4;
        case 0x2cbca8u: goto label_2cbca8;
        case 0x2cbcacu: goto label_2cbcac;
        case 0x2cbcb0u: goto label_2cbcb0;
        case 0x2cbcb4u: goto label_2cbcb4;
        case 0x2cbcb8u: goto label_2cbcb8;
        case 0x2cbcbcu: goto label_2cbcbc;
        case 0x2cbcc0u: goto label_2cbcc0;
        case 0x2cbcc4u: goto label_2cbcc4;
        case 0x2cbcc8u: goto label_2cbcc8;
        case 0x2cbcccu: goto label_2cbccc;
        case 0x2cbcd0u: goto label_2cbcd0;
        case 0x2cbcd4u: goto label_2cbcd4;
        case 0x2cbcd8u: goto label_2cbcd8;
        case 0x2cbcdcu: goto label_2cbcdc;
        case 0x2cbce0u: goto label_2cbce0;
        case 0x2cbce4u: goto label_2cbce4;
        case 0x2cbce8u: goto label_2cbce8;
        case 0x2cbcecu: goto label_2cbcec;
        case 0x2cbcf0u: goto label_2cbcf0;
        case 0x2cbcf4u: goto label_2cbcf4;
        case 0x2cbcf8u: goto label_2cbcf8;
        case 0x2cbcfcu: goto label_2cbcfc;
        case 0x2cbd00u: goto label_2cbd00;
        case 0x2cbd04u: goto label_2cbd04;
        case 0x2cbd08u: goto label_2cbd08;
        case 0x2cbd0cu: goto label_2cbd0c;
        case 0x2cbd10u: goto label_2cbd10;
        case 0x2cbd14u: goto label_2cbd14;
        case 0x2cbd18u: goto label_2cbd18;
        case 0x2cbd1cu: goto label_2cbd1c;
        case 0x2cbd20u: goto label_2cbd20;
        case 0x2cbd24u: goto label_2cbd24;
        case 0x2cbd28u: goto label_2cbd28;
        case 0x2cbd2cu: goto label_2cbd2c;
        case 0x2cbd30u: goto label_2cbd30;
        case 0x2cbd34u: goto label_2cbd34;
        case 0x2cbd38u: goto label_2cbd38;
        case 0x2cbd3cu: goto label_2cbd3c;
        case 0x2cbd40u: goto label_2cbd40;
        case 0x2cbd44u: goto label_2cbd44;
        case 0x2cbd48u: goto label_2cbd48;
        case 0x2cbd4cu: goto label_2cbd4c;
        case 0x2cbd50u: goto label_2cbd50;
        case 0x2cbd54u: goto label_2cbd54;
        case 0x2cbd58u: goto label_2cbd58;
        case 0x2cbd5cu: goto label_2cbd5c;
        case 0x2cbd60u: goto label_2cbd60;
        case 0x2cbd64u: goto label_2cbd64;
        case 0x2cbd68u: goto label_2cbd68;
        case 0x2cbd6cu: goto label_2cbd6c;
        case 0x2cbd70u: goto label_2cbd70;
        case 0x2cbd74u: goto label_2cbd74;
        case 0x2cbd78u: goto label_2cbd78;
        case 0x2cbd7cu: goto label_2cbd7c;
        case 0x2cbd80u: goto label_2cbd80;
        case 0x2cbd84u: goto label_2cbd84;
        case 0x2cbd88u: goto label_2cbd88;
        case 0x2cbd8cu: goto label_2cbd8c;
        case 0x2cbd90u: goto label_2cbd90;
        case 0x2cbd94u: goto label_2cbd94;
        case 0x2cbd98u: goto label_2cbd98;
        case 0x2cbd9cu: goto label_2cbd9c;
        case 0x2cbda0u: goto label_2cbda0;
        case 0x2cbda4u: goto label_2cbda4;
        case 0x2cbda8u: goto label_2cbda8;
        case 0x2cbdacu: goto label_2cbdac;
        case 0x2cbdb0u: goto label_2cbdb0;
        case 0x2cbdb4u: goto label_2cbdb4;
        case 0x2cbdb8u: goto label_2cbdb8;
        case 0x2cbdbcu: goto label_2cbdbc;
        case 0x2cbdc0u: goto label_2cbdc0;
        case 0x2cbdc4u: goto label_2cbdc4;
        case 0x2cbdc8u: goto label_2cbdc8;
        case 0x2cbdccu: goto label_2cbdcc;
        case 0x2cbdd0u: goto label_2cbdd0;
        case 0x2cbdd4u: goto label_2cbdd4;
        case 0x2cbdd8u: goto label_2cbdd8;
        case 0x2cbddcu: goto label_2cbddc;
        case 0x2cbde0u: goto label_2cbde0;
        case 0x2cbde4u: goto label_2cbde4;
        case 0x2cbde8u: goto label_2cbde8;
        case 0x2cbdecu: goto label_2cbdec;
        case 0x2cbdf0u: goto label_2cbdf0;
        case 0x2cbdf4u: goto label_2cbdf4;
        case 0x2cbdf8u: goto label_2cbdf8;
        case 0x2cbdfcu: goto label_2cbdfc;
        case 0x2cbe00u: goto label_2cbe00;
        case 0x2cbe04u: goto label_2cbe04;
        case 0x2cbe08u: goto label_2cbe08;
        case 0x2cbe0cu: goto label_2cbe0c;
        case 0x2cbe10u: goto label_2cbe10;
        case 0x2cbe14u: goto label_2cbe14;
        case 0x2cbe18u: goto label_2cbe18;
        case 0x2cbe1cu: goto label_2cbe1c;
        case 0x2cbe20u: goto label_2cbe20;
        case 0x2cbe24u: goto label_2cbe24;
        case 0x2cbe28u: goto label_2cbe28;
        case 0x2cbe2cu: goto label_2cbe2c;
        case 0x2cbe30u: goto label_2cbe30;
        case 0x2cbe34u: goto label_2cbe34;
        case 0x2cbe38u: goto label_2cbe38;
        case 0x2cbe3cu: goto label_2cbe3c;
        case 0x2cbe40u: goto label_2cbe40;
        case 0x2cbe44u: goto label_2cbe44;
        case 0x2cbe48u: goto label_2cbe48;
        case 0x2cbe4cu: goto label_2cbe4c;
        case 0x2cbe50u: goto label_2cbe50;
        case 0x2cbe54u: goto label_2cbe54;
        case 0x2cbe58u: goto label_2cbe58;
        case 0x2cbe5cu: goto label_2cbe5c;
        case 0x2cbe60u: goto label_2cbe60;
        case 0x2cbe64u: goto label_2cbe64;
        case 0x2cbe68u: goto label_2cbe68;
        case 0x2cbe6cu: goto label_2cbe6c;
        case 0x2cbe70u: goto label_2cbe70;
        case 0x2cbe74u: goto label_2cbe74;
        case 0x2cbe78u: goto label_2cbe78;
        case 0x2cbe7cu: goto label_2cbe7c;
        case 0x2cbe80u: goto label_2cbe80;
        case 0x2cbe84u: goto label_2cbe84;
        case 0x2cbe88u: goto label_2cbe88;
        case 0x2cbe8cu: goto label_2cbe8c;
        case 0x2cbe90u: goto label_2cbe90;
        case 0x2cbe94u: goto label_2cbe94;
        case 0x2cbe98u: goto label_2cbe98;
        case 0x2cbe9cu: goto label_2cbe9c;
        case 0x2cbea0u: goto label_2cbea0;
        case 0x2cbea4u: goto label_2cbea4;
        case 0x2cbea8u: goto label_2cbea8;
        case 0x2cbeacu: goto label_2cbeac;
        case 0x2cbeb0u: goto label_2cbeb0;
        case 0x2cbeb4u: goto label_2cbeb4;
        case 0x2cbeb8u: goto label_2cbeb8;
        case 0x2cbebcu: goto label_2cbebc;
        case 0x2cbec0u: goto label_2cbec0;
        case 0x2cbec4u: goto label_2cbec4;
        case 0x2cbec8u: goto label_2cbec8;
        case 0x2cbeccu: goto label_2cbecc;
        default: break;
    }

    ctx->pc = 0x2cbb40u;

label_2cbb40:
    // 0x2cbb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cbb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cbb44:
    // 0x2cbb44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cbb48:
    // 0x2cbb48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cbb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2cbb4c:
    // 0x2cbb4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cbb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2cbb50:
    // 0x2cbb50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cbb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2cbb54:
    // 0x2cbb54: 0xc0b2e94  jal         func_2CBA50
label_2cbb58:
    if (ctx->pc == 0x2CBB58u) {
        ctx->pc = 0x2CBB5Cu;
        goto label_2cbb5c;
    }
    ctx->pc = 0x2CBB54u;
    SET_GPR_U32(ctx, 31, 0x2CBB5Cu);
    ctx->pc = 0x2CBA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA50u, 0x2CBB54u, 0x2CBB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB5Cu;
label_2cbb5c:
    // 0x2cbb5c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2cbb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2cbb60:
    // 0x2cbb60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cbb60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2cbb64:
    // 0x2cbb64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cbb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2cbb68:
    // 0x2cbb68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cbb6c:
    // 0x2cbb6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cbb6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2cbb70:
    // 0x2cbb70: 0x3e00008  jr          $ra
label_2cbb74:
    if (ctx->pc == 0x2CBB74u) {
        ctx->pc = 0x2CBB78u;
        goto label_2cbb78;
    }
    ctx->pc = 0x2CBB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBB78u;
label_2cbb78:
    // 0x2cbb78: 0x0  nop
    ctx->pc = 0x2cbb78u;
    // NOP
label_2cbb7c:
    // 0x2cbb7c: 0x0  nop
    ctx->pc = 0x2cbb7cu;
    // NOP
label_2cbb80:
    // 0x2cbb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cbb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cbb84:
    // 0x2cbb84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cbb88:
    // 0x2cbb88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cbb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2cbb8c:
    // 0x2cbb8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cbb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2cbb90:
    // 0x2cbb90: 0xc08ec5c  jal         func_23B170
label_2cbb94:
    if (ctx->pc == 0x2CBB94u) {
        ctx->pc = 0x2CBB98u;
        goto label_2cbb98;
    }
    ctx->pc = 0x2CBB90u;
    SET_GPR_U32(ctx, 31, 0x2CBB98u);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x2CBB90u, 0x2CBB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB98u;
label_2cbb98:
    // 0x2cbb98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cbb9c:
    // 0x2cbb9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cbb9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2cbba0:
    // 0x2cbba0: 0x3e00008  jr          $ra
label_2cbba4:
    if (ctx->pc == 0x2CBBA4u) {
        ctx->pc = 0x2CBBA8u;
        goto label_2cbba8;
    }
    ctx->pc = 0x2CBBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBBA8u;
label_2cbba8:
    // 0x2cbba8: 0x0  nop
    ctx->pc = 0x2cbba8u;
    // NOP
label_2cbbac:
    // 0x2cbbac: 0x0  nop
    ctx->pc = 0x2cbbacu;
    // NOP
label_2cbbb0:
    // 0x2cbbb0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2cbbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2cbbb4:
    // 0x2cbbb4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2cbbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2cbbb8:
    // 0x2cbbb8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2cbbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2cbbbc:
    // 0x2cbbbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2cbbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2cbbc0:
    // 0x2cbbc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2cbbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2cbbc4:
    // 0x2cbbc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2cbbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2cbbc8:
    // 0x2cbbc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cbbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2cbbcc:
    // 0x2cbbcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cbbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2cbbd0:
    // 0x2cbbd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cbbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2cbbd4:
    // 0x2cbbd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cbbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cbbd8:
    // 0x2cbbd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cbbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cbbdc:
    // 0x2cbbdc: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2cbbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_2cbbe0:
    // 0x2cbbe0: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x2cbbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_2cbbe4:
    // 0x2cbbe4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2cbbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2cbbe8:
    // 0x2cbbe8: 0xc0422b8  jal         func_108AE0
label_2cbbec:
    if (ctx->pc == 0x2CBBECu) {
        ctx->pc = 0x2CBBF0u;
        goto label_2cbbf0;
    }
    ctx->pc = 0x2CBBE8u;
    SET_GPR_U32(ctx, 31, 0x2CBBF0u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x2CBBE8u, 0x2CBBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBBF0u;
label_2cbbf0:
    // 0x2cbbf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cbbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbbf4:
    // 0x2cbbf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbbf8:
    // 0x2cbbf8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cbbf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cbbfc:
    // 0x2cbbfc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2cbbfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2cbc00:
    // 0x2cbc00: 0x320f809  jalr        $t9
label_2cbc04:
    if (ctx->pc == 0x2CBC04u) {
        ctx->pc = 0x2CBC08u;
        goto label_2cbc08;
    }
    ctx->pc = 0x2CBC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CBC08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBC00u, 0x2CBC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CBC08u;
label_2cbc08:
    // 0x2cbc08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cbc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cbc0c:
    // 0x2cbc0c: 0x14430042  bne         $v0, $v1, . + 4 + (0x42 << 2)
label_2cbc10:
    if (ctx->pc == 0x2CBC10u) {
        ctx->pc = 0x2CBC14u;
        goto label_2cbc14;
    }
    ctx->pc = 0x2CBC0Cu;
    {
        const bool branch_taken_0x2cbc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cbc0c) {
            ctx->pc = 0x2CBD18u;
            goto label_2cbd18;
        }
    }
    ctx->pc = 0x2CBC14u;
label_2cbc14:
    // 0x2cbc14: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2cbc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2cbc18:
    // 0x2cbc18: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cbc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cbc1c:
    // 0x2cbc1c: 0xc09d650  jal         func_275940
label_2cbc20:
    if (ctx->pc == 0x2CBC20u) {
        ctx->pc = 0x2CBC24u;
        goto label_2cbc24;
    }
    ctx->pc = 0x2CBC1Cu;
    SET_GPR_U32(ctx, 31, 0x2CBC24u);
    ctx->pc = 0x275940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275940u, 0x2CBC1Cu, 0x2CBC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC24u;
label_2cbc24:
    // 0x2cbc24: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2cbc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_2cbc28:
    // 0x2cbc28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc2c:
    // 0x2cbc2c: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x2cbc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2cbc30:
    // 0x2cbc30: 0xc0422a8  jal         func_108AA0
label_2cbc34:
    if (ctx->pc == 0x2CBC34u) {
        ctx->pc = 0x2CBC38u;
        goto label_2cbc38;
    }
    ctx->pc = 0x2CBC30u;
    SET_GPR_U32(ctx, 31, 0x2CBC38u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x2CBC30u, 0x2CBC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC38u;
label_2cbc38:
    // 0x2cbc38: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2cbc38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc3c:
    // 0x2cbc3c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2cbc40:
    if (ctx->pc == 0x2CBC40u) {
        ctx->pc = 0x2CBC44u;
        goto label_2cbc44;
    }
    ctx->pc = 0x2CBC3Cu;
    {
        const bool branch_taken_0x2cbc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbc3c) {
            ctx->pc = 0x2CBCF4u;
            goto label_2cbcf4;
        }
    }
    ctx->pc = 0x2CBC44u;
label_2cbc44:
    // 0x2cbc44: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2cbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2cbc48:
    // 0x2cbc48: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cbc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cbc4c:
    // 0x2cbc4c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2cbc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc50:
    // 0x2cbc50: 0xc09d660  jal         func_275980
label_2cbc54:
    if (ctx->pc == 0x2CBC54u) {
        ctx->pc = 0x2CBC58u;
        goto label_2cbc58;
    }
    ctx->pc = 0x2CBC50u;
    SET_GPR_U32(ctx, 31, 0x2CBC58u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2CBC50u, 0x2CBC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC58u;
label_2cbc58:
    // 0x2cbc58: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2cbc58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cbc5c:
    // 0x2cbc5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cbc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc60:
    // 0x2cbc60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cbc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc64:
    // 0x2cbc64: 0xc045a48  jal         func_116920
label_2cbc68:
    if (ctx->pc == 0x2CBC68u) {
        ctx->pc = 0x2CBC6Cu;
        goto label_2cbc6c;
    }
    ctx->pc = 0x2CBC64u;
    SET_GPR_U32(ctx, 31, 0x2CBC6Cu);
    ctx->pc = 0x116920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116920u, 0x2CBC64u, 0x2CBC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC6Cu;
label_2cbc6c:
    // 0x2cbc6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc70:
    // 0x2cbc70: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x2cbc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_2cbc74:
    // 0x2cbc74: 0xc042298  jal         func_108A60
label_2cbc78:
    if (ctx->pc == 0x2CBC78u) {
        ctx->pc = 0x2CBC7Cu;
        goto label_2cbc7c;
    }
    ctx->pc = 0x2CBC74u;
    SET_GPR_U32(ctx, 31, 0x2CBC7Cu);
    ctx->pc = 0x108A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A60u, 0x2CBC74u, 0x2CBC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC7Cu;
label_2cbc7c:
    // 0x2cbc7c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2cbc7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc80:
    // 0x2cbc80: 0x10000017  b           . + 4 + (0x17 << 2)
label_2cbc84:
    if (ctx->pc == 0x2CBC84u) {
        ctx->pc = 0x2CBC88u;
        goto label_2cbc88;
    }
    ctx->pc = 0x2CBC80u;
    {
        const bool branch_taken_0x2cbc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbc80) {
            ctx->pc = 0x2CBCE0u;
            goto label_2cbce0;
        }
    }
    ctx->pc = 0x2CBC88u;
label_2cbc88:
    // 0x2cbc88: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2cbc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2cbc8c:
    // 0x2cbc8c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2cbc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc90:
    // 0x2cbc90: 0xc0b2ed0  jal         func_2CBB40
label_2cbc94:
    if (ctx->pc == 0x2CBC94u) {
        ctx->pc = 0x2CBC98u;
        goto label_2cbc98;
    }
    ctx->pc = 0x2CBC90u;
    SET_GPR_U32(ctx, 31, 0x2CBC98u);
    ctx->pc = 0x2CBB40u;
    goto label_2cbb40;
    ctx->pc = 0x2CBC98u;
label_2cbc98:
    // 0x2cbc98: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2cbc98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cbc9c:
    // 0x2cbc9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cbc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cbca0:
    // 0x2cbca0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cbca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbca4:
    // 0x2cbca4: 0xc045a48  jal         func_116920
label_2cbca8:
    if (ctx->pc == 0x2CBCA8u) {
        ctx->pc = 0x2CBCACu;
        goto label_2cbcac;
    }
    ctx->pc = 0x2CBCA4u;
    SET_GPR_U32(ctx, 31, 0x2CBCACu);
    ctx->pc = 0x116920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116920u, 0x2CBCA4u, 0x2CBCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBCACu;
label_2cbcac:
    // 0x2cbcac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbcb0:
    // 0x2cbcb0: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x2cbcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_2cbcb4:
    // 0x2cbcb4: 0xc08cf20  jal         func_233C80
label_2cbcb8:
    if (ctx->pc == 0x2CBCB8u) {
        ctx->pc = 0x2CBCBCu;
        goto label_2cbcbc;
    }
    ctx->pc = 0x2CBCB4u;
    SET_GPR_U32(ctx, 31, 0x2CBCBCu);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x2CBCB4u, 0x2CBCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBCBCu;
label_2cbcbc:
    // 0x2cbcbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbcc0:
    // 0x2cbcc0: 0x2685000c  addiu       $a1, $s4, 0xC
    ctx->pc = 0x2cbcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_2cbcc4:
    // 0x2cbcc4: 0xc08cf20  jal         func_233C80
label_2cbcc8:
    if (ctx->pc == 0x2CBCC8u) {
        ctx->pc = 0x2CBCCCu;
        goto label_2cbccc;
    }
    ctx->pc = 0x2CBCC4u;
    SET_GPR_U32(ctx, 31, 0x2CBCCCu);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x2CBCC4u, 0x2CBCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBCCCu;
label_2cbccc:
    // 0x2cbccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbcd0:
    // 0x2cbcd0: 0x26850014  addiu       $a1, $s4, 0x14
    ctx->pc = 0x2cbcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_2cbcd4:
    // 0x2cbcd4: 0xc08cf20  jal         func_233C80
label_2cbcd8:
    if (ctx->pc == 0x2CBCD8u) {
        ctx->pc = 0x2CBCDCu;
        goto label_2cbcdc;
    }
    ctx->pc = 0x2CBCD4u;
    SET_GPR_U32(ctx, 31, 0x2CBCDCu);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x2CBCD4u, 0x2CBCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBCDCu;
label_2cbcdc:
    // 0x2cbcdc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2cbcdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2cbce0:
    // 0x2cbce0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2cbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2cbce4:
    // 0x2cbce4: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2cbce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2cbce8:
    // 0x2cbce8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_2cbcec:
    if (ctx->pc == 0x2CBCECu) {
        ctx->pc = 0x2CBCF0u;
        goto label_2cbcf0;
    }
    ctx->pc = 0x2CBCE8u;
    {
        const bool branch_taken_0x2cbce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbce8) {
            ctx->pc = 0x2CBC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbc88;
        }
    }
    ctx->pc = 0x2CBCF0u;
label_2cbcf0:
    // 0x2cbcf0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2cbcf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2cbcf4:
    // 0x2cbcf4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2cbcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2cbcf8:
    // 0x2cbcf8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cbcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cbcfc:
    // 0x2cbcfc: 0xc09d650  jal         func_275940
label_2cbd00:
    if (ctx->pc == 0x2CBD00u) {
        ctx->pc = 0x2CBD04u;
        goto label_2cbd04;
    }
    ctx->pc = 0x2CBCFCu;
    SET_GPR_U32(ctx, 31, 0x2CBD04u);
    ctx->pc = 0x275940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275940u, 0x2CBCFCu, 0x2CBD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD04u;
label_2cbd04:
    // 0x2cbd04: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x2cbd04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cbd08:
    // 0x2cbd08: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_2cbd0c:
    if (ctx->pc == 0x2CBD0Cu) {
        ctx->pc = 0x2CBD10u;
        goto label_2cbd10;
    }
    ctx->pc = 0x2CBD08u;
    {
        const bool branch_taken_0x2cbd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbd08) {
            ctx->pc = 0x2CBC44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbc44;
        }
    }
    ctx->pc = 0x2CBD10u;
label_2cbd10:
    // 0x2cbd10: 0x1000005b  b           . + 4 + (0x5B << 2)
label_2cbd14:
    if (ctx->pc == 0x2CBD14u) {
        ctx->pc = 0x2CBD18u;
        goto label_2cbd18;
    }
    ctx->pc = 0x2CBD10u;
    {
        const bool branch_taken_0x2cbd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbd10) {
            ctx->pc = 0x2CBE80u;
            goto label_2cbe80;
        }
    }
    ctx->pc = 0x2CBD18u;
label_2cbd18:
    // 0x2cbd18: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x2cbd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_2cbd1c:
    // 0x2cbd1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbd20:
    // 0x2cbd20: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x2cbd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_2cbd24:
    // 0x2cbd24: 0xc0422a8  jal         func_108AA0
label_2cbd28:
    if (ctx->pc == 0x2CBD28u) {
        ctx->pc = 0x2CBD2Cu;
        goto label_2cbd2c;
    }
    ctx->pc = 0x2CBD24u;
    SET_GPR_U32(ctx, 31, 0x2CBD2Cu);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x2CBD24u, 0x2CBD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD2Cu;
label_2cbd2c:
    // 0x2cbd2c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2cbd2cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbd30:
    // 0x2cbd30: 0x1000004f  b           . + 4 + (0x4F << 2)
label_2cbd34:
    if (ctx->pc == 0x2CBD34u) {
        ctx->pc = 0x2CBD38u;
        goto label_2cbd38;
    }
    ctx->pc = 0x2CBD30u;
    {
        const bool branch_taken_0x2cbd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbd30) {
            ctx->pc = 0x2CBE70u;
            goto label_2cbe70;
        }
    }
    ctx->pc = 0x2CBD38u;
label_2cbd38:
    // 0x2cbd38: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2cbd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2cbd3c:
    // 0x2cbd3c: 0xc119b68  jal         func_466DA0
label_2cbd40:
    if (ctx->pc == 0x2CBD40u) {
        ctx->pc = 0x2CBD44u;
        goto label_2cbd44;
    }
    ctx->pc = 0x2CBD3Cu;
    SET_GPR_U32(ctx, 31, 0x2CBD44u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CBD3Cu, 0x2CBD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD44u;
label_2cbd44:
    // 0x2cbd44: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2cbd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2cbd48:
    // 0x2cbd48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cbd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbd4c:
    // 0x2cbd4c: 0xc0400e0  jal         func_100380
label_2cbd50:
    if (ctx->pc == 0x2CBD50u) {
        ctx->pc = 0x2CBD54u;
        goto label_2cbd54;
    }
    ctx->pc = 0x2CBD4Cu;
    SET_GPR_U32(ctx, 31, 0x2CBD54u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CBD4Cu, 0x2CBD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD54u;
label_2cbd54:
    // 0x2cbd54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cbd54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbd58:
    // 0x2cbd58: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_2cbd5c:
    if (ctx->pc == 0x2CBD5Cu) {
        ctx->pc = 0x2CBD60u;
        goto label_2cbd60;
    }
    ctx->pc = 0x2CBD58u;
    {
        const bool branch_taken_0x2cbd58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbd58) {
            ctx->pc = 0x2CBD70u;
            goto label_2cbd70;
        }
    }
    ctx->pc = 0x2CBD60u;
label_2cbd60:
    // 0x2cbd60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cbd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cbd64:
    // 0x2cbd64: 0xc0b3e00  jal         func_2CF800
label_2cbd68:
    if (ctx->pc == 0x2CBD68u) {
        ctx->pc = 0x2CBD6Cu;
        goto label_2cbd6c;
    }
    ctx->pc = 0x2CBD64u;
    SET_GPR_U32(ctx, 31, 0x2CBD6Cu);
    ctx->pc = 0x2CF800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF800u, 0x2CBD64u, 0x2CBD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD6Cu;
label_2cbd6c:
    // 0x2cbd6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cbd6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbd70:
    // 0x2cbd70: 0xafb300a4  sw          $s3, 0xA4($sp)
    ctx->pc = 0x2cbd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 19));
label_2cbd74:
    // 0x2cbd74: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x2cbd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2cbd78:
    // 0x2cbd78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cbd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbd7c:
    // 0x2cbd7c: 0xc045a48  jal         func_116920
label_2cbd80:
    if (ctx->pc == 0x2CBD80u) {
        ctx->pc = 0x2CBD84u;
        goto label_2cbd84;
    }
    ctx->pc = 0x2CBD7Cu;
    SET_GPR_U32(ctx, 31, 0x2CBD84u);
    ctx->pc = 0x116920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116920u, 0x2CBD7Cu, 0x2CBD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD84u;
label_2cbd84:
    // 0x2cbd84: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x2cbd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2cbd88:
    // 0x2cbd88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbd8c:
    // 0x2cbd8c: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x2cbd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_2cbd90:
    // 0x2cbd90: 0xc042298  jal         func_108A60
label_2cbd94:
    if (ctx->pc == 0x2CBD94u) {
        ctx->pc = 0x2CBD98u;
        goto label_2cbd98;
    }
    ctx->pc = 0x2CBD90u;
    SET_GPR_U32(ctx, 31, 0x2CBD98u);
    ctx->pc = 0x108A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A60u, 0x2CBD90u, 0x2CBD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD98u;
label_2cbd98:
    // 0x2cbd98: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2cbd98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbd9c:
    // 0x2cbd9c: 0x10000029  b           . + 4 + (0x29 << 2)
label_2cbda0:
    if (ctx->pc == 0x2CBDA0u) {
        ctx->pc = 0x2CBDA4u;
        goto label_2cbda4;
    }
    ctx->pc = 0x2CBD9Cu;
    {
        const bool branch_taken_0x2cbd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbd9c) {
            ctx->pc = 0x2CBE44u;
            goto label_2cbe44;
        }
    }
    ctx->pc = 0x2CBDA4u;
label_2cbda4:
    // 0x2cbda4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2cbda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2cbda8:
    // 0x2cbda8: 0xc119b68  jal         func_466DA0
label_2cbdac:
    if (ctx->pc == 0x2CBDACu) {
        ctx->pc = 0x2CBDB0u;
        goto label_2cbdb0;
    }
    ctx->pc = 0x2CBDA8u;
    SET_GPR_U32(ctx, 31, 0x2CBDB0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CBDA8u, 0x2CBDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDB0u;
label_2cbdb0:
    // 0x2cbdb0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2cbdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2cbdb4:
    // 0x2cbdb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cbdb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbdb8:
    // 0x2cbdb8: 0xc0400e0  jal         func_100380
label_2cbdbc:
    if (ctx->pc == 0x2CBDBCu) {
        ctx->pc = 0x2CBDC0u;
        goto label_2cbdc0;
    }
    ctx->pc = 0x2CBDB8u;
    SET_GPR_U32(ctx, 31, 0x2CBDC0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CBDB8u, 0x2CBDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDC0u;
label_2cbdc0:
    // 0x2cbdc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cbdc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbdc4:
    // 0x2cbdc4: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2cbdc8:
    if (ctx->pc == 0x2CBDC8u) {
        ctx->pc = 0x2CBDCCu;
        goto label_2cbdcc;
    }
    ctx->pc = 0x2CBDC4u;
    {
        const bool branch_taken_0x2cbdc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbdc4) {
            ctx->pc = 0x2CBDDCu;
            goto label_2cbddc;
        }
    }
    ctx->pc = 0x2CBDCCu;
label_2cbdcc:
    // 0x2cbdcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cbdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cbdd0:
    // 0x2cbdd0: 0xc0b3154  jal         func_2CC550
label_2cbdd4:
    if (ctx->pc == 0x2CBDD4u) {
        ctx->pc = 0x2CBDD8u;
        goto label_2cbdd8;
    }
    ctx->pc = 0x2CBDD0u;
    SET_GPR_U32(ctx, 31, 0x2CBDD8u);
    ctx->pc = 0x2CC550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC550u, 0x2CBDD0u, 0x2CBDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDD8u;
label_2cbdd8:
    // 0x2cbdd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cbdd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cbddc:
    // 0x2cbddc: 0xafb200a0  sw          $s2, 0xA0($sp)
    ctx->pc = 0x2cbddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 18));
label_2cbde0:
    // 0x2cbde0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2cbde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2cbde4:
    // 0x2cbde4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cbde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbde8:
    // 0x2cbde8: 0xc045a48  jal         func_116920
label_2cbdec:
    if (ctx->pc == 0x2CBDECu) {
        ctx->pc = 0x2CBDF0u;
        goto label_2cbdf0;
    }
    ctx->pc = 0x2CBDE8u;
    SET_GPR_U32(ctx, 31, 0x2CBDF0u);
    ctx->pc = 0x116920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116920u, 0x2CBDE8u, 0x2CBDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDF0u;
label_2cbdf0:
    // 0x2cbdf0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2cbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2cbdf4:
    // 0x2cbdf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbdf8:
    // 0x2cbdf8: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2cbdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2cbdfc:
    // 0x2cbdfc: 0xc08cf20  jal         func_233C80
label_2cbe00:
    if (ctx->pc == 0x2CBE00u) {
        ctx->pc = 0x2CBE04u;
        goto label_2cbe04;
    }
    ctx->pc = 0x2CBDFCu;
    SET_GPR_U32(ctx, 31, 0x2CBE04u);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x2CBDFCu, 0x2CBE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE04u;
label_2cbe04:
    // 0x2cbe04: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2cbe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2cbe08:
    // 0x2cbe08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbe08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe0c:
    // 0x2cbe0c: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x2cbe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_2cbe10:
    // 0x2cbe10: 0xc08cf20  jal         func_233C80
label_2cbe14:
    if (ctx->pc == 0x2CBE14u) {
        ctx->pc = 0x2CBE18u;
        goto label_2cbe18;
    }
    ctx->pc = 0x2CBE10u;
    SET_GPR_U32(ctx, 31, 0x2CBE18u);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x2CBE10u, 0x2CBE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE18u;
label_2cbe18:
    // 0x2cbe18: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2cbe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2cbe1c:
    // 0x2cbe1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbe1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe20:
    // 0x2cbe20: 0x24450014  addiu       $a1, $v0, 0x14
    ctx->pc = 0x2cbe20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_2cbe24:
    // 0x2cbe24: 0xc08cf20  jal         func_233C80
label_2cbe28:
    if (ctx->pc == 0x2CBE28u) {
        ctx->pc = 0x2CBE2Cu;
        goto label_2cbe2c;
    }
    ctx->pc = 0x2CBE24u;
    SET_GPR_U32(ctx, 31, 0x2CBE2Cu);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x2CBE24u, 0x2CBE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE2Cu;
label_2cbe2c:
    // 0x2cbe2c: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x2cbe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2cbe30:
    // 0x2cbe30: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2cbe30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2cbe34:
    // 0x2cbe34: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2cbe34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2cbe38:
    // 0x2cbe38: 0xc0b3084  jal         func_2CC210
label_2cbe3c:
    if (ctx->pc == 0x2CBE3Cu) {
        ctx->pc = 0x2CBE40u;
        goto label_2cbe40;
    }
    ctx->pc = 0x2CBE38u;
    SET_GPR_U32(ctx, 31, 0x2CBE40u);
    ctx->pc = 0x2CC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC210u, 0x2CBE38u, 0x2CBE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE40u;
label_2cbe40:
    // 0x2cbe40: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2cbe40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2cbe44:
    // 0x2cbe44: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x2cbe44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2cbe48:
    // 0x2cbe48: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2cbe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2cbe4c:
    // 0x2cbe4c: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x2cbe4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2cbe50:
    // 0x2cbe50: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_2cbe54:
    if (ctx->pc == 0x2CBE54u) {
        ctx->pc = 0x2CBE58u;
        goto label_2cbe58;
    }
    ctx->pc = 0x2CBE50u;
    {
        const bool branch_taken_0x2cbe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbe50) {
            ctx->pc = 0x2CBDA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbda4;
        }
    }
    ctx->pc = 0x2CBE58u;
label_2cbe58:
    // 0x2cbe58: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2cbe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2cbe5c:
    // 0x2cbe5c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2cbe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2cbe60:
    // 0x2cbe60: 0x27a500a4  addiu       $a1, $sp, 0xA4
    ctx->pc = 0x2cbe60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_2cbe64:
    // 0x2cbe64: 0xc0b2fb4  jal         func_2CBED0
label_2cbe68:
    if (ctx->pc == 0x2CBE68u) {
        ctx->pc = 0x2CBE6Cu;
        goto label_2cbe6c;
    }
    ctx->pc = 0x2CBE64u;
    SET_GPR_U32(ctx, 31, 0x2CBE6Cu);
    ctx->pc = 0x2CBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBED0u, 0x2CBE64u, 0x2CBE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE6Cu;
label_2cbe6c:
    // 0x2cbe6c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2cbe6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2cbe70:
    // 0x2cbe70: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2cbe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2cbe74:
    // 0x2cbe74: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x2cbe74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cbe78:
    // 0x2cbe78: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
label_2cbe7c:
    if (ctx->pc == 0x2CBE7Cu) {
        ctx->pc = 0x2CBE80u;
        goto label_2cbe80;
    }
    ctx->pc = 0x2CBE78u;
    {
        const bool branch_taken_0x2cbe78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbe78) {
            ctx->pc = 0x2CBD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbd38;
        }
    }
    ctx->pc = 0x2CBE80u;
label_2cbe80:
    // 0x2cbe80: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2cbe80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2cbe84:
    // 0x2cbe84: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2cbe84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2cbe88:
    // 0x2cbe88: 0xc08ec68  jal         func_23B1A0
label_2cbe8c:
    if (ctx->pc == 0x2CBE8Cu) {
        ctx->pc = 0x2CBE90u;
        goto label_2cbe90;
    }
    ctx->pc = 0x2CBE88u;
    SET_GPR_U32(ctx, 31, 0x2CBE90u);
    ctx->pc = 0x23B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1A0u, 0x2CBE88u, 0x2CBE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE90u;
label_2cbe90:
    // 0x2cbe90: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2cbe90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2cbe94:
    // 0x2cbe94: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2cbe94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2cbe98:
    // 0x2cbe98: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2cbe98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cbe9c:
    // 0x2cbe9c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2cbe9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cbea0:
    // 0x2cbea0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2cbea0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cbea4:
    // 0x2cbea4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cbea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cbea8:
    // 0x2cbea8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cbea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cbeac:
    // 0x2cbeac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cbeacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cbeb0:
    // 0x2cbeb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cbeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cbeb4:
    // 0x2cbeb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cbeb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cbeb8:
    // 0x2cbeb8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2cbeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2cbebc:
    // 0x2cbebc: 0x3e00008  jr          $ra
label_2cbec0:
    if (ctx->pc == 0x2CBEC0u) {
        ctx->pc = 0x2CBEC4u;
        goto label_2cbec4;
    }
    ctx->pc = 0x2CBEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBEC4u;
label_2cbec4:
    // 0x2cbec4: 0x0  nop
    ctx->pc = 0x2cbec4u;
    // NOP
label_2cbec8:
    // 0x2cbec8: 0x0  nop
    ctx->pc = 0x2cbec8u;
    // NOP
label_2cbecc:
    // 0x2cbecc: 0x0  nop
    ctx->pc = 0x2cbeccu;
    // NOP
    ctx->pc = 0x2cbed0u;
}
