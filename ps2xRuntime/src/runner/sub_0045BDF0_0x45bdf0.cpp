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

// Function: sub_0045BDF0
// Address: 0x45bdf0 - 0x45c240
void sub_0045BDF0_0x45bdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045BDF0_0x45bdf0");
#endif

    switch (ctx->pc) {
        case 0x45bdf0u: goto label_45bdf0;
        case 0x45bdf4u: goto label_45bdf4;
        case 0x45bdf8u: goto label_45bdf8;
        case 0x45bdfcu: goto label_45bdfc;
        case 0x45be00u: goto label_45be00;
        case 0x45be04u: goto label_45be04;
        case 0x45be08u: goto label_45be08;
        case 0x45be0cu: goto label_45be0c;
        case 0x45be10u: goto label_45be10;
        case 0x45be14u: goto label_45be14;
        case 0x45be18u: goto label_45be18;
        case 0x45be1cu: goto label_45be1c;
        case 0x45be20u: goto label_45be20;
        case 0x45be24u: goto label_45be24;
        case 0x45be28u: goto label_45be28;
        case 0x45be2cu: goto label_45be2c;
        case 0x45be30u: goto label_45be30;
        case 0x45be34u: goto label_45be34;
        case 0x45be38u: goto label_45be38;
        case 0x45be3cu: goto label_45be3c;
        case 0x45be40u: goto label_45be40;
        case 0x45be44u: goto label_45be44;
        case 0x45be48u: goto label_45be48;
        case 0x45be4cu: goto label_45be4c;
        case 0x45be50u: goto label_45be50;
        case 0x45be54u: goto label_45be54;
        case 0x45be58u: goto label_45be58;
        case 0x45be5cu: goto label_45be5c;
        case 0x45be60u: goto label_45be60;
        case 0x45be64u: goto label_45be64;
        case 0x45be68u: goto label_45be68;
        case 0x45be6cu: goto label_45be6c;
        case 0x45be70u: goto label_45be70;
        case 0x45be74u: goto label_45be74;
        case 0x45be78u: goto label_45be78;
        case 0x45be7cu: goto label_45be7c;
        case 0x45be80u: goto label_45be80;
        case 0x45be84u: goto label_45be84;
        case 0x45be88u: goto label_45be88;
        case 0x45be8cu: goto label_45be8c;
        case 0x45be90u: goto label_45be90;
        case 0x45be94u: goto label_45be94;
        case 0x45be98u: goto label_45be98;
        case 0x45be9cu: goto label_45be9c;
        case 0x45bea0u: goto label_45bea0;
        case 0x45bea4u: goto label_45bea4;
        case 0x45bea8u: goto label_45bea8;
        case 0x45beacu: goto label_45beac;
        case 0x45beb0u: goto label_45beb0;
        case 0x45beb4u: goto label_45beb4;
        case 0x45beb8u: goto label_45beb8;
        case 0x45bebcu: goto label_45bebc;
        case 0x45bec0u: goto label_45bec0;
        case 0x45bec4u: goto label_45bec4;
        case 0x45bec8u: goto label_45bec8;
        case 0x45beccu: goto label_45becc;
        case 0x45bed0u: goto label_45bed0;
        case 0x45bed4u: goto label_45bed4;
        case 0x45bed8u: goto label_45bed8;
        case 0x45bedcu: goto label_45bedc;
        case 0x45bee0u: goto label_45bee0;
        case 0x45bee4u: goto label_45bee4;
        case 0x45bee8u: goto label_45bee8;
        case 0x45beecu: goto label_45beec;
        case 0x45bef0u: goto label_45bef0;
        case 0x45bef4u: goto label_45bef4;
        case 0x45bef8u: goto label_45bef8;
        case 0x45befcu: goto label_45befc;
        case 0x45bf00u: goto label_45bf00;
        case 0x45bf04u: goto label_45bf04;
        case 0x45bf08u: goto label_45bf08;
        case 0x45bf0cu: goto label_45bf0c;
        case 0x45bf10u: goto label_45bf10;
        case 0x45bf14u: goto label_45bf14;
        case 0x45bf18u: goto label_45bf18;
        case 0x45bf1cu: goto label_45bf1c;
        case 0x45bf20u: goto label_45bf20;
        case 0x45bf24u: goto label_45bf24;
        case 0x45bf28u: goto label_45bf28;
        case 0x45bf2cu: goto label_45bf2c;
        case 0x45bf30u: goto label_45bf30;
        case 0x45bf34u: goto label_45bf34;
        case 0x45bf38u: goto label_45bf38;
        case 0x45bf3cu: goto label_45bf3c;
        case 0x45bf40u: goto label_45bf40;
        case 0x45bf44u: goto label_45bf44;
        case 0x45bf48u: goto label_45bf48;
        case 0x45bf4cu: goto label_45bf4c;
        case 0x45bf50u: goto label_45bf50;
        case 0x45bf54u: goto label_45bf54;
        case 0x45bf58u: goto label_45bf58;
        case 0x45bf5cu: goto label_45bf5c;
        case 0x45bf60u: goto label_45bf60;
        case 0x45bf64u: goto label_45bf64;
        case 0x45bf68u: goto label_45bf68;
        case 0x45bf6cu: goto label_45bf6c;
        case 0x45bf70u: goto label_45bf70;
        case 0x45bf74u: goto label_45bf74;
        case 0x45bf78u: goto label_45bf78;
        case 0x45bf7cu: goto label_45bf7c;
        case 0x45bf80u: goto label_45bf80;
        case 0x45bf84u: goto label_45bf84;
        case 0x45bf88u: goto label_45bf88;
        case 0x45bf8cu: goto label_45bf8c;
        case 0x45bf90u: goto label_45bf90;
        case 0x45bf94u: goto label_45bf94;
        case 0x45bf98u: goto label_45bf98;
        case 0x45bf9cu: goto label_45bf9c;
        case 0x45bfa0u: goto label_45bfa0;
        case 0x45bfa4u: goto label_45bfa4;
        case 0x45bfa8u: goto label_45bfa8;
        case 0x45bfacu: goto label_45bfac;
        case 0x45bfb0u: goto label_45bfb0;
        case 0x45bfb4u: goto label_45bfb4;
        case 0x45bfb8u: goto label_45bfb8;
        case 0x45bfbcu: goto label_45bfbc;
        case 0x45bfc0u: goto label_45bfc0;
        case 0x45bfc4u: goto label_45bfc4;
        case 0x45bfc8u: goto label_45bfc8;
        case 0x45bfccu: goto label_45bfcc;
        case 0x45bfd0u: goto label_45bfd0;
        case 0x45bfd4u: goto label_45bfd4;
        case 0x45bfd8u: goto label_45bfd8;
        case 0x45bfdcu: goto label_45bfdc;
        case 0x45bfe0u: goto label_45bfe0;
        case 0x45bfe4u: goto label_45bfe4;
        case 0x45bfe8u: goto label_45bfe8;
        case 0x45bfecu: goto label_45bfec;
        case 0x45bff0u: goto label_45bff0;
        case 0x45bff4u: goto label_45bff4;
        case 0x45bff8u: goto label_45bff8;
        case 0x45bffcu: goto label_45bffc;
        case 0x45c000u: goto label_45c000;
        case 0x45c004u: goto label_45c004;
        case 0x45c008u: goto label_45c008;
        case 0x45c00cu: goto label_45c00c;
        case 0x45c010u: goto label_45c010;
        case 0x45c014u: goto label_45c014;
        case 0x45c018u: goto label_45c018;
        case 0x45c01cu: goto label_45c01c;
        case 0x45c020u: goto label_45c020;
        case 0x45c024u: goto label_45c024;
        case 0x45c028u: goto label_45c028;
        case 0x45c02cu: goto label_45c02c;
        case 0x45c030u: goto label_45c030;
        case 0x45c034u: goto label_45c034;
        case 0x45c038u: goto label_45c038;
        case 0x45c03cu: goto label_45c03c;
        case 0x45c040u: goto label_45c040;
        case 0x45c044u: goto label_45c044;
        case 0x45c048u: goto label_45c048;
        case 0x45c04cu: goto label_45c04c;
        case 0x45c050u: goto label_45c050;
        case 0x45c054u: goto label_45c054;
        case 0x45c058u: goto label_45c058;
        case 0x45c05cu: goto label_45c05c;
        case 0x45c060u: goto label_45c060;
        case 0x45c064u: goto label_45c064;
        case 0x45c068u: goto label_45c068;
        case 0x45c06cu: goto label_45c06c;
        case 0x45c070u: goto label_45c070;
        case 0x45c074u: goto label_45c074;
        case 0x45c078u: goto label_45c078;
        case 0x45c07cu: goto label_45c07c;
        case 0x45c080u: goto label_45c080;
        case 0x45c084u: goto label_45c084;
        case 0x45c088u: goto label_45c088;
        case 0x45c08cu: goto label_45c08c;
        case 0x45c090u: goto label_45c090;
        case 0x45c094u: goto label_45c094;
        case 0x45c098u: goto label_45c098;
        case 0x45c09cu: goto label_45c09c;
        case 0x45c0a0u: goto label_45c0a0;
        case 0x45c0a4u: goto label_45c0a4;
        case 0x45c0a8u: goto label_45c0a8;
        case 0x45c0acu: goto label_45c0ac;
        case 0x45c0b0u: goto label_45c0b0;
        case 0x45c0b4u: goto label_45c0b4;
        case 0x45c0b8u: goto label_45c0b8;
        case 0x45c0bcu: goto label_45c0bc;
        case 0x45c0c0u: goto label_45c0c0;
        case 0x45c0c4u: goto label_45c0c4;
        case 0x45c0c8u: goto label_45c0c8;
        case 0x45c0ccu: goto label_45c0cc;
        case 0x45c0d0u: goto label_45c0d0;
        case 0x45c0d4u: goto label_45c0d4;
        case 0x45c0d8u: goto label_45c0d8;
        case 0x45c0dcu: goto label_45c0dc;
        case 0x45c0e0u: goto label_45c0e0;
        case 0x45c0e4u: goto label_45c0e4;
        case 0x45c0e8u: goto label_45c0e8;
        case 0x45c0ecu: goto label_45c0ec;
        case 0x45c0f0u: goto label_45c0f0;
        case 0x45c0f4u: goto label_45c0f4;
        case 0x45c0f8u: goto label_45c0f8;
        case 0x45c0fcu: goto label_45c0fc;
        case 0x45c100u: goto label_45c100;
        case 0x45c104u: goto label_45c104;
        case 0x45c108u: goto label_45c108;
        case 0x45c10cu: goto label_45c10c;
        case 0x45c110u: goto label_45c110;
        case 0x45c114u: goto label_45c114;
        case 0x45c118u: goto label_45c118;
        case 0x45c11cu: goto label_45c11c;
        case 0x45c120u: goto label_45c120;
        case 0x45c124u: goto label_45c124;
        case 0x45c128u: goto label_45c128;
        case 0x45c12cu: goto label_45c12c;
        case 0x45c130u: goto label_45c130;
        case 0x45c134u: goto label_45c134;
        case 0x45c138u: goto label_45c138;
        case 0x45c13cu: goto label_45c13c;
        case 0x45c140u: goto label_45c140;
        case 0x45c144u: goto label_45c144;
        case 0x45c148u: goto label_45c148;
        case 0x45c14cu: goto label_45c14c;
        case 0x45c150u: goto label_45c150;
        case 0x45c154u: goto label_45c154;
        case 0x45c158u: goto label_45c158;
        case 0x45c15cu: goto label_45c15c;
        case 0x45c160u: goto label_45c160;
        case 0x45c164u: goto label_45c164;
        case 0x45c168u: goto label_45c168;
        case 0x45c16cu: goto label_45c16c;
        case 0x45c170u: goto label_45c170;
        case 0x45c174u: goto label_45c174;
        case 0x45c178u: goto label_45c178;
        case 0x45c17cu: goto label_45c17c;
        case 0x45c180u: goto label_45c180;
        case 0x45c184u: goto label_45c184;
        case 0x45c188u: goto label_45c188;
        case 0x45c18cu: goto label_45c18c;
        case 0x45c190u: goto label_45c190;
        case 0x45c194u: goto label_45c194;
        case 0x45c198u: goto label_45c198;
        case 0x45c19cu: goto label_45c19c;
        case 0x45c1a0u: goto label_45c1a0;
        case 0x45c1a4u: goto label_45c1a4;
        case 0x45c1a8u: goto label_45c1a8;
        case 0x45c1acu: goto label_45c1ac;
        case 0x45c1b0u: goto label_45c1b0;
        case 0x45c1b4u: goto label_45c1b4;
        case 0x45c1b8u: goto label_45c1b8;
        case 0x45c1bcu: goto label_45c1bc;
        case 0x45c1c0u: goto label_45c1c0;
        case 0x45c1c4u: goto label_45c1c4;
        case 0x45c1c8u: goto label_45c1c8;
        case 0x45c1ccu: goto label_45c1cc;
        case 0x45c1d0u: goto label_45c1d0;
        case 0x45c1d4u: goto label_45c1d4;
        case 0x45c1d8u: goto label_45c1d8;
        case 0x45c1dcu: goto label_45c1dc;
        case 0x45c1e0u: goto label_45c1e0;
        case 0x45c1e4u: goto label_45c1e4;
        case 0x45c1e8u: goto label_45c1e8;
        case 0x45c1ecu: goto label_45c1ec;
        case 0x45c1f0u: goto label_45c1f0;
        case 0x45c1f4u: goto label_45c1f4;
        case 0x45c1f8u: goto label_45c1f8;
        case 0x45c1fcu: goto label_45c1fc;
        case 0x45c200u: goto label_45c200;
        case 0x45c204u: goto label_45c204;
        case 0x45c208u: goto label_45c208;
        case 0x45c20cu: goto label_45c20c;
        case 0x45c210u: goto label_45c210;
        case 0x45c214u: goto label_45c214;
        case 0x45c218u: goto label_45c218;
        case 0x45c21cu: goto label_45c21c;
        case 0x45c220u: goto label_45c220;
        case 0x45c224u: goto label_45c224;
        case 0x45c228u: goto label_45c228;
        case 0x45c22cu: goto label_45c22c;
        case 0x45c230u: goto label_45c230;
        case 0x45c234u: goto label_45c234;
        case 0x45c238u: goto label_45c238;
        case 0x45c23cu: goto label_45c23c;
        default: break;
    }

    ctx->pc = 0x45bdf0u;

label_45bdf0:
    // 0x45bdf0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x45bdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_45bdf4:
    // 0x45bdf4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x45bdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_45bdf8:
    // 0x45bdf8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x45bdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_45bdfc:
    // 0x45bdfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45bdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_45be00:
    // 0x45be00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45be00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45be04:
    // 0x45be04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45be04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45be08:
    // 0x45be08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45be08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45be0c:
    // 0x45be0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45be0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45be10:
    // 0x45be10: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x45be10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_45be14:
    // 0x45be14: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x45be14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
label_45be18:
    // 0x45be18: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x45be18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
label_45be1c:
    // 0x45be1c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x45be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_45be20:
    // 0x45be20: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x45be20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_45be24:
    // 0x45be24: 0x146200ac  bne         $v1, $v0, . + 4 + (0xAC << 2)
label_45be28:
    if (ctx->pc == 0x45BE28u) {
        ctx->pc = 0x45BE2Cu;
        goto label_45be2c;
    }
    ctx->pc = 0x45BE24u;
    {
        const bool branch_taken_0x45be24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45be24) {
            ctx->pc = 0x45C0D8u;
            goto label_45c0d8;
        }
    }
    ctx->pc = 0x45BE2Cu;
label_45be2c:
    // 0x45be2c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x45be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_45be30:
    // 0x45be30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45be34:
    // 0x45be34: 0x146200a8  bne         $v1, $v0, . + 4 + (0xA8 << 2)
label_45be38:
    if (ctx->pc == 0x45BE38u) {
        ctx->pc = 0x45BE3Cu;
        goto label_45be3c;
    }
    ctx->pc = 0x45BE34u;
    {
        const bool branch_taken_0x45be34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45be34) {
            ctx->pc = 0x45C0D8u;
            goto label_45c0d8;
        }
    }
    ctx->pc = 0x45BE3Cu;
label_45be3c:
    // 0x45be3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45be3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45be40:
    // 0x45be40: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_45be44:
    if (ctx->pc == 0x45BE44u) {
        ctx->pc = 0x45BE48u;
        goto label_45be48;
    }
    ctx->pc = 0x45BE40u;
    {
        const bool branch_taken_0x45be40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45be40) {
            ctx->pc = 0x45C0C4u;
            goto label_45c0c4;
        }
    }
    ctx->pc = 0x45BE48u;
label_45be48:
    // 0x45be48: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x45be48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_45be4c:
    // 0x45be4c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45be50:
    // 0x45be50: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45be50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45be54:
    // 0x45be54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45be54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45be58:
    // 0x45be58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45be5c:
    // 0x45be5c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x45be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45be60:
    // 0x45be60: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x45be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_45be64:
    // 0x45be64: 0x14620096  bne         $v1, $v0, . + 4 + (0x96 << 2)
label_45be68:
    if (ctx->pc == 0x45BE68u) {
        ctx->pc = 0x45BE6Cu;
        goto label_45be6c;
    }
    ctx->pc = 0x45BE64u;
    {
        const bool branch_taken_0x45be64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45be64) {
            ctx->pc = 0x45C0C0u;
            goto label_45c0c0;
        }
    }
    ctx->pc = 0x45BE6Cu;
label_45be6c:
    // 0x45be6c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x45be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45be70:
    // 0x45be70: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x45be70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45be74:
    // 0x45be74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45be74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45be78:
    // 0x45be78: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45be78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45be7c:
    // 0x45be7c: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45be80:
    // 0x45be80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45be80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45be84:
    // 0x45be84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45be84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45be88:
    // 0x45be88: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
label_45be8c:
    if (ctx->pc == 0x45BE8Cu) {
        ctx->pc = 0x45BE90u;
        goto label_45be90;
    }
    ctx->pc = 0x45BE88u;
    {
        const bool branch_taken_0x45be88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45be88) {
            ctx->pc = 0x45C208u;
            goto label_45c208;
        }
    }
    ctx->pc = 0x45BE90u;
label_45be90:
    // 0x45be90: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x45be90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_45be94:
    // 0x45be94: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45be94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45be98:
    // 0x45be98: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45be98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45be9c:
    // 0x45be9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45bea0:
    // 0x45bea0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45bea4:
    // 0x45bea4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x45bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45bea8:
    // 0x45bea8: 0xc0f0ba4  jal         func_3C2E90
label_45beac:
    if (ctx->pc == 0x45BEACu) {
        ctx->pc = 0x45BEB0u;
        goto label_45beb0;
    }
    ctx->pc = 0x45BEA8u;
    SET_GPR_U32(ctx, 31, 0x45BEB0u);
    ctx->pc = 0x3C2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E90u, 0x45BEA8u, 0x45BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45BEB0u;
label_45beb0:
    // 0x45beb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45beb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45beb4:
    // 0x45beb4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x45beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_45beb8:
    // 0x45beb8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45bebc:
    // 0x45bebc: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45bec0:
    // 0x45bec0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45bec4:
    // 0x45bec4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45bec8:
    // 0x45bec8: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x45bec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_45becc:
    // 0x45becc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x45beccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45bed0:
    // 0x45bed0: 0xc116f64  jal         func_45BD90
label_45bed4:
    if (ctx->pc == 0x45BED4u) {
        ctx->pc = 0x45BED8u;
        goto label_45bed8;
    }
    ctx->pc = 0x45BED0u;
    SET_GPR_U32(ctx, 31, 0x45BED8u);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45BED0u, 0x45BED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45BED8u;
label_45bed8:
    // 0x45bed8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x45bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45bedc:
    // 0x45bedc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x45bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45bee0:
    // 0x45bee0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45bee4:
    // 0x45bee4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45bee8:
    // 0x45bee8: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45beec:
    // 0x45beec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45beecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45bef0:
    // 0x45bef0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x45bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_45bef4:
    // 0x45bef4: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x45bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_45bef8:
    // 0x45bef8: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x45bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_45befc:
    // 0x45befc: 0x2429823  subu        $s3, $s2, $v0
    ctx->pc = 0x45befcu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45bf00:
    // 0x45bf00: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x45bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45bf04:
    // 0x45bf04: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x45bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45bf08:
    // 0x45bf08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45bf0c:
    // 0x45bf0c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45bf10:
    // 0x45bf10: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45bf14:
    // 0x45bf14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45bf18:
    // 0x45bf18: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x45bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_45bf1c:
    // 0x45bf1c: 0xac53008c  sw          $s3, 0x8C($v0)
    ctx->pc = 0x45bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 19));
label_45bf20:
    // 0x45bf20: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x45bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45bf24:
    // 0x45bf24: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x45bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45bf28:
    // 0x45bf28: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45bf2c:
    // 0x45bf2c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45bf30:
    // 0x45bf30: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45bf34:
    // 0x45bf34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45bf38:
    // 0x45bf38: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x45bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_45bf3c:
    // 0x45bf3c: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x45bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_45bf40:
    // 0x45bf40: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x45bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45bf44:
    // 0x45bf44: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x45bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45bf48:
    // 0x45bf48: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45bf4c:
    // 0x45bf4c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45bf50:
    // 0x45bf50: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45bf54:
    // 0x45bf54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45bf58:
    // 0x45bf58: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x45bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_45bf5c:
    // 0x45bf5c: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x45bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_45bf60:
    // 0x45bf60: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x45bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_45bf64:
    // 0x45bf64: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x45bf64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_45bf68:
    // 0x45bf68: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_45bf6c:
    if (ctx->pc == 0x45BF6Cu) {
        ctx->pc = 0x45BF70u;
        goto label_45bf70;
    }
    ctx->pc = 0x45BF68u;
    {
        const bool branch_taken_0x45bf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45bf68) {
            ctx->pc = 0x45BF94u;
            goto label_45bf94;
        }
    }
    ctx->pc = 0x45BF70u;
label_45bf70:
    // 0x45bf70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x45bf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45bf74:
    // 0x45bf74: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x45bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45bf78:
    // 0x45bf78: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x45bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45bf7c:
    // 0x45bf7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45bf80:
    // 0x45bf80: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45bf84:
    // 0x45bf84: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45bf88:
    // 0x45bf88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45bf8c:
    // 0x45bf8c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x45bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_45bf90:
    // 0x45bf90: 0xac440090  sw          $a0, 0x90($v0)
    ctx->pc = 0x45bf90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 4));
label_45bf94:
    // 0x45bf94: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x45bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45bf98:
    // 0x45bf98: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x45bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45bf9c:
    // 0x45bf9c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45bfa0:
    // 0x45bfa0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45bfa4:
    // 0x45bfa4: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45bfa8:
    // 0x45bfa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45bfac:
    // 0x45bfac: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x45bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45bfb0:
    // 0x45bfb0: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x45bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_45bfb4:
    // 0x45bfb4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45bfb8:
    // 0x45bfb8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45bfbc:
    // 0x45bfbc: 0x24634cb0  addiu       $v1, $v1, 0x4CB0
    ctx->pc = 0x45bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19632));
label_45bfc0:
    // 0x45bfc0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x45bfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45bfc4:
    // 0x45bfc4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x45bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45bfc8:
    // 0x45bfc8: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x45bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_45bfcc:
    // 0x45bfcc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45bfd0:
    // 0x45bfd0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45bfd4:
    // 0x45bfd4: 0x24634cb0  addiu       $v1, $v1, 0x4CB0
    ctx->pc = 0x45bfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19632));
label_45bfd8:
    // 0x45bfd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45bfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45bfdc:
    // 0x45bfdc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x45bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_45bfe0:
    // 0x45bfe0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x45bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_45bfe4:
    // 0x45bfe4: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x45bfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_45bfe8:
    // 0x45bfe8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x45bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45bfec:
    // 0x45bfec: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x45bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_45bff0:
    // 0x45bff0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45bff4:
    // 0x45bff4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_45bff8:
    // 0x45bff8: 0x24634cb0  addiu       $v1, $v1, 0x4CB0
    ctx->pc = 0x45bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19632));
label_45bffc:
    // 0x45bffc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45c000:
    // 0x45c000: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45c000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45c004:
    // 0x45c004: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x45c004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_45c008:
    // 0x45c008: 0xc0bb7a4  jal         func_2EDE90
label_45c00c:
    if (ctx->pc == 0x45C00Cu) {
        ctx->pc = 0x45C010u;
        goto label_45c010;
    }
    ctx->pc = 0x45C008u;
    SET_GPR_U32(ctx, 31, 0x45C010u);
    ctx->pc = 0x2EDE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE90u, 0x45C008u, 0x45C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C010u;
label_45c010:
    // 0x45c010: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x45c010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45c014:
    // 0x45c014: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x45c014u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45c018:
    // 0x45c018: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45c018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45c01c:
    // 0x45c01c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c020:
    // 0x45c020: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45c020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45c024:
    // 0x45c024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c028:
    // 0x45c028: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x45c028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_45c02c:
    // 0x45c02c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x45c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45c030:
    // 0x45c030: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c034:
    // 0x45c034: 0x24424c90  addiu       $v0, $v0, 0x4C90
    ctx->pc = 0x45c034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19600));
label_45c038:
    // 0x45c038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c03c:
    // 0x45c03c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45c040:
    // 0x45c040: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_45c044:
    if (ctx->pc == 0x45C044u) {
        ctx->pc = 0x45C048u;
        goto label_45c048;
    }
    ctx->pc = 0x45C040u;
    {
        const bool branch_taken_0x45c040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c040) {
            ctx->pc = 0x45C208u;
            goto label_45c208;
        }
    }
    ctx->pc = 0x45C048u;
label_45c048:
    // 0x45c048: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x45c048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45c04c:
    // 0x45c04c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x45c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45c050:
    // 0x45c050: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45c050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45c054:
    // 0x45c054: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c058:
    // 0x45c058: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45c058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45c05c:
    // 0x45c05c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x45c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c060:
    // 0x45c060: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x45c060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45c064:
    // 0x45c064: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x45c064u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45c068:
    // 0x45c068: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45c068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45c06c:
    // 0x45c06c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c070:
    // 0x45c070: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45c070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45c074:
    // 0x45c074: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x45c074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c078:
    // 0x45c078: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x45c078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45c07c:
    // 0x45c07c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c080:
    // 0x45c080: 0x24424c90  addiu       $v0, $v0, 0x4C90
    ctx->pc = 0x45c080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19600));
label_45c084:
    // 0x45c084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c088:
    // 0x45c088: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x45c088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_45c08c:
    // 0x45c08c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x45c08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_45c090:
    // 0x45c090: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x45c090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_45c094:
    // 0x45c094: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x45c094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_45c098:
    // 0x45c098: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x45c098u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45c09c:
    // 0x45c09c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x45c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_45c0a0:
    // 0x45c0a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c0a4:
    // 0x45c0a4: 0x24424c90  addiu       $v0, $v0, 0x4C90
    ctx->pc = 0x45c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19600));
label_45c0a8:
    // 0x45c0a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c0ac:
    // 0x45c0ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45c0b0:
    // 0x45c0b0: 0x40f809  jalr        $v0
label_45c0b4:
    if (ctx->pc == 0x45C0B4u) {
        ctx->pc = 0x45C0B8u;
        goto label_45c0b8;
    }
    ctx->pc = 0x45C0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45C0B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C0B0u, 0x45C0B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45C0B8u;
label_45c0b8:
    // 0x45c0b8: 0x10000053  b           . + 4 + (0x53 << 2)
label_45c0bc:
    if (ctx->pc == 0x45C0BCu) {
        ctx->pc = 0x45C0C0u;
        goto label_45c0c0;
    }
    ctx->pc = 0x45C0B8u;
    {
        const bool branch_taken_0x45c0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c0b8) {
            ctx->pc = 0x45C208u;
            goto label_45c208;
        }
    }
    ctx->pc = 0x45C0C0u;
label_45c0c0:
    // 0x45c0c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45c0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45c0c4:
    // 0x45c0c4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x45c0c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_45c0c8:
    // 0x45c0c8: 0x1440ff5f  bnez        $v0, . + 4 + (-0xA1 << 2)
label_45c0cc:
    if (ctx->pc == 0x45C0CCu) {
        ctx->pc = 0x45C0D0u;
        goto label_45c0d0;
    }
    ctx->pc = 0x45C0C8u;
    {
        const bool branch_taken_0x45c0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c0c8) {
            ctx->pc = 0x45BE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45be48;
        }
    }
    ctx->pc = 0x45C0D0u;
label_45c0d0:
    // 0x45c0d0: 0x1000004d  b           . + 4 + (0x4D << 2)
label_45c0d4:
    if (ctx->pc == 0x45C0D4u) {
        ctx->pc = 0x45C0D8u;
        goto label_45c0d8;
    }
    ctx->pc = 0x45C0D0u;
    {
        const bool branch_taken_0x45c0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c0d0) {
            ctx->pc = 0x45C208u;
            goto label_45c208;
        }
    }
    ctx->pc = 0x45C0D8u;
label_45c0d8:
    // 0x45c0d8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x45c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_45c0dc:
    // 0x45c0dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x45c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_45c0e0:
    // 0x45c0e0: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
label_45c0e4:
    if (ctx->pc == 0x45C0E4u) {
        ctx->pc = 0x45C0E8u;
        goto label_45c0e8;
    }
    ctx->pc = 0x45C0E0u;
    {
        const bool branch_taken_0x45c0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45c0e0) {
            ctx->pc = 0x45C208u;
            goto label_45c208;
        }
    }
    ctx->pc = 0x45C0E8u;
label_45c0e8:
    // 0x45c0e8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x45c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_45c0ec:
    // 0x45c0ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45c0f0:
    // 0x45c0f0: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
label_45c0f4:
    if (ctx->pc == 0x45C0F4u) {
        ctx->pc = 0x45C0F8u;
        goto label_45c0f8;
    }
    ctx->pc = 0x45C0F0u;
    {
        const bool branch_taken_0x45c0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45c0f0) {
            ctx->pc = 0x45C208u;
            goto label_45c208;
        }
    }
    ctx->pc = 0x45C0F8u;
label_45c0f8:
    // 0x45c0f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x45c0f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45c0fc:
    // 0x45c0fc: 0x1000003f  b           . + 4 + (0x3F << 2)
label_45c100:
    if (ctx->pc == 0x45C100u) {
        ctx->pc = 0x45C104u;
        goto label_45c104;
    }
    ctx->pc = 0x45C0FCu;
    {
        const bool branch_taken_0x45c0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c0fc) {
            ctx->pc = 0x45C1FCu;
            goto label_45c1fc;
        }
    }
    ctx->pc = 0x45C104u;
label_45c104:
    // 0x45c104: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45c104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_45c108:
    // 0x45c108: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c10c:
    // 0x45c10c: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45c110:
    // 0x45c110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c114:
    // 0x45c114: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45c114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45c118:
    // 0x45c118: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x45c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45c11c:
    // 0x45c11c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x45c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_45c120:
    // 0x45c120: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_45c124:
    if (ctx->pc == 0x45C124u) {
        ctx->pc = 0x45C128u;
        goto label_45c128;
    }
    ctx->pc = 0x45C120u;
    {
        const bool branch_taken_0x45c120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45c120) {
            ctx->pc = 0x45C1F8u;
            goto label_45c1f8;
        }
    }
    ctx->pc = 0x45C128u;
label_45c128:
    // 0x45c128: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x45c128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_45c12c:
    // 0x45c12c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x45c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_45c130:
    // 0x45c130: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45c130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45c134:
    // 0x45c134: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c138:
    // 0x45c138: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45c138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45c13c:
    // 0x45c13c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c140:
    // 0x45c140: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45c140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45c144:
    // 0x45c144: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_45c148:
    if (ctx->pc == 0x45C148u) {
        ctx->pc = 0x45C14Cu;
        goto label_45c14c;
    }
    ctx->pc = 0x45C144u;
    {
        const bool branch_taken_0x45c144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c144) {
            ctx->pc = 0x45C208u;
            goto label_45c208;
        }
    }
    ctx->pc = 0x45C14Cu;
label_45c14c:
    // 0x45c14c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_45c150:
    // 0x45c150: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c154:
    // 0x45c154: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45c154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45c158:
    // 0x45c158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c15c:
    // 0x45c15c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45c160:
    // 0x45c160: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x45c160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45c164:
    // 0x45c164: 0xc0f0ba4  jal         func_3C2E90
label_45c168:
    if (ctx->pc == 0x45C168u) {
        ctx->pc = 0x45C16Cu;
        goto label_45c16c;
    }
    ctx->pc = 0x45C164u;
    SET_GPR_U32(ctx, 31, 0x45C16Cu);
    ctx->pc = 0x3C2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E90u, 0x45C164u, 0x45C16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C16Cu;
label_45c16c:
    // 0x45c16c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x45c16cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c170:
    // 0x45c170: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45c170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_45c174:
    // 0x45c174: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c178:
    // 0x45c178: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45c178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45c17c:
    // 0x45c17c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c180:
    // 0x45c180: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45c184:
    // 0x45c184: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x45c184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45c188:
    // 0x45c188: 0xc0f0b88  jal         func_3C2E20
label_45c18c:
    if (ctx->pc == 0x45C18Cu) {
        ctx->pc = 0x45C190u;
        goto label_45c190;
    }
    ctx->pc = 0x45C188u;
    SET_GPR_U32(ctx, 31, 0x45C190u);
    ctx->pc = 0x3C2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E20u, 0x45C188u, 0x45C190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C190u;
label_45c190:
    // 0x45c190: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x45c190u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c194:
    // 0x45c194: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x45c194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_45c198:
    // 0x45c198: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x45c198u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_45c19c:
    // 0x45c19c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45c1a0:
    // 0x45c1a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c1a4:
    // 0x45c1a4: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45c1a8:
    // 0x45c1a8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x45c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c1ac:
    // 0x45c1ac: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x45c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_45c1b0:
    // 0x45c1b0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x45c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_45c1b4:
    // 0x45c1b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45c1b8:
    // 0x45c1b8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c1bc:
    // 0x45c1bc: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45c1c0:
    // 0x45c1c0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x45c1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c1c4:
    // 0x45c1c4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_45c1c8:
    // 0x45c1c8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c1cc:
    // 0x45c1cc: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45c1d0:
    // 0x45c1d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c1d4:
    // 0x45c1d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45c1d8:
    // 0x45c1d8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x45c1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_45c1dc:
    // 0x45c1dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45c1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45c1e0:
    // 0x45c1e0: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x45c1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_45c1e4:
    // 0x45c1e4: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x45c1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45c1e8:
    // 0x45c1e8: 0xc0f0b08  jal         func_3C2C20
label_45c1ec:
    if (ctx->pc == 0x45C1ECu) {
        ctx->pc = 0x45C1F0u;
        goto label_45c1f0;
    }
    ctx->pc = 0x45C1E8u;
    SET_GPR_U32(ctx, 31, 0x45C1F0u);
    ctx->pc = 0x3C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C20u, 0x45C1E8u, 0x45C1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C1F0u;
label_45c1f0:
    // 0x45c1f0: 0x10000005  b           . + 4 + (0x5 << 2)
label_45c1f4:
    if (ctx->pc == 0x45C1F4u) {
        ctx->pc = 0x45C1F8u;
        goto label_45c1f8;
    }
    ctx->pc = 0x45C1F0u;
    {
        const bool branch_taken_0x45c1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c1f0) {
            ctx->pc = 0x45C208u;
            goto label_45c208;
        }
    }
    ctx->pc = 0x45C1F8u;
label_45c1f8:
    // 0x45c1f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x45c1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_45c1fc:
    // 0x45c1fc: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x45c1fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_45c200:
    // 0x45c200: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
label_45c204:
    if (ctx->pc == 0x45C204u) {
        ctx->pc = 0x45C208u;
        goto label_45c208;
    }
    ctx->pc = 0x45C200u;
    {
        const bool branch_taken_0x45c200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c200) {
            ctx->pc = 0x45C104u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c104;
        }
    }
    ctx->pc = 0x45C208u;
label_45c208:
    // 0x45c208: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x45c208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_45c20c:
    // 0x45c20c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x45c20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_45c210:
    // 0x45c210: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x45c210u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_45c214:
    // 0x45c214: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45c214u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_45c218:
    // 0x45c218: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45c218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45c21c:
    // 0x45c21c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45c21cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45c220:
    // 0x45c220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45c220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45c224:
    // 0x45c224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45c224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45c228:
    // 0x45c228: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x45c228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_45c22c:
    // 0x45c22c: 0x3e00008  jr          $ra
label_45c230:
    if (ctx->pc == 0x45C230u) {
        ctx->pc = 0x45C234u;
        goto label_45c234;
    }
    ctx->pc = 0x45C22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45C234u;
label_45c234:
    // 0x45c234: 0x0  nop
    ctx->pc = 0x45c234u;
    // NOP
label_45c238:
    // 0x45c238: 0x0  nop
    ctx->pc = 0x45c238u;
    // NOP
label_45c23c:
    // 0x45c23c: 0x0  nop
    ctx->pc = 0x45c23cu;
    // NOP
    ctx->pc = 0x45c240u;
}
