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

// Function: sub_0039BD18
// Address: 0x39bd18 - 0x39c0a8
void sub_0039BD18_0x39bd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BD18_0x39bd18");
#endif

    switch (ctx->pc) {
        case 0x39bd18u: goto label_39bd18;
        case 0x39bd1cu: goto label_39bd1c;
        case 0x39bd20u: goto label_39bd20;
        case 0x39bd24u: goto label_39bd24;
        case 0x39bd28u: goto label_39bd28;
        case 0x39bd2cu: goto label_39bd2c;
        case 0x39bd30u: goto label_39bd30;
        case 0x39bd34u: goto label_39bd34;
        case 0x39bd38u: goto label_39bd38;
        case 0x39bd3cu: goto label_39bd3c;
        case 0x39bd40u: goto label_39bd40;
        case 0x39bd44u: goto label_39bd44;
        case 0x39bd48u: goto label_39bd48;
        case 0x39bd4cu: goto label_39bd4c;
        case 0x39bd50u: goto label_39bd50;
        case 0x39bd54u: goto label_39bd54;
        case 0x39bd58u: goto label_39bd58;
        case 0x39bd5cu: goto label_39bd5c;
        case 0x39bd60u: goto label_39bd60;
        case 0x39bd64u: goto label_39bd64;
        case 0x39bd68u: goto label_39bd68;
        case 0x39bd6cu: goto label_39bd6c;
        case 0x39bd70u: goto label_39bd70;
        case 0x39bd74u: goto label_39bd74;
        case 0x39bd78u: goto label_39bd78;
        case 0x39bd7cu: goto label_39bd7c;
        case 0x39bd80u: goto label_39bd80;
        case 0x39bd84u: goto label_39bd84;
        case 0x39bd88u: goto label_39bd88;
        case 0x39bd8cu: goto label_39bd8c;
        case 0x39bd90u: goto label_39bd90;
        case 0x39bd94u: goto label_39bd94;
        case 0x39bd98u: goto label_39bd98;
        case 0x39bd9cu: goto label_39bd9c;
        case 0x39bda0u: goto label_39bda0;
        case 0x39bda4u: goto label_39bda4;
        case 0x39bda8u: goto label_39bda8;
        case 0x39bdacu: goto label_39bdac;
        case 0x39bdb0u: goto label_39bdb0;
        case 0x39bdb4u: goto label_39bdb4;
        case 0x39bdb8u: goto label_39bdb8;
        case 0x39bdbcu: goto label_39bdbc;
        case 0x39bdc0u: goto label_39bdc0;
        case 0x39bdc4u: goto label_39bdc4;
        case 0x39bdc8u: goto label_39bdc8;
        case 0x39bdccu: goto label_39bdcc;
        case 0x39bdd0u: goto label_39bdd0;
        case 0x39bdd4u: goto label_39bdd4;
        case 0x39bdd8u: goto label_39bdd8;
        case 0x39bddcu: goto label_39bddc;
        case 0x39bde0u: goto label_39bde0;
        case 0x39bde4u: goto label_39bde4;
        case 0x39bde8u: goto label_39bde8;
        case 0x39bdecu: goto label_39bdec;
        case 0x39bdf0u: goto label_39bdf0;
        case 0x39bdf4u: goto label_39bdf4;
        case 0x39bdf8u: goto label_39bdf8;
        case 0x39bdfcu: goto label_39bdfc;
        case 0x39be00u: goto label_39be00;
        case 0x39be04u: goto label_39be04;
        case 0x39be08u: goto label_39be08;
        case 0x39be0cu: goto label_39be0c;
        case 0x39be10u: goto label_39be10;
        case 0x39be14u: goto label_39be14;
        case 0x39be18u: goto label_39be18;
        case 0x39be1cu: goto label_39be1c;
        case 0x39be20u: goto label_39be20;
        case 0x39be24u: goto label_39be24;
        case 0x39be28u: goto label_39be28;
        case 0x39be2cu: goto label_39be2c;
        case 0x39be30u: goto label_39be30;
        case 0x39be34u: goto label_39be34;
        case 0x39be38u: goto label_39be38;
        case 0x39be3cu: goto label_39be3c;
        case 0x39be40u: goto label_39be40;
        case 0x39be44u: goto label_39be44;
        case 0x39be48u: goto label_39be48;
        case 0x39be4cu: goto label_39be4c;
        case 0x39be50u: goto label_39be50;
        case 0x39be54u: goto label_39be54;
        case 0x39be58u: goto label_39be58;
        case 0x39be5cu: goto label_39be5c;
        case 0x39be60u: goto label_39be60;
        case 0x39be64u: goto label_39be64;
        case 0x39be68u: goto label_39be68;
        case 0x39be6cu: goto label_39be6c;
        case 0x39be70u: goto label_39be70;
        case 0x39be74u: goto label_39be74;
        case 0x39be78u: goto label_39be78;
        case 0x39be7cu: goto label_39be7c;
        case 0x39be80u: goto label_39be80;
        case 0x39be84u: goto label_39be84;
        case 0x39be88u: goto label_39be88;
        case 0x39be8cu: goto label_39be8c;
        case 0x39be90u: goto label_39be90;
        case 0x39be94u: goto label_39be94;
        case 0x39be98u: goto label_39be98;
        case 0x39be9cu: goto label_39be9c;
        case 0x39bea0u: goto label_39bea0;
        case 0x39bea4u: goto label_39bea4;
        case 0x39bea8u: goto label_39bea8;
        case 0x39beacu: goto label_39beac;
        case 0x39beb0u: goto label_39beb0;
        case 0x39beb4u: goto label_39beb4;
        case 0x39beb8u: goto label_39beb8;
        case 0x39bebcu: goto label_39bebc;
        case 0x39bec0u: goto label_39bec0;
        case 0x39bec4u: goto label_39bec4;
        case 0x39bec8u: goto label_39bec8;
        case 0x39beccu: goto label_39becc;
        case 0x39bed0u: goto label_39bed0;
        case 0x39bed4u: goto label_39bed4;
        case 0x39bed8u: goto label_39bed8;
        case 0x39bedcu: goto label_39bedc;
        case 0x39bee0u: goto label_39bee0;
        case 0x39bee4u: goto label_39bee4;
        case 0x39bee8u: goto label_39bee8;
        case 0x39beecu: goto label_39beec;
        case 0x39bef0u: goto label_39bef0;
        case 0x39bef4u: goto label_39bef4;
        case 0x39bef8u: goto label_39bef8;
        case 0x39befcu: goto label_39befc;
        case 0x39bf00u: goto label_39bf00;
        case 0x39bf04u: goto label_39bf04;
        case 0x39bf08u: goto label_39bf08;
        case 0x39bf0cu: goto label_39bf0c;
        case 0x39bf10u: goto label_39bf10;
        case 0x39bf14u: goto label_39bf14;
        case 0x39bf18u: goto label_39bf18;
        case 0x39bf1cu: goto label_39bf1c;
        case 0x39bf20u: goto label_39bf20;
        case 0x39bf24u: goto label_39bf24;
        case 0x39bf28u: goto label_39bf28;
        case 0x39bf2cu: goto label_39bf2c;
        case 0x39bf30u: goto label_39bf30;
        case 0x39bf34u: goto label_39bf34;
        case 0x39bf38u: goto label_39bf38;
        case 0x39bf3cu: goto label_39bf3c;
        case 0x39bf40u: goto label_39bf40;
        case 0x39bf44u: goto label_39bf44;
        case 0x39bf48u: goto label_39bf48;
        case 0x39bf4cu: goto label_39bf4c;
        case 0x39bf50u: goto label_39bf50;
        case 0x39bf54u: goto label_39bf54;
        case 0x39bf58u: goto label_39bf58;
        case 0x39bf5cu: goto label_39bf5c;
        case 0x39bf60u: goto label_39bf60;
        case 0x39bf64u: goto label_39bf64;
        case 0x39bf68u: goto label_39bf68;
        case 0x39bf6cu: goto label_39bf6c;
        case 0x39bf70u: goto label_39bf70;
        case 0x39bf74u: goto label_39bf74;
        case 0x39bf78u: goto label_39bf78;
        case 0x39bf7cu: goto label_39bf7c;
        case 0x39bf80u: goto label_39bf80;
        case 0x39bf84u: goto label_39bf84;
        case 0x39bf88u: goto label_39bf88;
        case 0x39bf8cu: goto label_39bf8c;
        case 0x39bf90u: goto label_39bf90;
        case 0x39bf94u: goto label_39bf94;
        case 0x39bf98u: goto label_39bf98;
        case 0x39bf9cu: goto label_39bf9c;
        case 0x39bfa0u: goto label_39bfa0;
        case 0x39bfa4u: goto label_39bfa4;
        case 0x39bfa8u: goto label_39bfa8;
        case 0x39bfacu: goto label_39bfac;
        case 0x39bfb0u: goto label_39bfb0;
        case 0x39bfb4u: goto label_39bfb4;
        case 0x39bfb8u: goto label_39bfb8;
        case 0x39bfbcu: goto label_39bfbc;
        case 0x39bfc0u: goto label_39bfc0;
        case 0x39bfc4u: goto label_39bfc4;
        case 0x39bfc8u: goto label_39bfc8;
        case 0x39bfccu: goto label_39bfcc;
        case 0x39bfd0u: goto label_39bfd0;
        case 0x39bfd4u: goto label_39bfd4;
        case 0x39bfd8u: goto label_39bfd8;
        case 0x39bfdcu: goto label_39bfdc;
        case 0x39bfe0u: goto label_39bfe0;
        case 0x39bfe4u: goto label_39bfe4;
        case 0x39bfe8u: goto label_39bfe8;
        case 0x39bfecu: goto label_39bfec;
        case 0x39bff0u: goto label_39bff0;
        case 0x39bff4u: goto label_39bff4;
        case 0x39bff8u: goto label_39bff8;
        case 0x39bffcu: goto label_39bffc;
        case 0x39c000u: goto label_39c000;
        case 0x39c004u: goto label_39c004;
        case 0x39c008u: goto label_39c008;
        case 0x39c00cu: goto label_39c00c;
        case 0x39c010u: goto label_39c010;
        case 0x39c014u: goto label_39c014;
        case 0x39c018u: goto label_39c018;
        case 0x39c01cu: goto label_39c01c;
        case 0x39c020u: goto label_39c020;
        case 0x39c024u: goto label_39c024;
        case 0x39c028u: goto label_39c028;
        case 0x39c02cu: goto label_39c02c;
        case 0x39c030u: goto label_39c030;
        case 0x39c034u: goto label_39c034;
        case 0x39c038u: goto label_39c038;
        case 0x39c03cu: goto label_39c03c;
        case 0x39c040u: goto label_39c040;
        case 0x39c044u: goto label_39c044;
        case 0x39c048u: goto label_39c048;
        case 0x39c04cu: goto label_39c04c;
        case 0x39c050u: goto label_39c050;
        case 0x39c054u: goto label_39c054;
        case 0x39c058u: goto label_39c058;
        case 0x39c05cu: goto label_39c05c;
        case 0x39c060u: goto label_39c060;
        case 0x39c064u: goto label_39c064;
        case 0x39c068u: goto label_39c068;
        case 0x39c06cu: goto label_39c06c;
        case 0x39c070u: goto label_39c070;
        case 0x39c074u: goto label_39c074;
        case 0x39c078u: goto label_39c078;
        case 0x39c07cu: goto label_39c07c;
        case 0x39c080u: goto label_39c080;
        case 0x39c084u: goto label_39c084;
        case 0x39c088u: goto label_39c088;
        case 0x39c08cu: goto label_39c08c;
        case 0x39c090u: goto label_39c090;
        case 0x39c094u: goto label_39c094;
        case 0x39c098u: goto label_39c098;
        case 0x39c09cu: goto label_39c09c;
        case 0x39c0a0u: goto label_39c0a0;
        case 0x39c0a4u: goto label_39c0a4;
        default: break;
    }

    ctx->pc = 0x39bd18u;

label_39bd18:
    // 0x39bd18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39bd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39bd1c:
    // 0x39bd1c: 0x8f82a9ec  lw          $v0, -0x5614($gp)
    ctx->pc = 0x39bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945260)));
label_39bd20:
    // 0x39bd20: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x39bd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_39bd24:
    // 0x39bd24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39bd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_39bd28:
    // 0x39bd28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39bd28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39bd2c:
    // 0x39bd2c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x39bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_39bd30:
    // 0x39bd30: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x39bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39bd34:
    // 0x39bd34: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x39bd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_39bd38:
    // 0x39bd38: 0x2632002c  addiu       $s2, $s1, 0x2C
    ctx->pc = 0x39bd38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_39bd3c:
    // 0x39bd3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39bd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39bd40:
    // 0x39bd40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x39bd40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39bd44:
    // 0x39bd44: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x39bd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_39bd48:
    // 0x39bd48: 0x8e30002c  lw          $s0, 0x2C($s1)
    ctx->pc = 0x39bd48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_39bd4c:
    // 0x39bd4c: 0x12120019  beq         $s0, $s2, . + 4 + (0x19 << 2)
label_39bd50:
    if (ctx->pc == 0x39BD50u) {
        ctx->pc = 0x39BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BD4Cu;
        // 0x39bd50: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BD54u;
        goto label_39bd54;
    }
    ctx->pc = 0x39BD4Cu;
    {
        const bool branch_taken_0x39bd4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x39BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BD4Cu;
        // 0x39bd50: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bd4c) {
            ctx->pc = 0x39BDB4u;
            goto label_39bdb4;
        }
    }
    ctx->pc = 0x39BD54u;
label_39bd54:
    // 0x39bd54: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_39bd58:
    // 0x39bd58: 0x2453e880  addiu       $s3, $v0, -0x1780
    ctx->pc = 0x39bd58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_39bd5c:
    // 0x39bd5c: 0x2606fff4  addiu       $a2, $s0, -0xC
    ctx->pc = 0x39bd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_39bd60:
    // 0x39bd60: 0x8f82bd68  lw          $v0, -0x4298($gp)
    ctx->pc = 0x39bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
label_39bd64:
    // 0x39bd64: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x39bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_39bd68:
    // 0x39bd68: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x39bd68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39bd6c:
    // 0x39bd6c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x39bd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_39bd70:
    // 0x39bd70: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x39bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_39bd74:
    // 0x39bd74: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x39bd74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39bd78:
    // 0x39bd78: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x39bd78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_39bd7c:
    // 0x39bd7c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39bd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39bd80:
    // 0x39bd80: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x39bd80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_39bd84:
    // 0x39bd84: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x39bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_39bd88:
    // 0x39bd88: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x39bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_39bd8c:
    // 0x39bd8c: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x39bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_39bd90:
    // 0x39bd90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39bd94:
    // 0x39bd94: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x39bd94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_39bd98:
    // 0x39bd98: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x39bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_39bd9c:
    // 0x39bd9c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x39bd9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39bda0:
    // 0x39bda0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x39bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_39bda4:
    // 0x39bda4: 0x40f809  jalr        $v0
label_39bda8:
    if (ctx->pc == 0x39BDA8u) {
        ctx->pc = 0x39BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BDA4u;
        // 0x39bda8: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BDACu;
        goto label_39bdac;
    }
    ctx->pc = 0x39BDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39BDACu);
        ctx->pc = 0x39BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BDA4u;
        // 0x39bda8: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BDA4u, 0x39BDACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39BDACu;
label_39bdac:
    // 0x39bdac: 0x1612ffec  bne         $s0, $s2, . + 4 + (-0x14 << 2)
label_39bdb0:
    if (ctx->pc == 0x39BDB0u) {
        ctx->pc = 0x39BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BDACu;
        // 0x39bdb0: 0x2606fff4  addiu       $a2, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BDB4u;
        goto label_39bdb4;
    }
    ctx->pc = 0x39BDACu;
    {
        const bool branch_taken_0x39bdac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x39BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BDACu;
        // 0x39bdb0: 0x2606fff4  addiu       $a2, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bdac) {
            ctx->pc = 0x39BD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39bd60;
        }
    }
    ctx->pc = 0x39BDB4u;
label_39bdb4:
    // 0x39bdb4: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x39bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_39bdb8:
    // 0x39bdb8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x39bdb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39bdbc:
    // 0x39bdbc: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x39bdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_39bdc0:
    // 0x39bdc0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x39bdc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39bdc4:
    // 0x39bdc4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x39bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_39bdc8:
    // 0x39bdc8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39bdc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39bdcc:
    // 0x39bdcc: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x39bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_39bdd0:
    // 0x39bdd0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x39bdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_39bdd4:
    // 0x39bdd4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39bdd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39bdd8:
    // 0x39bdd8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x39bdd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39bddc:
    // 0x39bddc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x39bddcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39bde0:
    // 0x39bde0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39bde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39bde4:
    // 0x39bde4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x39bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_39bde8:
    // 0x39bde8: 0x3e00008  jr          $ra
label_39bdec:
    if (ctx->pc == 0x39BDECu) {
        ctx->pc = 0x39BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BDE8u;
        // 0x39bdec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BDF0u;
        goto label_39bdf0;
    }
    ctx->pc = 0x39BDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BDE8u;
        // 0x39bdec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BDF0u;
label_39bdf0:
    // 0x39bdf0: 0x8f82a9ec  lw          $v0, -0x5614($gp)
    ctx->pc = 0x39bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945260)));
label_39bdf4:
    // 0x39bdf4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x39bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_39bdf8:
    // 0x39bdf8: 0x3e00008  jr          $ra
label_39bdfc:
    if (ctx->pc == 0x39BDFCu) {
        ctx->pc = 0x39BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BDF8u;
        // 0x39bdfc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BE00u;
        goto label_39be00;
    }
    ctx->pc = 0x39BDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BDF8u;
        // 0x39bdfc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BE00u;
label_39be00:
    // 0x39be00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x39be00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_39be04:
    // 0x39be04: 0x8f87bd68  lw          $a3, -0x4298($gp)
    ctx->pc = 0x39be04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
label_39be08:
    // 0x39be08: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39be08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_39be0c:
    // 0x39be0c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x39be0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_39be10:
    // 0x39be10: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x39be10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_39be14:
    // 0x39be14: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x39be14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_39be18:
    // 0x39be18: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x39be18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_39be1c:
    // 0x39be1c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x39be1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_39be20:
    // 0x39be20: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x39be20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_39be24:
    // 0x39be24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39be24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39be28:
    // 0x39be28: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x39be28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_39be2c:
    // 0x39be2c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x39be2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39be30:
    // 0x39be30: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x39be30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_39be34:
    // 0x39be34: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x39be34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_39be38:
    // 0x39be38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39be38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_39be3c:
    // 0x39be3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39be3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39be40:
    // 0x39be40: 0x8f83a9e0  lw          $v1, -0x5620($gp)
    ctx->pc = 0x39be40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945248)));
label_39be44:
    // 0x39be44: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x39be44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_39be48:
    // 0x39be48: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x39be48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_39be4c:
    // 0x39be4c: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x39be4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_39be50:
    // 0x39be50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39be50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39be54:
    // 0x39be54: 0xacf10008  sw          $s1, 0x8($a3)
    ctx->pc = 0x39be54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 17));
label_39be58:
    // 0x39be58: 0x8c750008  lw          $s5, 0x8($v1)
    ctx->pc = 0x39be58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_39be5c:
    // 0x39be5c: 0x12a00085  beqz        $s5, . + 4 + (0x85 << 2)
label_39be60:
    if (ctx->pc == 0x39BE60u) {
        ctx->pc = 0x39BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BE5Cu;
        // 0x39be60: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BE64u;
        goto label_39be64;
    }
    ctx->pc = 0x39BE5Cu;
    {
        const bool branch_taken_0x39be5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BE5Cu;
        // 0x39be60: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39be5c) {
            ctx->pc = 0x39C074u;
            goto label_39c074;
        }
    }
    ctx->pc = 0x39BE64u;
label_39be64:
    // 0x39be64: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x39be64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_39be68:
    // 0x39be68: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_39be6c:
    if (ctx->pc == 0x39BE6Cu) {
        ctx->pc = 0x39BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BE68u;
        // 0x39be6c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BE70u;
        goto label_39be70;
    }
    ctx->pc = 0x39BE68u;
    {
        const bool branch_taken_0x39be68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BE68u;
        // 0x39be6c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39be68) {
            ctx->pc = 0x39BF18u;
            goto label_39bf18;
        }
    }
    ctx->pc = 0x39BE70u;
label_39be70:
    // 0x39be70: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x39be70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_39be74:
    // 0x39be74: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x39be74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_39be78:
    // 0x39be78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39be78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39be7c:
    // 0x39be7c: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x39be7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_39be80:
    // 0x39be80: 0x24530038  addiu       $s3, $v0, 0x38
    ctx->pc = 0x39be80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_39be84:
    // 0x39be84: 0x50930021  beql        $a0, $s3, . + 4 + (0x21 << 2)
label_39be88:
    if (ctx->pc == 0x39BE88u) {
        ctx->pc = 0x39BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BE84u;
        // 0x39be88: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BE8Cu;
        goto label_39be8c;
    }
    ctx->pc = 0x39BE84u;
    {
        const bool branch_taken_0x39be84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        if (branch_taken_0x39be84) {
            ctx->pc = 0x39BE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BE84u;
            // 0x39be88: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39BF0Cu;
            goto label_39bf0c;
        }
    }
    ctx->pc = 0x39BE8Cu;
label_39be8c:
    // 0x39be8c: 0x0  nop
    ctx->pc = 0x39be8cu;
    // NOP
label_39be90:
    // 0x39be90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39be90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39be94:
    // 0x39be94: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x39be94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_39be98:
    // 0x39be98: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39be98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_39be9c:
    // 0x39be9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39bea0:
    // 0x39bea0: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x39bea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_39bea4:
    // 0x39bea4: 0xac5d0004  sw          $sp, 0x4($v0)
    ctx->pc = 0x39bea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
label_39bea8:
    // 0x39bea8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_39beac:
    if (ctx->pc == 0x39BEACu) {
        ctx->pc = 0x39BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BEA8u;
        // 0x39beac: 0xac9d0000  sw          $sp, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BEB0u;
        goto label_39beb0;
    }
    ctx->pc = 0x39BEA8u;
    {
        const bool branch_taken_0x39bea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BEA8u;
        // 0x39beac: 0xac9d0000  sw          $sp, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bea8) {
            ctx->pc = 0x39BEECu;
            goto label_39beec;
        }
    }
    ctx->pc = 0x39BEB0u;
label_39beb0:
    // 0x39beb0: 0x96020060  lhu         $v0, 0x60($s0)
    ctx->pc = 0x39beb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_39beb4:
    // 0x39beb4: 0x1051000e  beq         $v0, $s1, . + 4 + (0xE << 2)
label_39beb8:
    if (ctx->pc == 0x39BEB8u) {
        ctx->pc = 0x39BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BEB4u;
        // 0x39beb8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BEBCu;
        goto label_39bebc;
    }
    ctx->pc = 0x39BEB4u;
    {
        const bool branch_taken_0x39beb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x39BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BEB4u;
        // 0x39beb8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39beb4) {
            ctx->pc = 0x39BEF0u;
            goto label_39bef0;
        }
    }
    ctx->pc = 0x39BEBCu;
label_39bebc:
    // 0x39bebc: 0xc0e2048  jal         func_388120
label_39bec0:
    if (ctx->pc == 0x39BEC0u) {
        ctx->pc = 0x39BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BEBCu;
        // 0x39bec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BEC4u;
        goto label_39bec4;
    }
    ctx->pc = 0x39BEBCu;
    SET_GPR_U32(ctx, 31, 0x39BEC4u);
    ctx->pc = 0x39BEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BEBCu;
    // 0x39bec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x39BEBCu, 0x39BEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BEC4u;
label_39bec4:
    // 0x39bec4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39bec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39bec8:
    // 0x39bec8: 0xc1060d2  jal         func_418348
label_39becc:
    if (ctx->pc == 0x39BECCu) {
        ctx->pc = 0x39BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BEC8u;
        // 0x39becc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BED0u;
        goto label_39bed0;
    }
    ctx->pc = 0x39BEC8u;
    SET_GPR_U32(ctx, 31, 0x39BED0u);
    ctx->pc = 0x39BECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BEC8u;
    // 0x39becc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418348u, 0x39BEC8u, 0x39BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BED0u;
label_39bed0:
    // 0x39bed0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_39bed4:
    if (ctx->pc == 0x39BED4u) {
        ctx->pc = 0x39BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BED0u;
        // 0x39bed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BED8u;
        goto label_39bed8;
    }
    ctx->pc = 0x39BED0u;
    {
        const bool branch_taken_0x39bed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BED0u;
        // 0x39bed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bed0) {
            ctx->pc = 0x39BEECu;
            goto label_39beec;
        }
    }
    ctx->pc = 0x39BED8u;
label_39bed8:
    // 0x39bed8: 0xa6110060  sh          $s1, 0x60($s0)
    ctx->pc = 0x39bed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 17));
label_39bedc:
    // 0x39bedc: 0x2e0f809  jalr        $s7
label_39bee0:
    if (ctx->pc == 0x39BEE0u) {
        ctx->pc = 0x39BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BEDCu;
        // 0x39bee0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BEE4u;
        goto label_39bee4;
    }
    ctx->pc = 0x39BEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x39BEE4u);
        ctx->pc = 0x39BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BEDCu;
        // 0x39bee0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BEDCu, 0x39BEE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39BEE4u;
label_39bee4:
    // 0x39bee4: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_39bee8:
    if (ctx->pc == 0x39BEE8u) {
        ctx->pc = 0x39BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BEE4u;
        // 0x39bee8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BEECu;
        goto label_39beec;
    }
    ctx->pc = 0x39BEE4u;
    {
        const bool branch_taken_0x39bee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BEE4u;
        // 0x39bee8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bee4) {
            ctx->pc = 0x39C030u;
            goto label_39c030;
        }
    }
    ctx->pc = 0x39BEECu;
label_39beec:
    // 0x39beec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39beecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39bef0:
    // 0x39bef0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x39bef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39bef4:
    // 0x39bef4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x39bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_39bef8:
    // 0x39bef8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39befc:
    // 0x39befc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39befcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39bf00:
    // 0x39bf00: 0x1493ffe3  bne         $a0, $s3, . + 4 + (-0x1D << 2)
label_39bf04:
    if (ctx->pc == 0x39BF04u) {
        ctx->pc = 0x39BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF00u;
        // 0x39bf04: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BF08u;
        goto label_39bf08;
    }
    ctx->pc = 0x39BF00u;
    {
        const bool branch_taken_0x39bf00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x39BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF00u;
        // 0x39bf04: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bf00) {
            ctx->pc = 0x39BE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39be90;
        }
    }
    ctx->pc = 0x39BF08u;
label_39bf08:
    // 0x39bf08: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x39bf08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_39bf0c:
    // 0x39bf0c: 0x12a00059  beqz        $s5, . + 4 + (0x59 << 2)
label_39bf10:
    if (ctx->pc == 0x39BF10u) {
        ctx->pc = 0x39BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF0Cu;
        // 0x39bf10: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BF14u;
        goto label_39bf14;
    }
    ctx->pc = 0x39BF0Cu;
    {
        const bool branch_taken_0x39bf0c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF0Cu;
        // 0x39bf10: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bf0c) {
            ctx->pc = 0x39C074u;
            goto label_39c074;
        }
    }
    ctx->pc = 0x39BF14u;
label_39bf14:
    // 0x39bf14: 0x0  nop
    ctx->pc = 0x39bf14u;
    // NOP
label_39bf18:
    // 0x39bf18: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x39bf18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_39bf1c:
    // 0x39bf1c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x39bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_39bf20:
    // 0x39bf20: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x39bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_39bf24:
    // 0x39bf24: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x39bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_39bf28:
    // 0x39bf28: 0x24530038  addiu       $s3, $v0, 0x38
    ctx->pc = 0x39bf28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_39bf2c:
    // 0x39bf2c: 0x50930021  beql        $a0, $s3, . + 4 + (0x21 << 2)
label_39bf30:
    if (ctx->pc == 0x39BF30u) {
        ctx->pc = 0x39BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF2Cu;
        // 0x39bf30: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BF34u;
        goto label_39bf34;
    }
    ctx->pc = 0x39BF2Cu;
    {
        const bool branch_taken_0x39bf2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        if (branch_taken_0x39bf2c) {
            ctx->pc = 0x39BF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BF2Cu;
            // 0x39bf30: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39BFB4u;
            goto label_39bfb4;
        }
    }
    ctx->pc = 0x39BF34u;
label_39bf34:
    // 0x39bf34: 0x0  nop
    ctx->pc = 0x39bf34u;
    // NOP
label_39bf38:
    // 0x39bf38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39bf3c:
    // 0x39bf3c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x39bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_39bf40:
    // 0x39bf40: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_39bf44:
    // 0x39bf44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39bf48:
    // 0x39bf48: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x39bf48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_39bf4c:
    // 0x39bf4c: 0xac5d0004  sw          $sp, 0x4($v0)
    ctx->pc = 0x39bf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
label_39bf50:
    // 0x39bf50: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_39bf54:
    if (ctx->pc == 0x39BF54u) {
        ctx->pc = 0x39BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF50u;
        // 0x39bf54: 0xac9d0000  sw          $sp, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BF58u;
        goto label_39bf58;
    }
    ctx->pc = 0x39BF50u;
    {
        const bool branch_taken_0x39bf50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF50u;
        // 0x39bf54: 0xac9d0000  sw          $sp, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bf50) {
            ctx->pc = 0x39BF94u;
            goto label_39bf94;
        }
    }
    ctx->pc = 0x39BF58u;
label_39bf58:
    // 0x39bf58: 0x96020060  lhu         $v0, 0x60($s0)
    ctx->pc = 0x39bf58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_39bf5c:
    // 0x39bf5c: 0x1051000e  beq         $v0, $s1, . + 4 + (0xE << 2)
label_39bf60:
    if (ctx->pc == 0x39BF60u) {
        ctx->pc = 0x39BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF5Cu;
        // 0x39bf60: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BF64u;
        goto label_39bf64;
    }
    ctx->pc = 0x39BF5Cu;
    {
        const bool branch_taken_0x39bf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x39BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF5Cu;
        // 0x39bf60: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bf5c) {
            ctx->pc = 0x39BF98u;
            goto label_39bf98;
        }
    }
    ctx->pc = 0x39BF64u;
label_39bf64:
    // 0x39bf64: 0xc0e2048  jal         func_388120
label_39bf68:
    if (ctx->pc == 0x39BF68u) {
        ctx->pc = 0x39BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF64u;
        // 0x39bf68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BF6Cu;
        goto label_39bf6c;
    }
    ctx->pc = 0x39BF64u;
    SET_GPR_U32(ctx, 31, 0x39BF6Cu);
    ctx->pc = 0x39BF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BF64u;
    // 0x39bf68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x39BF64u, 0x39BF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BF6Cu;
label_39bf6c:
    // 0x39bf6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39bf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39bf70:
    // 0x39bf70: 0xc1060d2  jal         func_418348
label_39bf74:
    if (ctx->pc == 0x39BF74u) {
        ctx->pc = 0x39BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF70u;
        // 0x39bf74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BF78u;
        goto label_39bf78;
    }
    ctx->pc = 0x39BF70u;
    SET_GPR_U32(ctx, 31, 0x39BF78u);
    ctx->pc = 0x39BF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BF70u;
    // 0x39bf74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418348u, 0x39BF70u, 0x39BF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BF78u;
label_39bf78:
    // 0x39bf78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_39bf7c:
    if (ctx->pc == 0x39BF7Cu) {
        ctx->pc = 0x39BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF78u;
        // 0x39bf7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BF80u;
        goto label_39bf80;
    }
    ctx->pc = 0x39BF78u;
    {
        const bool branch_taken_0x39bf78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF78u;
        // 0x39bf7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bf78) {
            ctx->pc = 0x39BF94u;
            goto label_39bf94;
        }
    }
    ctx->pc = 0x39BF80u;
label_39bf80:
    // 0x39bf80: 0xa6110060  sh          $s1, 0x60($s0)
    ctx->pc = 0x39bf80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 17));
label_39bf84:
    // 0x39bf84: 0x2e0f809  jalr        $s7
label_39bf88:
    if (ctx->pc == 0x39BF88u) {
        ctx->pc = 0x39BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF84u;
        // 0x39bf88: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BF8Cu;
        goto label_39bf8c;
    }
    ctx->pc = 0x39BF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x39BF8Cu);
        ctx->pc = 0x39BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF84u;
        // 0x39bf88: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BF84u, 0x39BF8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39BF8Cu;
label_39bf8c:
    // 0x39bf8c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_39bf90:
    if (ctx->pc == 0x39BF90u) {
        ctx->pc = 0x39BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF8Cu;
        // 0x39bf90: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BF94u;
        goto label_39bf94;
    }
    ctx->pc = 0x39BF8Cu;
    {
        const bool branch_taken_0x39bf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF8Cu;
        // 0x39bf90: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bf8c) {
            ctx->pc = 0x39C030u;
            goto label_39c030;
        }
    }
    ctx->pc = 0x39BF94u;
label_39bf94:
    // 0x39bf94: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39bf98:
    // 0x39bf98: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x39bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39bf9c:
    // 0x39bf9c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x39bf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_39bfa0:
    // 0x39bfa0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39bfa4:
    // 0x39bfa4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39bfa8:
    // 0x39bfa8: 0x1493ffe3  bne         $a0, $s3, . + 4 + (-0x1D << 2)
label_39bfac:
    if (ctx->pc == 0x39BFACu) {
        ctx->pc = 0x39BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFA8u;
        // 0x39bfac: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BFB0u;
        goto label_39bfb0;
    }
    ctx->pc = 0x39BFA8u;
    {
        const bool branch_taken_0x39bfa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x39BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFA8u;
        // 0x39bfac: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bfa8) {
            ctx->pc = 0x39BF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39bf38;
        }
    }
    ctx->pc = 0x39BFB0u;
label_39bfb0:
    // 0x39bfb0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x39bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_39bfb4:
    // 0x39bfb4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x39bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_39bfb8:
    // 0x39bfb8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x39bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_39bfbc:
    // 0x39bfbc: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x39bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_39bfc0:
    // 0x39bfc0: 0x24530038  addiu       $s3, $v0, 0x38
    ctx->pc = 0x39bfc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_39bfc4:
    // 0x39bfc4: 0x50930029  beql        $a0, $s3, . + 4 + (0x29 << 2)
label_39bfc8:
    if (ctx->pc == 0x39BFC8u) {
        ctx->pc = 0x39BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFC4u;
        // 0x39bfc8: 0x26b5fffe  addiu       $s5, $s5, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BFCCu;
        goto label_39bfcc;
    }
    ctx->pc = 0x39BFC4u;
    {
        const bool branch_taken_0x39bfc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        if (branch_taken_0x39bfc4) {
            ctx->pc = 0x39BFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BFC4u;
            // 0x39bfc8: 0x26b5fffe  addiu       $s5, $s5, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C06Cu;
            goto label_39c06c;
        }
    }
    ctx->pc = 0x39BFCCu;
label_39bfcc:
    // 0x39bfcc: 0x0  nop
    ctx->pc = 0x39bfccu;
    // NOP
label_39bfd0:
    // 0x39bfd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39bfd4:
    // 0x39bfd4: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x39bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_39bfd8:
    // 0x39bfd8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_39bfdc:
    // 0x39bfdc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39bfe0:
    // 0x39bfe0: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x39bfe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_39bfe4:
    // 0x39bfe4: 0xac5d0004  sw          $sp, 0x4($v0)
    ctx->pc = 0x39bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 29));
label_39bfe8:
    // 0x39bfe8: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_39bfec:
    if (ctx->pc == 0x39BFECu) {
        ctx->pc = 0x39BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFE8u;
        // 0x39bfec: 0xac9d0000  sw          $sp, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BFF0u;
        goto label_39bff0;
    }
    ctx->pc = 0x39BFE8u;
    {
        const bool branch_taken_0x39bfe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFE8u;
        // 0x39bfec: 0xac9d0000  sw          $sp, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bfe8) {
            ctx->pc = 0x39C04Cu;
            goto label_39c04c;
        }
    }
    ctx->pc = 0x39BFF0u;
label_39bff0:
    // 0x39bff0: 0x96020060  lhu         $v0, 0x60($s0)
    ctx->pc = 0x39bff0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_39bff4:
    // 0x39bff4: 0x10510016  beq         $v0, $s1, . + 4 + (0x16 << 2)
label_39bff8:
    if (ctx->pc == 0x39BFF8u) {
        ctx->pc = 0x39BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFF4u;
        // 0x39bff8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BFFCu;
        goto label_39bffc;
    }
    ctx->pc = 0x39BFF4u;
    {
        const bool branch_taken_0x39bff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x39BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFF4u;
        // 0x39bff8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bff4) {
            ctx->pc = 0x39C050u;
            goto label_39c050;
        }
    }
    ctx->pc = 0x39BFFCu;
label_39bffc:
    // 0x39bffc: 0xc0e2048  jal         func_388120
label_39c000:
    if (ctx->pc == 0x39C000u) {
        ctx->pc = 0x39C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFFCu;
        // 0x39c000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C004u;
        goto label_39c004;
    }
    ctx->pc = 0x39BFFCu;
    SET_GPR_U32(ctx, 31, 0x39C004u);
    ctx->pc = 0x39C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BFFCu;
    // 0x39c000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x39BFFCu, 0x39C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C004u;
label_39c004:
    // 0x39c004: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39c004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39c008:
    // 0x39c008: 0xc1060d2  jal         func_418348
label_39c00c:
    if (ctx->pc == 0x39C00Cu) {
        ctx->pc = 0x39C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C008u;
        // 0x39c00c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C010u;
        goto label_39c010;
    }
    ctx->pc = 0x39C008u;
    SET_GPR_U32(ctx, 31, 0x39C010u);
    ctx->pc = 0x39C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C008u;
    // 0x39c00c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418348u, 0x39C008u, 0x39C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C010u;
label_39c010:
    // 0x39c010: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_39c014:
    if (ctx->pc == 0x39C014u) {
        ctx->pc = 0x39C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C010u;
        // 0x39c014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C018u;
        goto label_39c018;
    }
    ctx->pc = 0x39C010u;
    {
        const bool branch_taken_0x39c010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C010u;
        // 0x39c014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c010) {
            ctx->pc = 0x39C04Cu;
            goto label_39c04c;
        }
    }
    ctx->pc = 0x39C018u;
label_39c018:
    // 0x39c018: 0xa6110060  sh          $s1, 0x60($s0)
    ctx->pc = 0x39c018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 17));
label_39c01c:
    // 0x39c01c: 0x2e0f809  jalr        $s7
label_39c020:
    if (ctx->pc == 0x39C020u) {
        ctx->pc = 0x39C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C01Cu;
        // 0x39c020: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C024u;
        goto label_39c024;
    }
    ctx->pc = 0x39C01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x39C024u);
        ctx->pc = 0x39C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C01Cu;
        // 0x39c020: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C01Cu, 0x39C024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C024u;
label_39c024:
    // 0x39c024: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_39c028:
    if (ctx->pc == 0x39C028u) {
        ctx->pc = 0x39C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C024u;
        // 0x39c028: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C02Cu;
        goto label_39c02c;
    }
    ctx->pc = 0x39C024u;
    {
        const bool branch_taken_0x39c024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C024u;
        // 0x39c028: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c024) {
            ctx->pc = 0x39C050u;
            goto label_39c050;
        }
    }
    ctx->pc = 0x39C02Cu;
label_39c02c:
    // 0x39c02c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c030:
    // 0x39c030: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x39c030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39c034:
    // 0x39c034: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x39c034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c038:
    // 0x39c038: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x39c038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_39c03c:
    // 0x39c03c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x39c03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c040:
    // 0x39c040: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x39c040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c044:
    // 0x39c044: 0x1000000c  b           . + 4 + (0xC << 2)
label_39c048:
    if (ctx->pc == 0x39C048u) {
        ctx->pc = 0x39C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C044u;
        // 0x39c048: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C04Cu;
        goto label_39c04c;
    }
    ctx->pc = 0x39C044u;
    {
        const bool branch_taken_0x39c044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C044u;
        // 0x39c048: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c044) {
            ctx->pc = 0x39C078u;
            goto label_39c078;
        }
    }
    ctx->pc = 0x39C04Cu;
label_39c04c:
    // 0x39c04c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c050:
    // 0x39c050: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x39c050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c054:
    // 0x39c054: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x39c054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_39c058:
    // 0x39c058: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39c058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39c05c:
    // 0x39c05c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39c060:
    // 0x39c060: 0x1493ffdb  bne         $a0, $s3, . + 4 + (-0x25 << 2)
label_39c064:
    if (ctx->pc == 0x39C064u) {
        ctx->pc = 0x39C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C060u;
        // 0x39c064: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C068u;
        goto label_39c068;
    }
    ctx->pc = 0x39C060u;
    {
        const bool branch_taken_0x39c060 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x39C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C060u;
        // 0x39c064: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c060) {
            ctx->pc = 0x39BFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39bfd0;
        }
    }
    ctx->pc = 0x39C068u;
label_39c068:
    // 0x39c068: 0x26b5fffe  addiu       $s5, $s5, -0x2
    ctx->pc = 0x39c068u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
label_39c06c:
    // 0x39c06c: 0x16a0ffaa  bnez        $s5, . + 4 + (-0x56 << 2)
label_39c070:
    if (ctx->pc == 0x39C070u) {
        ctx->pc = 0x39C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C06Cu;
        // 0x39c070: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C074u;
        goto label_39c074;
    }
    ctx->pc = 0x39C06Cu;
    {
        const bool branch_taken_0x39c06c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C06Cu;
        // 0x39c070: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c06c) {
            ctx->pc = 0x39BF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39bf18;
        }
    }
    ctx->pc = 0x39C074u;
label_39c074:
    // 0x39c074: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x39c074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39c078:
    // 0x39c078: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x39c078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39c07c:
    // 0x39c07c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x39c07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_39c080:
    // 0x39c080: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x39c080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_39c084:
    // 0x39c084: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x39c084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_39c088:
    // 0x39c088: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x39c088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39c08c:
    // 0x39c08c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39c08cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39c090:
    // 0x39c090: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x39c090u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39c094:
    // 0x39c094: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x39c094u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39c098:
    // 0x39c098: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39c098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39c09c:
    // 0x39c09c: 0x3e00008  jr          $ra
label_39c0a0:
    if (ctx->pc == 0x39C0A0u) {
        ctx->pc = 0x39C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C09Cu;
        // 0x39c0a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C0A4u;
        goto label_39c0a4;
    }
    ctx->pc = 0x39C09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C09Cu;
        // 0x39c0a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C0A4u;
label_39c0a4:
    // 0x39c0a4: 0x0  nop
    ctx->pc = 0x39c0a4u;
    // NOP
    ctx->pc = 0x39c0a8u;
}
