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

// Function: sub_002ACA70
// Address: 0x2aca70 - 0x2ace50
void sub_002ACA70_0x2aca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACA70_0x2aca70");
#endif

    switch (ctx->pc) {
        case 0x2aca70u: goto label_2aca70;
        case 0x2aca74u: goto label_2aca74;
        case 0x2aca78u: goto label_2aca78;
        case 0x2aca7cu: goto label_2aca7c;
        case 0x2aca80u: goto label_2aca80;
        case 0x2aca84u: goto label_2aca84;
        case 0x2aca88u: goto label_2aca88;
        case 0x2aca8cu: goto label_2aca8c;
        case 0x2aca90u: goto label_2aca90;
        case 0x2aca94u: goto label_2aca94;
        case 0x2aca98u: goto label_2aca98;
        case 0x2aca9cu: goto label_2aca9c;
        case 0x2acaa0u: goto label_2acaa0;
        case 0x2acaa4u: goto label_2acaa4;
        case 0x2acaa8u: goto label_2acaa8;
        case 0x2acaacu: goto label_2acaac;
        case 0x2acab0u: goto label_2acab0;
        case 0x2acab4u: goto label_2acab4;
        case 0x2acab8u: goto label_2acab8;
        case 0x2acabcu: goto label_2acabc;
        case 0x2acac0u: goto label_2acac0;
        case 0x2acac4u: goto label_2acac4;
        case 0x2acac8u: goto label_2acac8;
        case 0x2acaccu: goto label_2acacc;
        case 0x2acad0u: goto label_2acad0;
        case 0x2acad4u: goto label_2acad4;
        case 0x2acad8u: goto label_2acad8;
        case 0x2acadcu: goto label_2acadc;
        case 0x2acae0u: goto label_2acae0;
        case 0x2acae4u: goto label_2acae4;
        case 0x2acae8u: goto label_2acae8;
        case 0x2acaecu: goto label_2acaec;
        case 0x2acaf0u: goto label_2acaf0;
        case 0x2acaf4u: goto label_2acaf4;
        case 0x2acaf8u: goto label_2acaf8;
        case 0x2acafcu: goto label_2acafc;
        case 0x2acb00u: goto label_2acb00;
        case 0x2acb04u: goto label_2acb04;
        case 0x2acb08u: goto label_2acb08;
        case 0x2acb0cu: goto label_2acb0c;
        case 0x2acb10u: goto label_2acb10;
        case 0x2acb14u: goto label_2acb14;
        case 0x2acb18u: goto label_2acb18;
        case 0x2acb1cu: goto label_2acb1c;
        case 0x2acb20u: goto label_2acb20;
        case 0x2acb24u: goto label_2acb24;
        case 0x2acb28u: goto label_2acb28;
        case 0x2acb2cu: goto label_2acb2c;
        case 0x2acb30u: goto label_2acb30;
        case 0x2acb34u: goto label_2acb34;
        case 0x2acb38u: goto label_2acb38;
        case 0x2acb3cu: goto label_2acb3c;
        case 0x2acb40u: goto label_2acb40;
        case 0x2acb44u: goto label_2acb44;
        case 0x2acb48u: goto label_2acb48;
        case 0x2acb4cu: goto label_2acb4c;
        case 0x2acb50u: goto label_2acb50;
        case 0x2acb54u: goto label_2acb54;
        case 0x2acb58u: goto label_2acb58;
        case 0x2acb5cu: goto label_2acb5c;
        case 0x2acb60u: goto label_2acb60;
        case 0x2acb64u: goto label_2acb64;
        case 0x2acb68u: goto label_2acb68;
        case 0x2acb6cu: goto label_2acb6c;
        case 0x2acb70u: goto label_2acb70;
        case 0x2acb74u: goto label_2acb74;
        case 0x2acb78u: goto label_2acb78;
        case 0x2acb7cu: goto label_2acb7c;
        case 0x2acb80u: goto label_2acb80;
        case 0x2acb84u: goto label_2acb84;
        case 0x2acb88u: goto label_2acb88;
        case 0x2acb8cu: goto label_2acb8c;
        case 0x2acb90u: goto label_2acb90;
        case 0x2acb94u: goto label_2acb94;
        case 0x2acb98u: goto label_2acb98;
        case 0x2acb9cu: goto label_2acb9c;
        case 0x2acba0u: goto label_2acba0;
        case 0x2acba4u: goto label_2acba4;
        case 0x2acba8u: goto label_2acba8;
        case 0x2acbacu: goto label_2acbac;
        case 0x2acbb0u: goto label_2acbb0;
        case 0x2acbb4u: goto label_2acbb4;
        case 0x2acbb8u: goto label_2acbb8;
        case 0x2acbbcu: goto label_2acbbc;
        case 0x2acbc0u: goto label_2acbc0;
        case 0x2acbc4u: goto label_2acbc4;
        case 0x2acbc8u: goto label_2acbc8;
        case 0x2acbccu: goto label_2acbcc;
        case 0x2acbd0u: goto label_2acbd0;
        case 0x2acbd4u: goto label_2acbd4;
        case 0x2acbd8u: goto label_2acbd8;
        case 0x2acbdcu: goto label_2acbdc;
        case 0x2acbe0u: goto label_2acbe0;
        case 0x2acbe4u: goto label_2acbe4;
        case 0x2acbe8u: goto label_2acbe8;
        case 0x2acbecu: goto label_2acbec;
        case 0x2acbf0u: goto label_2acbf0;
        case 0x2acbf4u: goto label_2acbf4;
        case 0x2acbf8u: goto label_2acbf8;
        case 0x2acbfcu: goto label_2acbfc;
        case 0x2acc00u: goto label_2acc00;
        case 0x2acc04u: goto label_2acc04;
        case 0x2acc08u: goto label_2acc08;
        case 0x2acc0cu: goto label_2acc0c;
        case 0x2acc10u: goto label_2acc10;
        case 0x2acc14u: goto label_2acc14;
        case 0x2acc18u: goto label_2acc18;
        case 0x2acc1cu: goto label_2acc1c;
        case 0x2acc20u: goto label_2acc20;
        case 0x2acc24u: goto label_2acc24;
        case 0x2acc28u: goto label_2acc28;
        case 0x2acc2cu: goto label_2acc2c;
        case 0x2acc30u: goto label_2acc30;
        case 0x2acc34u: goto label_2acc34;
        case 0x2acc38u: goto label_2acc38;
        case 0x2acc3cu: goto label_2acc3c;
        case 0x2acc40u: goto label_2acc40;
        case 0x2acc44u: goto label_2acc44;
        case 0x2acc48u: goto label_2acc48;
        case 0x2acc4cu: goto label_2acc4c;
        case 0x2acc50u: goto label_2acc50;
        case 0x2acc54u: goto label_2acc54;
        case 0x2acc58u: goto label_2acc58;
        case 0x2acc5cu: goto label_2acc5c;
        case 0x2acc60u: goto label_2acc60;
        case 0x2acc64u: goto label_2acc64;
        case 0x2acc68u: goto label_2acc68;
        case 0x2acc6cu: goto label_2acc6c;
        case 0x2acc70u: goto label_2acc70;
        case 0x2acc74u: goto label_2acc74;
        case 0x2acc78u: goto label_2acc78;
        case 0x2acc7cu: goto label_2acc7c;
        case 0x2acc80u: goto label_2acc80;
        case 0x2acc84u: goto label_2acc84;
        case 0x2acc88u: goto label_2acc88;
        case 0x2acc8cu: goto label_2acc8c;
        case 0x2acc90u: goto label_2acc90;
        case 0x2acc94u: goto label_2acc94;
        case 0x2acc98u: goto label_2acc98;
        case 0x2acc9cu: goto label_2acc9c;
        case 0x2acca0u: goto label_2acca0;
        case 0x2acca4u: goto label_2acca4;
        case 0x2acca8u: goto label_2acca8;
        case 0x2accacu: goto label_2accac;
        case 0x2accb0u: goto label_2accb0;
        case 0x2accb4u: goto label_2accb4;
        case 0x2accb8u: goto label_2accb8;
        case 0x2accbcu: goto label_2accbc;
        case 0x2accc0u: goto label_2accc0;
        case 0x2accc4u: goto label_2accc4;
        case 0x2accc8u: goto label_2accc8;
        case 0x2accccu: goto label_2acccc;
        case 0x2accd0u: goto label_2accd0;
        case 0x2accd4u: goto label_2accd4;
        case 0x2accd8u: goto label_2accd8;
        case 0x2accdcu: goto label_2accdc;
        case 0x2acce0u: goto label_2acce0;
        case 0x2acce4u: goto label_2acce4;
        case 0x2acce8u: goto label_2acce8;
        case 0x2accecu: goto label_2accec;
        case 0x2accf0u: goto label_2accf0;
        case 0x2accf4u: goto label_2accf4;
        case 0x2accf8u: goto label_2accf8;
        case 0x2accfcu: goto label_2accfc;
        case 0x2acd00u: goto label_2acd00;
        case 0x2acd04u: goto label_2acd04;
        case 0x2acd08u: goto label_2acd08;
        case 0x2acd0cu: goto label_2acd0c;
        case 0x2acd10u: goto label_2acd10;
        case 0x2acd14u: goto label_2acd14;
        case 0x2acd18u: goto label_2acd18;
        case 0x2acd1cu: goto label_2acd1c;
        case 0x2acd20u: goto label_2acd20;
        case 0x2acd24u: goto label_2acd24;
        case 0x2acd28u: goto label_2acd28;
        case 0x2acd2cu: goto label_2acd2c;
        case 0x2acd30u: goto label_2acd30;
        case 0x2acd34u: goto label_2acd34;
        case 0x2acd38u: goto label_2acd38;
        case 0x2acd3cu: goto label_2acd3c;
        case 0x2acd40u: goto label_2acd40;
        case 0x2acd44u: goto label_2acd44;
        case 0x2acd48u: goto label_2acd48;
        case 0x2acd4cu: goto label_2acd4c;
        case 0x2acd50u: goto label_2acd50;
        case 0x2acd54u: goto label_2acd54;
        case 0x2acd58u: goto label_2acd58;
        case 0x2acd5cu: goto label_2acd5c;
        case 0x2acd60u: goto label_2acd60;
        case 0x2acd64u: goto label_2acd64;
        case 0x2acd68u: goto label_2acd68;
        case 0x2acd6cu: goto label_2acd6c;
        case 0x2acd70u: goto label_2acd70;
        case 0x2acd74u: goto label_2acd74;
        case 0x2acd78u: goto label_2acd78;
        case 0x2acd7cu: goto label_2acd7c;
        case 0x2acd80u: goto label_2acd80;
        case 0x2acd84u: goto label_2acd84;
        case 0x2acd88u: goto label_2acd88;
        case 0x2acd8cu: goto label_2acd8c;
        case 0x2acd90u: goto label_2acd90;
        case 0x2acd94u: goto label_2acd94;
        case 0x2acd98u: goto label_2acd98;
        case 0x2acd9cu: goto label_2acd9c;
        case 0x2acda0u: goto label_2acda0;
        case 0x2acda4u: goto label_2acda4;
        case 0x2acda8u: goto label_2acda8;
        case 0x2acdacu: goto label_2acdac;
        case 0x2acdb0u: goto label_2acdb0;
        case 0x2acdb4u: goto label_2acdb4;
        case 0x2acdb8u: goto label_2acdb8;
        case 0x2acdbcu: goto label_2acdbc;
        case 0x2acdc0u: goto label_2acdc0;
        case 0x2acdc4u: goto label_2acdc4;
        case 0x2acdc8u: goto label_2acdc8;
        case 0x2acdccu: goto label_2acdcc;
        case 0x2acdd0u: goto label_2acdd0;
        case 0x2acdd4u: goto label_2acdd4;
        case 0x2acdd8u: goto label_2acdd8;
        case 0x2acddcu: goto label_2acddc;
        case 0x2acde0u: goto label_2acde0;
        case 0x2acde4u: goto label_2acde4;
        case 0x2acde8u: goto label_2acde8;
        case 0x2acdecu: goto label_2acdec;
        case 0x2acdf0u: goto label_2acdf0;
        case 0x2acdf4u: goto label_2acdf4;
        case 0x2acdf8u: goto label_2acdf8;
        case 0x2acdfcu: goto label_2acdfc;
        case 0x2ace00u: goto label_2ace00;
        case 0x2ace04u: goto label_2ace04;
        case 0x2ace08u: goto label_2ace08;
        case 0x2ace0cu: goto label_2ace0c;
        case 0x2ace10u: goto label_2ace10;
        case 0x2ace14u: goto label_2ace14;
        case 0x2ace18u: goto label_2ace18;
        case 0x2ace1cu: goto label_2ace1c;
        case 0x2ace20u: goto label_2ace20;
        case 0x2ace24u: goto label_2ace24;
        case 0x2ace28u: goto label_2ace28;
        case 0x2ace2cu: goto label_2ace2c;
        case 0x2ace30u: goto label_2ace30;
        case 0x2ace34u: goto label_2ace34;
        case 0x2ace38u: goto label_2ace38;
        case 0x2ace3cu: goto label_2ace3c;
        case 0x2ace40u: goto label_2ace40;
        case 0x2ace44u: goto label_2ace44;
        case 0x2ace48u: goto label_2ace48;
        case 0x2ace4cu: goto label_2ace4c;
        default: break;
    }

    ctx->pc = 0x2aca70u;

label_2aca70:
    // 0x2aca70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aca70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2aca74:
    // 0x2aca74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2aca74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2aca78:
    // 0x2aca78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2aca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2aca7c:
    // 0x2aca7c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2aca7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2aca80:
    // 0x2aca80: 0x3e00008  jr          $ra
label_2aca84:
    if (ctx->pc == 0x2ACA84u) {
        ctx->pc = 0x2ACA88u;
        goto label_2aca88;
    }
    ctx->pc = 0x2ACA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACA88u;
label_2aca88:
    // 0x2aca88: 0x0  nop
    ctx->pc = 0x2aca88u;
    // NOP
label_2aca8c:
    // 0x2aca8c: 0x0  nop
    ctx->pc = 0x2aca8cu;
    // NOP
label_2aca90:
    // 0x2aca90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2aca94:
    // 0x2aca94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2aca98:
    // 0x2aca98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2aca98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2aca9c:
    // 0x2aca9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2aca9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_2acaa0:
    // 0x2acaa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2acaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2acaa4:
    // 0x2acaa4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2acaa8:
    if (ctx->pc == 0x2ACAA8u) {
        ctx->pc = 0x2ACAACu;
        goto label_2acaac;
    }
    ctx->pc = 0x2ACAA4u;
    {
        const bool branch_taken_0x2acaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acaa4) {
            ctx->pc = 0x2ACB14u;
            goto label_2acb14;
        }
    }
    ctx->pc = 0x2ACAACu;
label_2acaac:
    // 0x2acaac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2acaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2acab0:
    // 0x2acab0: 0x246364e0  addiu       $v1, $v1, 0x64E0
    ctx->pc = 0x2acab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25824));
label_2acab4:
    // 0x2acab4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2acab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2acab8:
    // 0x2acab8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2acab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2acabc:
    // 0x2acabc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2acabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2acac0:
    // 0x2acac0: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2acac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2acac4:
    // 0x2acac4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2acac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2acac8:
    // 0x2acac8: 0xc0ab0e4  jal         func_2AC390
label_2acacc:
    if (ctx->pc == 0x2ACACCu) {
        ctx->pc = 0x2ACAD0u;
        goto label_2acad0;
    }
    ctx->pc = 0x2ACAC8u;
    SET_GPR_U32(ctx, 31, 0x2ACAD0u);
    ctx->pc = 0x2AC390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC390u, 0x2ACAC8u, 0x2ACAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACAD0u;
label_2acad0:
    // 0x2acad0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2acad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2acad4:
    // 0x2acad4: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2acad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_2acad8:
    // 0x2acad8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2acad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2acadc:
    // 0x2acadc: 0xc0ab16c  jal         func_2AC5B0
label_2acae0:
    if (ctx->pc == 0x2ACAE0u) {
        ctx->pc = 0x2ACAE4u;
        goto label_2acae4;
    }
    ctx->pc = 0x2ACADCu;
    SET_GPR_U32(ctx, 31, 0x2ACAE4u);
    ctx->pc = 0x2AC5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC5B0u, 0x2ACADCu, 0x2ACAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACAE4u;
label_2acae4:
    // 0x2acae4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2acae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2acae8:
    // 0x2acae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acaec:
    // 0x2acaec: 0xc084ffc  jal         func_213FF0
label_2acaf0:
    if (ctx->pc == 0x2ACAF0u) {
        ctx->pc = 0x2ACAF4u;
        goto label_2acaf4;
    }
    ctx->pc = 0x2ACAECu;
    SET_GPR_U32(ctx, 31, 0x2ACAF4u);
    ctx->pc = 0x213FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213FF0u, 0x2ACAECu, 0x2ACAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACAF4u;
label_2acaf4:
    // 0x2acaf4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2acaf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_2acaf8:
    // 0x2acaf8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2acaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2acafc:
    // 0x2acafc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2acafcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2acb00:
    // 0x2acb00: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2acb04:
    if (ctx->pc == 0x2ACB04u) {
        ctx->pc = 0x2ACB08u;
        goto label_2acb08;
    }
    ctx->pc = 0x2ACB00u;
    {
        const bool branch_taken_0x2acb00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2acb00) {
            ctx->pc = 0x2ACB14u;
            goto label_2acb14;
        }
    }
    ctx->pc = 0x2ACB08u;
label_2acb08:
    // 0x2acb08: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2acb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2acb0c:
    // 0x2acb0c: 0xc0ba070  jal         func_2E81C0
label_2acb10:
    if (ctx->pc == 0x2ACB10u) {
        ctx->pc = 0x2ACB14u;
        goto label_2acb14;
    }
    ctx->pc = 0x2ACB0Cu;
    SET_GPR_U32(ctx, 31, 0x2ACB14u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2ACB0Cu, 0x2ACB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB14u;
label_2acb14:
    // 0x2acb14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2acb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2acb18:
    // 0x2acb18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2acb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2acb1c:
    // 0x2acb1c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2acb1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2acb20:
    // 0x2acb20: 0x3e00008  jr          $ra
label_2acb24:
    if (ctx->pc == 0x2ACB24u) {
        ctx->pc = 0x2ACB28u;
        goto label_2acb28;
    }
    ctx->pc = 0x2ACB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACB28u;
label_2acb28:
    // 0x2acb28: 0x0  nop
    ctx->pc = 0x2acb28u;
    // NOP
label_2acb2c:
    // 0x2acb2c: 0x0  nop
    ctx->pc = 0x2acb2cu;
    // NOP
label_2acb30:
    // 0x2acb30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2acb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2acb34:
    // 0x2acb34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2acb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2acb38:
    // 0x2acb38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2acb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2acb3c:
    // 0x2acb3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2acb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2acb40:
    // 0x2acb40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2acb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2acb44:
    // 0x2acb44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2acb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2acb48:
    // 0x2acb48: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2acb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_2acb4c:
    // 0x2acb4c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2acb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acb50:
    // 0x2acb50: 0xc085020  jal         func_214080
label_2acb54:
    if (ctx->pc == 0x2ACB54u) {
        ctx->pc = 0x2ACB58u;
        goto label_2acb58;
    }
    ctx->pc = 0x2ACB50u;
    SET_GPR_U32(ctx, 31, 0x2ACB58u);
    ctx->pc = 0x214080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214080u, 0x2ACB50u, 0x2ACB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB58u;
label_2acb58:
    // 0x2acb58: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2acb58u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2acb5c:
    // 0x2acb5c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x2acb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2acb60:
    // 0x2acb60: 0xc119b68  jal         func_466DA0
label_2acb64:
    if (ctx->pc == 0x2ACB64u) {
        ctx->pc = 0x2ACB68u;
        goto label_2acb68;
    }
    ctx->pc = 0x2ACB60u;
    SET_GPR_U32(ctx, 31, 0x2ACB68u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2ACB60u, 0x2ACB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB68u;
label_2acb68:
    // 0x2acb68: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x2acb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2acb6c:
    // 0x2acb6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2acb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2acb70:
    // 0x2acb70: 0xc0400e0  jal         func_100380
label_2acb74:
    if (ctx->pc == 0x2ACB74u) {
        ctx->pc = 0x2ACB78u;
        goto label_2acb78;
    }
    ctx->pc = 0x2ACB70u;
    SET_GPR_U32(ctx, 31, 0x2ACB78u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2ACB70u, 0x2ACB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB78u;
label_2acb78:
    // 0x2acb78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2acb78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2acb7c:
    // 0x2acb7c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2acb80:
    if (ctx->pc == 0x2ACB80u) {
        ctx->pc = 0x2ACB84u;
        goto label_2acb84;
    }
    ctx->pc = 0x2ACB7Cu;
    {
        const bool branch_taken_0x2acb7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acb7c) {
            ctx->pc = 0x2ACB98u;
            goto label_2acb98;
        }
    }
    ctx->pc = 0x2ACB84u;
label_2acb84:
    // 0x2acb84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2acb88:
    // 0x2acb88: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2acb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acb8c:
    // 0x2acb8c: 0xc08ef78  jal         func_23BDE0
label_2acb90:
    if (ctx->pc == 0x2ACB90u) {
        ctx->pc = 0x2ACB94u;
        goto label_2acb94;
    }
    ctx->pc = 0x2ACB8Cu;
    SET_GPR_U32(ctx, 31, 0x2ACB94u);
    ctx->pc = 0x23BDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BDE0u, 0x2ACB8Cu, 0x2ACB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB94u;
label_2acb94:
    // 0x2acb94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2acb94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2acb98:
    // 0x2acb98: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2acb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acb9c:
    // 0x2acb9c: 0xac510038  sw          $s1, 0x38($v0)
    ctx->pc = 0x2acb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 17));
label_2acba0:
    // 0x2acba0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2acba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acba4:
    // 0x2acba4: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x2acba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2acba8:
    // 0x2acba8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2acbac:
    if (ctx->pc == 0x2ACBACu) {
        ctx->pc = 0x2ACBB0u;
        goto label_2acbb0;
    }
    ctx->pc = 0x2ACBA8u;
    {
        const bool branch_taken_0x2acba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acba8) {
            ctx->pc = 0x2ACBECu;
            goto label_2acbec;
        }
    }
    ctx->pc = 0x2ACBB0u;
label_2acbb0:
    // 0x2acbb0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2acbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acbb4:
    // 0x2acbb4: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2acbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2acbb8:
    // 0x2acbb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2acbb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2acbbc:
    // 0x2acbbc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2acbbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2acbc0:
    // 0x2acbc0: 0x320f809  jalr        $t9
label_2acbc4:
    if (ctx->pc == 0x2ACBC4u) {
        ctx->pc = 0x2ACBC8u;
        goto label_2acbc8;
    }
    ctx->pc = 0x2ACBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2ACBC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACBC0u, 0x2ACBC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ACBC8u;
label_2acbc8:
    // 0x2acbc8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2acbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2acbcc:
    // 0x2acbcc: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x2acbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_2acbd0:
    // 0x2acbd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2acbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2acbd4:
    // 0x2acbd4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2acbd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2acbd8:
    // 0x2acbd8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2acbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2acbdc:
    // 0x2acbdc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2acbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2acbe0:
    // 0x2acbe0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2acbe0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2acbe4:
    // 0x2acbe4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2acbe8:
    if (ctx->pc == 0x2ACBE8u) {
        ctx->pc = 0x2ACBECu;
        goto label_2acbec;
    }
    ctx->pc = 0x2ACBE4u;
    {
        const bool branch_taken_0x2acbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acbe4) {
            ctx->pc = 0x2ACBF0u;
            goto label_2acbf0;
        }
    }
    ctx->pc = 0x2ACBECu;
label_2acbec:
    // 0x2acbec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2acbecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acbf0:
    // 0x2acbf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2acbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acbf4:
    // 0x2acbf4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2acbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2acbf8:
    // 0x2acbf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2acbf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acbfc:
    // 0x2acbfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2acbfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acc00:
    // 0x2acc00: 0xc12c5d6  jal         func_4B1758
label_2acc04:
    if (ctx->pc == 0x2ACC04u) {
        ctx->pc = 0x2ACC08u;
        goto label_2acc08;
    }
    ctx->pc = 0x2ACC00u;
    SET_GPR_U32(ctx, 31, 0x2ACC08u);
    ctx->pc = 0x4B1758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1758u, 0x2ACC00u, 0x2ACC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC08u;
label_2acc08:
    // 0x2acc08: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2acc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acc0c:
    // 0x2acc0c: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x2acc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
label_2acc10:
    // 0x2acc10: 0xc0f144c  jal         func_3C5130
label_2acc14:
    if (ctx->pc == 0x2ACC14u) {
        ctx->pc = 0x2ACC18u;
        goto label_2acc18;
    }
    ctx->pc = 0x2ACC10u;
    SET_GPR_U32(ctx, 31, 0x2ACC18u);
    ctx->pc = 0x3C5130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5130u, 0x2ACC10u, 0x2ACC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC18u;
label_2acc18:
    // 0x2acc18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2acc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2acc1c:
    // 0x2acc1c: 0xc12c65e  jal         func_4B1978
label_2acc20:
    if (ctx->pc == 0x2ACC20u) {
        ctx->pc = 0x2ACC24u;
        goto label_2acc24;
    }
    ctx->pc = 0x2ACC1Cu;
    SET_GPR_U32(ctx, 31, 0x2ACC24u);
    ctx->pc = 0x4B1978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1978u, 0x2ACC1Cu, 0x2ACC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC24u;
label_2acc24:
    // 0x2acc24: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2acc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2acc28:
    // 0x2acc28: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2acc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acc2c:
    // 0x2acc2c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2acc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2acc30:
    // 0x2acc30: 0xac4306a0  sw          $v1, 0x6A0($v0)
    ctx->pc = 0x2acc30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1696), GPR_U32(ctx, 3));
label_2acc34:
    // 0x2acc34: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2acc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2acc38:
    // 0x2acc38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acc3c:
    // 0x2acc3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2acc3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acc40:
    // 0x2acc40: 0xc12b5f6  jal         func_4AD7D8
label_2acc44:
    if (ctx->pc == 0x2ACC44u) {
        ctx->pc = 0x2ACC48u;
        goto label_2acc48;
    }
    ctx->pc = 0x2ACC40u;
    SET_GPR_U32(ctx, 31, 0x2ACC48u);
    ctx->pc = 0x4AD7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD7D8u, 0x2ACC40u, 0x2ACC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC48u;
label_2acc48:
    // 0x2acc48: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2acc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acc4c:
    // 0x2acc4c: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x2acc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_2acc50:
    // 0x2acc50: 0xc7808260  lwc1        $f0, -0x7DA0($gp)
    ctx->pc = 0x2acc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2acc54:
    // 0x2acc54: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2acc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acc58:
    // 0x2acc58: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2acc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2acc5c:
    // 0x2acc5c: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2acc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_2acc60:
    // 0x2acc60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2acc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acc64:
    // 0x2acc64: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2acc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2acc68:
    // 0x2acc68: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2acc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2acc6c:
    // 0x2acc6c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2acc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_2acc70:
    // 0x2acc70: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x2acc70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
label_2acc74:
    // 0x2acc74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2acc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2acc78:
    // 0x2acc78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2acc78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2acc7c:
    // 0x2acc7c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2acc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acc80:
    // 0x2acc80: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2acc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2acc84:
    // 0x2acc84: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x2acc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
label_2acc88:
    // 0x2acc88: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2acc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acc8c:
    // 0x2acc8c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2acc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2acc90:
    // 0x2acc90: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x2acc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2acc94:
    // 0x2acc94: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2acc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_2acc98:
    // 0x2acc98: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x2acc98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
label_2acc9c:
    // 0x2acc9c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2acc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acca0:
    // 0x2acca0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2acca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2acca4:
    // 0x2acca4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2acca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acca8:
    // 0x2acca8: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2acca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2accac:
    // 0x2accac: 0xac431418  sw          $v1, 0x1418($v0)
    ctx->pc = 0x2accacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5144), GPR_U32(ctx, 3));
label_2accb0:
    // 0x2accb0: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x2accb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2accb4:
    // 0x2accb4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2accb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2accb8:
    // 0x2accb8: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x2accb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_2accbc:
    // 0x2accbc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2accbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2accc0:
    // 0x2accc0: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x2accc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_2accc4:
    // 0x2accc4: 0x24460400  addiu       $a2, $v0, 0x400
    ctx->pc = 0x2accc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
label_2accc8:
    // 0x2accc8: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x2accc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_2acccc:
    // 0x2acccc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2accccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2accd0:
    // 0x2accd0: 0xc0ab3c8  jal         func_2ACF20
label_2accd4:
    if (ctx->pc == 0x2ACCD4u) {
        ctx->pc = 0x2ACCD8u;
        goto label_2accd8;
    }
    ctx->pc = 0x2ACCD0u;
    SET_GPR_U32(ctx, 31, 0x2ACCD8u);
    ctx->pc = 0x2ACF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACF20u, 0x2ACCD0u, 0x2ACCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACCD8u;
label_2accd8:
    // 0x2accd8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2accd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2accdc:
    // 0x2accdc: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x2accdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2acce0:
    // 0x2acce0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2acce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acce4:
    // 0x2acce4: 0x8c530048  lw          $s3, 0x48($v0)
    ctx->pc = 0x2acce4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2acce8:
    // 0x2acce8: 0x26630200  addiu       $v1, $s3, 0x200
    ctx->pc = 0x2acce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
label_2accec:
    // 0x2accec: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x2accecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_2accf0:
    // 0x2accf0: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x2accf0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2accf4:
    // 0x2accf4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2accf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2accf8:
    // 0x2accf8: 0xac530044  sw          $s3, 0x44($v0)
    ctx->pc = 0x2accf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 19));
label_2accfc:
    // 0x2accfc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2accfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acd00:
    // 0x2acd00: 0x1000000f  b           . + 4 + (0xF << 2)
label_2acd04:
    if (ctx->pc == 0x2ACD04u) {
        ctx->pc = 0x2ACD08u;
        goto label_2acd08;
    }
    ctx->pc = 0x2ACD00u;
    {
        const bool branch_taken_0x2acd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acd00) {
            ctx->pc = 0x2ACD40u;
            goto label_2acd40;
        }
    }
    ctx->pc = 0x2ACD08u;
label_2acd08:
    // 0x2acd08: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2acd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acd0c:
    // 0x2acd0c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2acd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2acd10:
    // 0x2acd10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acd14:
    // 0x2acd14: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2acd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2acd18:
    // 0x2acd18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2acd18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acd1c:
    // 0x2acd1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2acd1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acd20:
    // 0x2acd20: 0xc12cc30  jal         func_4B30C0
label_2acd24:
    if (ctx->pc == 0x2ACD24u) {
        ctx->pc = 0x2ACD28u;
        goto label_2acd28;
    }
    ctx->pc = 0x2ACD20u;
    SET_GPR_U32(ctx, 31, 0x2ACD28u);
    ctx->pc = 0x4B30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B30C0u, 0x2ACD20u, 0x2ACD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD28u;
label_2acd28:
    // 0x2acd28: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2acd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acd2c:
    // 0x2acd2c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2acd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2acd30:
    // 0x2acd30: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x2acd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2acd34:
    // 0x2acd34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2acd38:
    // 0x2acd38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2acd38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2acd3c:
    // 0x2acd3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2acd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2acd40:
    // 0x2acd40: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2acd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acd44:
    // 0x2acd44: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x2acd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_2acd48:
    // 0x2acd48: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2acd48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2acd4c:
    // 0x2acd4c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_2acd50:
    if (ctx->pc == 0x2ACD50u) {
        ctx->pc = 0x2ACD54u;
        goto label_2acd54;
    }
    ctx->pc = 0x2ACD4Cu;
    {
        const bool branch_taken_0x2acd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acd4c) {
            ctx->pc = 0x2ACD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acd08;
        }
    }
    ctx->pc = 0x2ACD54u;
label_2acd54:
    // 0x2acd54: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2acd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acd58:
    // 0x2acd58: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2acd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acd5c:
    // 0x2acd5c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2acd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acd60:
    // 0x2acd60: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x2acd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_2acd64:
    // 0x2acd64: 0x8c650044  lw          $a1, 0x44($v1)
    ctx->pc = 0x2acd64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2acd68:
    // 0x2acd68: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x2acd68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_2acd6c:
    // 0x2acd6c: 0xc12a63a  jal         func_4A98E8
label_2acd70:
    if (ctx->pc == 0x2ACD70u) {
        ctx->pc = 0x2ACD74u;
        goto label_2acd74;
    }
    ctx->pc = 0x2ACD6Cu;
    SET_GPR_U32(ctx, 31, 0x2ACD74u);
    ctx->pc = 0x4A98E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A98E8u, 0x2ACD6Cu, 0x2ACD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD74u;
label_2acd74:
    // 0x2acd74: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x2acd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_2acd78:
    // 0x2acd78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acd7c:
    // 0x2acd7c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2acd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2acd80:
    // 0x2acd80: 0xc0ab394  jal         func_2ACE50
label_2acd84:
    if (ctx->pc == 0x2ACD84u) {
        ctx->pc = 0x2ACD88u;
        goto label_2acd88;
    }
    ctx->pc = 0x2ACD80u;
    SET_GPR_U32(ctx, 31, 0x2ACD88u);
    ctx->pc = 0x2ACE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE50u, 0x2ACD80u, 0x2ACD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD88u;
label_2acd88:
    // 0x2acd88: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2acd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acd8c:
    // 0x2acd8c: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x2acd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_2acd90:
    // 0x2acd90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2acd90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acd94:
    // 0x2acd94: 0x1000000e  b           . + 4 + (0xE << 2)
label_2acd98:
    if (ctx->pc == 0x2ACD98u) {
        ctx->pc = 0x2ACD9Cu;
        goto label_2acd9c;
    }
    ctx->pc = 0x2ACD94u;
    {
        const bool branch_taken_0x2acd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acd94) {
            ctx->pc = 0x2ACDD0u;
            goto label_2acdd0;
        }
    }
    ctx->pc = 0x2ACD9Cu;
label_2acd9c:
    // 0x2acd9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2acd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acda0:
    // 0x2acda0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acda4:
    // 0x2acda4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2acda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acda8:
    // 0x2acda8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2acda8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acdac:
    // 0x2acdac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2acdacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acdb0:
    // 0x2acdb0: 0xc12b10c  jal         func_4AC430
label_2acdb4:
    if (ctx->pc == 0x2ACDB4u) {
        ctx->pc = 0x2ACDB8u;
        goto label_2acdb8;
    }
    ctx->pc = 0x2ACDB0u;
    SET_GPR_U32(ctx, 31, 0x2ACDB8u);
    ctx->pc = 0x4AC430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC430u, 0x2ACDB0u, 0x2ACDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACDB8u;
label_2acdb8:
    // 0x2acdb8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2acdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acdbc:
    // 0x2acdbc: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2acdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2acdc0:
    // 0x2acdc0: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x2acdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2acdc4:
    // 0x2acdc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2acdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2acdc8:
    // 0x2acdc8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2acdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2acdcc:
    // 0x2acdcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2acdccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2acdd0:
    // 0x2acdd0: 0x2e020040  sltiu       $v0, $s0, 0x40
    ctx->pc = 0x2acdd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_2acdd4:
    // 0x2acdd4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_2acdd8:
    if (ctx->pc == 0x2ACDD8u) {
        ctx->pc = 0x2ACDDCu;
        goto label_2acddc;
    }
    ctx->pc = 0x2ACDD4u;
    {
        const bool branch_taken_0x2acdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acdd4) {
            ctx->pc = 0x2ACD9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acd9c;
        }
    }
    ctx->pc = 0x2ACDDCu;
label_2acddc:
    // 0x2acddc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2acddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acde0:
    // 0x2acde0: 0x1000000e  b           . + 4 + (0xE << 2)
label_2acde4:
    if (ctx->pc == 0x2ACDE4u) {
        ctx->pc = 0x2ACDE8u;
        goto label_2acde8;
    }
    ctx->pc = 0x2ACDE0u;
    {
        const bool branch_taken_0x2acde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acde0) {
            ctx->pc = 0x2ACE1Cu;
            goto label_2ace1c;
        }
    }
    ctx->pc = 0x2ACDE8u;
label_2acde8:
    // 0x2acde8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2acde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2acdec:
    // 0x2acdec: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2acdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2acdf0:
    // 0x2acdf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2acdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acdf4:
    // 0x2acdf4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2acdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2acdf8:
    // 0x2acdf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2acdf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acdfc:
    // 0x2acdfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2acdfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ace00:
    // 0x2ace00: 0xc12be2a  jal         func_4AF8A8
label_2ace04:
    if (ctx->pc == 0x2ACE04u) {
        ctx->pc = 0x2ACE08u;
        goto label_2ace08;
    }
    ctx->pc = 0x2ACE00u;
    SET_GPR_U32(ctx, 31, 0x2ACE08u);
    ctx->pc = 0x4AF8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF8A8u, 0x2ACE00u, 0x2ACE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE08u;
label_2ace08:
    // 0x2ace08: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2ace08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2ace0c:
    // 0x2ace0c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2ace0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2ace10:
    // 0x2ace10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ace10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ace14:
    // 0x2ace14: 0xac620074  sw          $v0, 0x74($v1)
    ctx->pc = 0x2ace14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 2));
label_2ace18:
    // 0x2ace18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ace18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ace1c:
    // 0x2ace1c: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x2ace1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2ace20:
    // 0x2ace20: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_2ace24:
    if (ctx->pc == 0x2ACE24u) {
        ctx->pc = 0x2ACE28u;
        goto label_2ace28;
    }
    ctx->pc = 0x2ACE20u;
    {
        const bool branch_taken_0x2ace20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ace20) {
            ctx->pc = 0x2ACDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acde8;
        }
    }
    ctx->pc = 0x2ACE28u;
label_2ace28:
    // 0x2ace28: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2ace28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ace2c:
    // 0x2ace2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ace2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ace30:
    // 0x2ace30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ace30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ace34:
    // 0x2ace34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ace34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ace38:
    // 0x2ace38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ace38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ace3c:
    // 0x2ace3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ace3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ace40:
    // 0x2ace40: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2ace40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2ace44:
    // 0x2ace44: 0x3e00008  jr          $ra
label_2ace48:
    if (ctx->pc == 0x2ACE48u) {
        ctx->pc = 0x2ACE4Cu;
        goto label_2ace4c;
    }
    ctx->pc = 0x2ACE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACE4Cu;
label_2ace4c:
    // 0x2ace4c: 0x0  nop
    ctx->pc = 0x2ace4cu;
    // NOP
    ctx->pc = 0x2ace50u;
}
