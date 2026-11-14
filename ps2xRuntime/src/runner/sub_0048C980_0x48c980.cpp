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

// Function: sub_0048C980
// Address: 0x48c980 - 0x48cd30
void sub_0048C980_0x48c980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C980_0x48c980");
#endif

    switch (ctx->pc) {
        case 0x48c980u: goto label_48c980;
        case 0x48c984u: goto label_48c984;
        case 0x48c988u: goto label_48c988;
        case 0x48c98cu: goto label_48c98c;
        case 0x48c990u: goto label_48c990;
        case 0x48c994u: goto label_48c994;
        case 0x48c998u: goto label_48c998;
        case 0x48c99cu: goto label_48c99c;
        case 0x48c9a0u: goto label_48c9a0;
        case 0x48c9a4u: goto label_48c9a4;
        case 0x48c9a8u: goto label_48c9a8;
        case 0x48c9acu: goto label_48c9ac;
        case 0x48c9b0u: goto label_48c9b0;
        case 0x48c9b4u: goto label_48c9b4;
        case 0x48c9b8u: goto label_48c9b8;
        case 0x48c9bcu: goto label_48c9bc;
        case 0x48c9c0u: goto label_48c9c0;
        case 0x48c9c4u: goto label_48c9c4;
        case 0x48c9c8u: goto label_48c9c8;
        case 0x48c9ccu: goto label_48c9cc;
        case 0x48c9d0u: goto label_48c9d0;
        case 0x48c9d4u: goto label_48c9d4;
        case 0x48c9d8u: goto label_48c9d8;
        case 0x48c9dcu: goto label_48c9dc;
        case 0x48c9e0u: goto label_48c9e0;
        case 0x48c9e4u: goto label_48c9e4;
        case 0x48c9e8u: goto label_48c9e8;
        case 0x48c9ecu: goto label_48c9ec;
        case 0x48c9f0u: goto label_48c9f0;
        case 0x48c9f4u: goto label_48c9f4;
        case 0x48c9f8u: goto label_48c9f8;
        case 0x48c9fcu: goto label_48c9fc;
        case 0x48ca00u: goto label_48ca00;
        case 0x48ca04u: goto label_48ca04;
        case 0x48ca08u: goto label_48ca08;
        case 0x48ca0cu: goto label_48ca0c;
        case 0x48ca10u: goto label_48ca10;
        case 0x48ca14u: goto label_48ca14;
        case 0x48ca18u: goto label_48ca18;
        case 0x48ca1cu: goto label_48ca1c;
        case 0x48ca20u: goto label_48ca20;
        case 0x48ca24u: goto label_48ca24;
        case 0x48ca28u: goto label_48ca28;
        case 0x48ca2cu: goto label_48ca2c;
        case 0x48ca30u: goto label_48ca30;
        case 0x48ca34u: goto label_48ca34;
        case 0x48ca38u: goto label_48ca38;
        case 0x48ca3cu: goto label_48ca3c;
        case 0x48ca40u: goto label_48ca40;
        case 0x48ca44u: goto label_48ca44;
        case 0x48ca48u: goto label_48ca48;
        case 0x48ca4cu: goto label_48ca4c;
        case 0x48ca50u: goto label_48ca50;
        case 0x48ca54u: goto label_48ca54;
        case 0x48ca58u: goto label_48ca58;
        case 0x48ca5cu: goto label_48ca5c;
        case 0x48ca60u: goto label_48ca60;
        case 0x48ca64u: goto label_48ca64;
        case 0x48ca68u: goto label_48ca68;
        case 0x48ca6cu: goto label_48ca6c;
        case 0x48ca70u: goto label_48ca70;
        case 0x48ca74u: goto label_48ca74;
        case 0x48ca78u: goto label_48ca78;
        case 0x48ca7cu: goto label_48ca7c;
        case 0x48ca80u: goto label_48ca80;
        case 0x48ca84u: goto label_48ca84;
        case 0x48ca88u: goto label_48ca88;
        case 0x48ca8cu: goto label_48ca8c;
        case 0x48ca90u: goto label_48ca90;
        case 0x48ca94u: goto label_48ca94;
        case 0x48ca98u: goto label_48ca98;
        case 0x48ca9cu: goto label_48ca9c;
        case 0x48caa0u: goto label_48caa0;
        case 0x48caa4u: goto label_48caa4;
        case 0x48caa8u: goto label_48caa8;
        case 0x48caacu: goto label_48caac;
        case 0x48cab0u: goto label_48cab0;
        case 0x48cab4u: goto label_48cab4;
        case 0x48cab8u: goto label_48cab8;
        case 0x48cabcu: goto label_48cabc;
        case 0x48cac0u: goto label_48cac0;
        case 0x48cac4u: goto label_48cac4;
        case 0x48cac8u: goto label_48cac8;
        case 0x48caccu: goto label_48cacc;
        case 0x48cad0u: goto label_48cad0;
        case 0x48cad4u: goto label_48cad4;
        case 0x48cad8u: goto label_48cad8;
        case 0x48cadcu: goto label_48cadc;
        case 0x48cae0u: goto label_48cae0;
        case 0x48cae4u: goto label_48cae4;
        case 0x48cae8u: goto label_48cae8;
        case 0x48caecu: goto label_48caec;
        case 0x48caf0u: goto label_48caf0;
        case 0x48caf4u: goto label_48caf4;
        case 0x48caf8u: goto label_48caf8;
        case 0x48cafcu: goto label_48cafc;
        case 0x48cb00u: goto label_48cb00;
        case 0x48cb04u: goto label_48cb04;
        case 0x48cb08u: goto label_48cb08;
        case 0x48cb0cu: goto label_48cb0c;
        case 0x48cb10u: goto label_48cb10;
        case 0x48cb14u: goto label_48cb14;
        case 0x48cb18u: goto label_48cb18;
        case 0x48cb1cu: goto label_48cb1c;
        case 0x48cb20u: goto label_48cb20;
        case 0x48cb24u: goto label_48cb24;
        case 0x48cb28u: goto label_48cb28;
        case 0x48cb2cu: goto label_48cb2c;
        case 0x48cb30u: goto label_48cb30;
        case 0x48cb34u: goto label_48cb34;
        case 0x48cb38u: goto label_48cb38;
        case 0x48cb3cu: goto label_48cb3c;
        case 0x48cb40u: goto label_48cb40;
        case 0x48cb44u: goto label_48cb44;
        case 0x48cb48u: goto label_48cb48;
        case 0x48cb4cu: goto label_48cb4c;
        case 0x48cb50u: goto label_48cb50;
        case 0x48cb54u: goto label_48cb54;
        case 0x48cb58u: goto label_48cb58;
        case 0x48cb5cu: goto label_48cb5c;
        case 0x48cb60u: goto label_48cb60;
        case 0x48cb64u: goto label_48cb64;
        case 0x48cb68u: goto label_48cb68;
        case 0x48cb6cu: goto label_48cb6c;
        case 0x48cb70u: goto label_48cb70;
        case 0x48cb74u: goto label_48cb74;
        case 0x48cb78u: goto label_48cb78;
        case 0x48cb7cu: goto label_48cb7c;
        case 0x48cb80u: goto label_48cb80;
        case 0x48cb84u: goto label_48cb84;
        case 0x48cb88u: goto label_48cb88;
        case 0x48cb8cu: goto label_48cb8c;
        case 0x48cb90u: goto label_48cb90;
        case 0x48cb94u: goto label_48cb94;
        case 0x48cb98u: goto label_48cb98;
        case 0x48cb9cu: goto label_48cb9c;
        case 0x48cba0u: goto label_48cba0;
        case 0x48cba4u: goto label_48cba4;
        case 0x48cba8u: goto label_48cba8;
        case 0x48cbacu: goto label_48cbac;
        case 0x48cbb0u: goto label_48cbb0;
        case 0x48cbb4u: goto label_48cbb4;
        case 0x48cbb8u: goto label_48cbb8;
        case 0x48cbbcu: goto label_48cbbc;
        case 0x48cbc0u: goto label_48cbc0;
        case 0x48cbc4u: goto label_48cbc4;
        case 0x48cbc8u: goto label_48cbc8;
        case 0x48cbccu: goto label_48cbcc;
        case 0x48cbd0u: goto label_48cbd0;
        case 0x48cbd4u: goto label_48cbd4;
        case 0x48cbd8u: goto label_48cbd8;
        case 0x48cbdcu: goto label_48cbdc;
        case 0x48cbe0u: goto label_48cbe0;
        case 0x48cbe4u: goto label_48cbe4;
        case 0x48cbe8u: goto label_48cbe8;
        case 0x48cbecu: goto label_48cbec;
        case 0x48cbf0u: goto label_48cbf0;
        case 0x48cbf4u: goto label_48cbf4;
        case 0x48cbf8u: goto label_48cbf8;
        case 0x48cbfcu: goto label_48cbfc;
        case 0x48cc00u: goto label_48cc00;
        case 0x48cc04u: goto label_48cc04;
        case 0x48cc08u: goto label_48cc08;
        case 0x48cc0cu: goto label_48cc0c;
        case 0x48cc10u: goto label_48cc10;
        case 0x48cc14u: goto label_48cc14;
        case 0x48cc18u: goto label_48cc18;
        case 0x48cc1cu: goto label_48cc1c;
        case 0x48cc20u: goto label_48cc20;
        case 0x48cc24u: goto label_48cc24;
        case 0x48cc28u: goto label_48cc28;
        case 0x48cc2cu: goto label_48cc2c;
        case 0x48cc30u: goto label_48cc30;
        case 0x48cc34u: goto label_48cc34;
        case 0x48cc38u: goto label_48cc38;
        case 0x48cc3cu: goto label_48cc3c;
        case 0x48cc40u: goto label_48cc40;
        case 0x48cc44u: goto label_48cc44;
        case 0x48cc48u: goto label_48cc48;
        case 0x48cc4cu: goto label_48cc4c;
        case 0x48cc50u: goto label_48cc50;
        case 0x48cc54u: goto label_48cc54;
        case 0x48cc58u: goto label_48cc58;
        case 0x48cc5cu: goto label_48cc5c;
        case 0x48cc60u: goto label_48cc60;
        case 0x48cc64u: goto label_48cc64;
        case 0x48cc68u: goto label_48cc68;
        case 0x48cc6cu: goto label_48cc6c;
        case 0x48cc70u: goto label_48cc70;
        case 0x48cc74u: goto label_48cc74;
        case 0x48cc78u: goto label_48cc78;
        case 0x48cc7cu: goto label_48cc7c;
        case 0x48cc80u: goto label_48cc80;
        case 0x48cc84u: goto label_48cc84;
        case 0x48cc88u: goto label_48cc88;
        case 0x48cc8cu: goto label_48cc8c;
        case 0x48cc90u: goto label_48cc90;
        case 0x48cc94u: goto label_48cc94;
        case 0x48cc98u: goto label_48cc98;
        case 0x48cc9cu: goto label_48cc9c;
        case 0x48cca0u: goto label_48cca0;
        case 0x48cca4u: goto label_48cca4;
        case 0x48cca8u: goto label_48cca8;
        case 0x48ccacu: goto label_48ccac;
        case 0x48ccb0u: goto label_48ccb0;
        case 0x48ccb4u: goto label_48ccb4;
        case 0x48ccb8u: goto label_48ccb8;
        case 0x48ccbcu: goto label_48ccbc;
        case 0x48ccc0u: goto label_48ccc0;
        case 0x48ccc4u: goto label_48ccc4;
        case 0x48ccc8u: goto label_48ccc8;
        case 0x48ccccu: goto label_48cccc;
        case 0x48ccd0u: goto label_48ccd0;
        case 0x48ccd4u: goto label_48ccd4;
        case 0x48ccd8u: goto label_48ccd8;
        case 0x48ccdcu: goto label_48ccdc;
        case 0x48cce0u: goto label_48cce0;
        case 0x48cce4u: goto label_48cce4;
        case 0x48cce8u: goto label_48cce8;
        case 0x48ccecu: goto label_48ccec;
        case 0x48ccf0u: goto label_48ccf0;
        case 0x48ccf4u: goto label_48ccf4;
        case 0x48ccf8u: goto label_48ccf8;
        case 0x48ccfcu: goto label_48ccfc;
        case 0x48cd00u: goto label_48cd00;
        case 0x48cd04u: goto label_48cd04;
        case 0x48cd08u: goto label_48cd08;
        case 0x48cd0cu: goto label_48cd0c;
        case 0x48cd10u: goto label_48cd10;
        case 0x48cd14u: goto label_48cd14;
        case 0x48cd18u: goto label_48cd18;
        case 0x48cd1cu: goto label_48cd1c;
        case 0x48cd20u: goto label_48cd20;
        case 0x48cd24u: goto label_48cd24;
        case 0x48cd28u: goto label_48cd28;
        case 0x48cd2cu: goto label_48cd2c;
        default: break;
    }

    ctx->pc = 0x48c980u;

label_48c980:
    // 0x48c980: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x48c980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_48c984:
    // 0x48c984: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48c984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_48c988:
    // 0x48c988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48c988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48c98c:
    // 0x48c98c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48c98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48c990:
    // 0x48c990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48c994:
    // 0x48c994: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x48c994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
label_48c998:
    // 0x48c998: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x48c998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
label_48c99c:
    // 0x48c99c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48c9a0:
    // 0x48c9a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c9a4:
    // 0x48c9a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48c9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48c9a8:
    // 0x48c9a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48c9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48c9ac:
    // 0x48c9ac: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48c9b0:
    if (ctx->pc == 0x48C9B0u) {
        ctx->pc = 0x48C9B4u;
        goto label_48c9b4;
    }
    ctx->pc = 0x48C9ACu;
    {
        const bool branch_taken_0x48c9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c9ac) {
            ctx->pc = 0x48CA5Cu;
            goto label_48ca5c;
        }
    }
    ctx->pc = 0x48C9B4u;
label_48c9b4:
    // 0x48c9b4: 0x8f82b658  lw          $v0, -0x49A8($gp)
    ctx->pc = 0x48c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948440)));
label_48c9b8:
    // 0x48c9b8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48c9bc:
    if (ctx->pc == 0x48C9BCu) {
        ctx->pc = 0x48C9C0u;
        goto label_48c9c0;
    }
    ctx->pc = 0x48C9B8u;
    {
        const bool branch_taken_0x48c9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c9b8) {
            ctx->pc = 0x48CA5Cu;
            goto label_48ca5c;
        }
    }
    ctx->pc = 0x48C9C0u;
label_48c9c0:
    // 0x48c9c0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48c9c4:
    // 0x48c9c4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48c9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48c9c8:
    // 0x48c9c8: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x48c9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_48c9cc:
    // 0x48c9cc: 0xc115ee8  jal         func_457BA0
label_48c9d0:
    if (ctx->pc == 0x48C9D0u) {
        ctx->pc = 0x48C9D4u;
        goto label_48c9d4;
    }
    ctx->pc = 0x48C9CCu;
    SET_GPR_U32(ctx, 31, 0x48C9D4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48C9CCu, 0x48C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C9D4u;
label_48c9d4:
    // 0x48c9d4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48c9d8:
    if (ctx->pc == 0x48C9D8u) {
        ctx->pc = 0x48C9DCu;
        goto label_48c9dc;
    }
    ctx->pc = 0x48C9D4u;
    {
        const bool branch_taken_0x48c9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c9d4) {
            ctx->pc = 0x48CA5Cu;
            goto label_48ca5c;
        }
    }
    ctx->pc = 0x48C9DCu;
label_48c9dc:
    // 0x48c9dc: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x48c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_48c9e0:
    // 0x48c9e0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48c9e4:
    if (ctx->pc == 0x48C9E4u) {
        ctx->pc = 0x48C9E8u;
        goto label_48c9e8;
    }
    ctx->pc = 0x48C9E0u;
    {
        const bool branch_taken_0x48c9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c9e0) {
            ctx->pc = 0x48CA5Cu;
            goto label_48ca5c;
        }
    }
    ctx->pc = 0x48C9E8u;
label_48c9e8:
    // 0x48c9e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_48c9ec:
    // 0x48c9ec: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48c9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48c9f0:
    // 0x48c9f0: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x48c9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_48c9f4:
    // 0x48c9f4: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48c9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48c9f8:
    // 0x48c9f8: 0x24e748b0  addiu       $a3, $a3, 0x48B0
    ctx->pc = 0x48c9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18608));
label_48c9fc:
    // 0x48c9fc: 0x240800df  addiu       $t0, $zero, 0xDF
    ctx->pc = 0x48c9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
label_48ca00:
    // 0x48ca00: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48ca00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48ca04:
    // 0x48ca04: 0x25294a50  addiu       $t1, $t1, 0x4A50
    ctx->pc = 0x48ca04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19024));
label_48ca08:
    // 0x48ca08: 0xc113940  jal         func_44E500
label_48ca0c:
    if (ctx->pc == 0x48CA0Cu) {
        ctx->pc = 0x48CA10u;
        goto label_48ca10;
    }
    ctx->pc = 0x48CA08u;
    SET_GPR_U32(ctx, 31, 0x48CA10u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48CA08u, 0x48CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CA10u;
label_48ca10:
    // 0x48ca10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_48ca14:
    // 0x48ca14: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48ca14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48ca18:
    // 0x48ca18: 0x24a54a70  addiu       $a1, $a1, 0x4A70
    ctx->pc = 0x48ca18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19056));
label_48ca1c:
    // 0x48ca1c: 0xc115c24  jal         func_457090
label_48ca20:
    if (ctx->pc == 0x48CA20u) {
        ctx->pc = 0x48CA24u;
        goto label_48ca24;
    }
    ctx->pc = 0x48CA1Cu;
    SET_GPR_U32(ctx, 31, 0x48CA24u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48CA1Cu, 0x48CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CA24u;
label_48ca24:
    // 0x48ca24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_48ca28:
    // 0x48ca28: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x48ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_48ca2c:
    // 0x48ca2c: 0x40f809  jalr        $v0
label_48ca30:
    if (ctx->pc == 0x48CA30u) {
        ctx->pc = 0x48CA34u;
        goto label_48ca34;
    }
    ctx->pc = 0x48CA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48CA34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CA2Cu, 0x48CA34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48CA34u;
label_48ca34:
    // 0x48ca34: 0xaf82b658  sw          $v0, -0x49A8($gp)
    ctx->pc = 0x48ca34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948440), GPR_U32(ctx, 2));
label_48ca38:
    // 0x48ca38: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_48ca3c:
    // 0x48ca3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48ca40:
    if (ctx->pc == 0x48CA40u) {
        ctx->pc = 0x48CA44u;
        goto label_48ca44;
    }
    ctx->pc = 0x48CA3Cu;
    {
        const bool branch_taken_0x48ca3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ca3c) {
            ctx->pc = 0x48CA4Cu;
            goto label_48ca4c;
        }
    }
    ctx->pc = 0x48CA44u;
label_48ca44:
    // 0x48ca44: 0xd  break       0
    ctx->pc = 0x48ca44u;
    runtime->handleBreak(rdram, ctx);
label_48ca48:
    // 0x48ca48: 0x0  nop
    ctx->pc = 0x48ca48u;
    // NOP
label_48ca4c:
    // 0x48ca4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x48ca4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_48ca50:
    // 0x48ca50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48ca50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48ca54:
    // 0x48ca54: 0xc11392c  jal         func_44E4B0
label_48ca58:
    if (ctx->pc == 0x48CA58u) {
        ctx->pc = 0x48CA5Cu;
        goto label_48ca5c;
    }
    ctx->pc = 0x48CA54u;
    SET_GPR_U32(ctx, 31, 0x48CA5Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48CA54u, 0x48CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CA5Cu;
label_48ca5c:
    // 0x48ca5c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48ca60:
    // 0x48ca60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48ca64:
    // 0x48ca64: 0x14020004  bne         $zero, $v0, . + 4 + (0x4 << 2)
label_48ca68:
    if (ctx->pc == 0x48CA68u) {
        ctx->pc = 0x48CA6Cu;
        goto label_48ca6c;
    }
    ctx->pc = 0x48CA64u;
    {
        const bool branch_taken_0x48ca64 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x48ca64) {
            ctx->pc = 0x48CA78u;
            goto label_48ca78;
        }
    }
    ctx->pc = 0x48CA6Cu;
label_48ca6c:
    // 0x48ca6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48ca6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48ca70:
    // 0x48ca70: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_48ca74:
    if (ctx->pc == 0x48CA74u) {
        ctx->pc = 0x48CA78u;
        goto label_48ca78;
    }
    ctx->pc = 0x48CA70u;
    {
        const bool branch_taken_0x48ca70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ca70) {
            ctx->pc = 0x48CD14u;
            goto label_48cd14;
        }
    }
    ctx->pc = 0x48CA78u;
label_48ca78:
    // 0x48ca78: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x48ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48ca7c:
    // 0x48ca7c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x48ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_48ca80:
    // 0x48ca80: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x48ca80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_48ca84:
    // 0x48ca84: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x48ca84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_48ca88:
    // 0x48ca88: 0xdc820038  ld          $v0, 0x38($a0)
    ctx->pc = 0x48ca88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 56)));
label_48ca8c:
    // 0x48ca8c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x48ca8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_48ca90:
    // 0x48ca90: 0xfc820038  sd          $v0, 0x38($a0)
    ctx->pc = 0x48ca90u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 2));
label_48ca94:
    // 0x48ca94: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48ca98:
    // 0x48ca98: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x48ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_48ca9c:
    // 0x48ca9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x48ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_48caa0:
    // 0x48caa0: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
label_48caa4:
    if (ctx->pc == 0x48CAA4u) {
        ctx->pc = 0x48CAA8u;
        goto label_48caa8;
    }
    ctx->pc = 0x48CAA0u;
    {
        const bool branch_taken_0x48caa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48caa0) {
            ctx->pc = 0x48CBF8u;
            goto label_48cbf8;
        }
    }
    ctx->pc = 0x48CAA8u;
label_48caa8:
    // 0x48caa8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x48caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_48caac:
    // 0x48caac: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
label_48cab0:
    if (ctx->pc == 0x48CAB0u) {
        ctx->pc = 0x48CAB4u;
        goto label_48cab4;
    }
    ctx->pc = 0x48CAACu;
    {
        const bool branch_taken_0x48caac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48caac) {
            ctx->pc = 0x48CB6Cu;
            goto label_48cb6c;
        }
    }
    ctx->pc = 0x48CAB4u;
label_48cab4:
    // 0x48cab4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48cab8:
    // 0x48cab8: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_48cabc:
    if (ctx->pc == 0x48CABCu) {
        ctx->pc = 0x48CAC0u;
        goto label_48cac0;
    }
    ctx->pc = 0x48CAB8u;
    {
        const bool branch_taken_0x48cab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48cab8) {
            ctx->pc = 0x48CB0Cu;
            goto label_48cb0c;
        }
    }
    ctx->pc = 0x48CAC0u;
label_48cac0:
    // 0x48cac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48cac4:
    // 0x48cac4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_48cac8:
    if (ctx->pc == 0x48CAC8u) {
        ctx->pc = 0x48CACCu;
        goto label_48cacc;
    }
    ctx->pc = 0x48CAC4u;
    {
        const bool branch_taken_0x48cac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48cac4) {
            ctx->pc = 0x48CAD4u;
            goto label_48cad4;
        }
    }
    ctx->pc = 0x48CACCu;
label_48cacc:
    // 0x48cacc: 0x1000004d  b           . + 4 + (0x4D << 2)
label_48cad0:
    if (ctx->pc == 0x48CAD0u) {
        ctx->pc = 0x48CAD4u;
        goto label_48cad4;
    }
    ctx->pc = 0x48CACCu;
    {
        const bool branch_taken_0x48cacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cacc) {
            ctx->pc = 0x48CC04u;
            goto label_48cc04;
        }
    }
    ctx->pc = 0x48CAD4u;
label_48cad4:
    // 0x48cad4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48cad8:
    // 0x48cad8: 0xdc430038  ld          $v1, 0x38($v0)
    ctx->pc = 0x48cad8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 56)));
label_48cadc:
    // 0x48cadc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48cae0:
    // 0x48cae0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x48cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_48cae4:
    // 0x48cae4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48cae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_48cae8:
    // 0x48cae8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x48cae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_48caec:
    // 0x48caec: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x48caecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_48caf0:
    // 0x48caf0: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
label_48caf4:
    if (ctx->pc == 0x48CAF4u) {
        ctx->pc = 0x48CAF8u;
        goto label_48caf8;
    }
    ctx->pc = 0x48CAF0u;
    {
        const bool branch_taken_0x48caf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48caf0) {
            ctx->pc = 0x48CC04u;
            goto label_48cc04;
        }
    }
    ctx->pc = 0x48CAF8u;
label_48caf8:
    // 0x48caf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x48caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48cafc:
    // 0x48cafc: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48cb00:
    // 0x48cb00: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x48cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_48cb04:
    // 0x48cb04: 0x1000003f  b           . + 4 + (0x3F << 2)
label_48cb08:
    if (ctx->pc == 0x48CB08u) {
        ctx->pc = 0x48CB0Cu;
        goto label_48cb0c;
    }
    ctx->pc = 0x48CB04u;
    {
        const bool branch_taken_0x48cb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cb04) {
            ctx->pc = 0x48CC04u;
            goto label_48cc04;
        }
    }
    ctx->pc = 0x48CB0Cu;
label_48cb0c:
    // 0x48cb0c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48cb10:
    // 0x48cb10: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x48cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_48cb14:
    // 0x48cb14: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_48cb18:
    if (ctx->pc == 0x48CB18u) {
        ctx->pc = 0x48CB1Cu;
        goto label_48cb1c;
    }
    ctx->pc = 0x48CB14u;
    {
        const bool branch_taken_0x48cb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48cb14) {
            ctx->pc = 0x48CC04u;
            goto label_48cc04;
        }
    }
    ctx->pc = 0x48CB1Cu;
label_48cb1c:
    // 0x48cb1c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48cb20:
    // 0x48cb20: 0xdc440038  ld          $a0, 0x38($v0)
    ctx->pc = 0x48cb20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 56)));
label_48cb24:
    // 0x48cb24: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48cb28:
    // 0x48cb28: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x48cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_48cb2c:
    // 0x48cb2c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48cb30:
    // 0x48cb30: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x48cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_48cb34:
    // 0x48cb34: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x48cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48cb38:
    // 0x48cb38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48cb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_48cb3c:
    // 0x48cb3c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x48cb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_48cb40:
    // 0x48cb40: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x48cb40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_48cb44:
    // 0x48cb44: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
label_48cb48:
    if (ctx->pc == 0x48CB48u) {
        ctx->pc = 0x48CB4Cu;
        goto label_48cb4c;
    }
    ctx->pc = 0x48CB44u;
    {
        const bool branch_taken_0x48cb44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cb44) {
            ctx->pc = 0x48CC04u;
            goto label_48cc04;
        }
    }
    ctx->pc = 0x48CB4Cu;
label_48cb4c:
    // 0x48cb4c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x48cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48cb50:
    // 0x48cb50: 0xc12323c  jal         func_48C8F0
label_48cb54:
    if (ctx->pc == 0x48CB54u) {
        ctx->pc = 0x48CB58u;
        goto label_48cb58;
    }
    ctx->pc = 0x48CB50u;
    SET_GPR_U32(ctx, 31, 0x48CB58u);
    ctx->pc = 0x48C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C8F0u, 0x48CB50u, 0x48CB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CB58u;
label_48cb58:
    // 0x48cb58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x48cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_48cb5c:
    // 0x48cb5c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48cb60:
    // 0x48cb60: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x48cb60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_48cb64:
    // 0x48cb64: 0x10000027  b           . + 4 + (0x27 << 2)
label_48cb68:
    if (ctx->pc == 0x48CB68u) {
        ctx->pc = 0x48CB6Cu;
        goto label_48cb6c;
    }
    ctx->pc = 0x48CB64u;
    {
        const bool branch_taken_0x48cb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cb64) {
            ctx->pc = 0x48CC04u;
            goto label_48cc04;
        }
    }
    ctx->pc = 0x48CB6Cu;
label_48cb6c:
    // 0x48cb6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x48cb6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48cb70:
    // 0x48cb70: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48cb74:
    // 0x48cb74: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48cb78:
    // 0x48cb78: 0xc123200  jal         func_48C800
label_48cb7c:
    if (ctx->pc == 0x48CB7Cu) {
        ctx->pc = 0x48CB80u;
        goto label_48cb80;
    }
    ctx->pc = 0x48CB78u;
    SET_GPR_U32(ctx, 31, 0x48CB80u);
    ctx->pc = 0x48C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C800u, 0x48CB78u, 0x48CB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CB80u;
label_48cb80:
    // 0x48cb80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48cb80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48cb84:
    // 0x48cb84: 0x1000000a  b           . + 4 + (0xA << 2)
label_48cb88:
    if (ctx->pc == 0x48CB88u) {
        ctx->pc = 0x48CB8Cu;
        goto label_48cb8c;
    }
    ctx->pc = 0x48CB84u;
    {
        const bool branch_taken_0x48cb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cb84) {
            ctx->pc = 0x48CBB0u;
            goto label_48cbb0;
        }
    }
    ctx->pc = 0x48CB8Cu;
label_48cb8c:
    // 0x48cb8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x48cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_48cb90:
    // 0x48cb90: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x48cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_48cb94:
    // 0x48cb94: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x48cb94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_48cb98:
    // 0x48cb98: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_48cb9c:
    if (ctx->pc == 0x48CB9Cu) {
        ctx->pc = 0x48CBA0u;
        goto label_48cba0;
    }
    ctx->pc = 0x48CB98u;
    {
        const bool branch_taken_0x48cb98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cb98) {
            ctx->pc = 0x48CBACu;
            goto label_48cbac;
        }
    }
    ctx->pc = 0x48CBA0u;
label_48cba0:
    // 0x48cba0: 0x36520001  ori         $s2, $s2, 0x1
    ctx->pc = 0x48cba0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
label_48cba4:
    // 0x48cba4: 0x10000008  b           . + 4 + (0x8 << 2)
label_48cba8:
    if (ctx->pc == 0x48CBA8u) {
        ctx->pc = 0x48CBACu;
        goto label_48cbac;
    }
    ctx->pc = 0x48CBA4u;
    {
        const bool branch_taken_0x48cba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cba4) {
            ctx->pc = 0x48CBC8u;
            goto label_48cbc8;
        }
    }
    ctx->pc = 0x48CBACu;
label_48cbac:
    // 0x48cbac: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x48cbacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_48cbb0:
    // 0x48cbb0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48cbb4:
    // 0x48cbb4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48cbb8:
    // 0x48cbb8: 0xc1231f8  jal         func_48C7E0
label_48cbbc:
    if (ctx->pc == 0x48CBBCu) {
        ctx->pc = 0x48CBC0u;
        goto label_48cbc0;
    }
    ctx->pc = 0x48CBB8u;
    SET_GPR_U32(ctx, 31, 0x48CBC0u);
    ctx->pc = 0x48C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C7E0u, 0x48CBB8u, 0x48CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CBC0u;
label_48cbc0:
    // 0x48cbc0: 0x1622fff2  bne         $s1, $v0, . + 4 + (-0xE << 2)
label_48cbc4:
    if (ctx->pc == 0x48CBC4u) {
        ctx->pc = 0x48CBC8u;
        goto label_48cbc8;
    }
    ctx->pc = 0x48CBC0u;
    {
        const bool branch_taken_0x48cbc0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x48cbc0) {
            ctx->pc = 0x48CB8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48cb8c;
        }
    }
    ctx->pc = 0x48CBC8u;
label_48cbc8:
    // 0x48cbc8: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
label_48cbcc:
    if (ctx->pc == 0x48CBCCu) {
        ctx->pc = 0x48CBD0u;
        goto label_48cbd0;
    }
    ctx->pc = 0x48CBC8u;
    {
        const bool branch_taken_0x48cbc8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x48cbc8) {
            ctx->pc = 0x48CC04u;
            goto label_48cc04;
        }
    }
    ctx->pc = 0x48CBD0u;
label_48cbd0:
    // 0x48cbd0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x48cbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48cbd4:
    // 0x48cbd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48cbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48cbd8:
    // 0x48cbd8: 0xc12346c  jal         func_48D1B0
label_48cbdc:
    if (ctx->pc == 0x48CBDCu) {
        ctx->pc = 0x48CBE0u;
        goto label_48cbe0;
    }
    ctx->pc = 0x48CBD8u;
    SET_GPR_U32(ctx, 31, 0x48CBE0u);
    ctx->pc = 0x48D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D1B0u, 0x48CBD8u, 0x48CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CBE0u;
label_48cbe0:
    // 0x48cbe0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x48cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_48cbe4:
    // 0x48cbe4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48cbe8:
    // 0x48cbe8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x48cbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_48cbec:
    // 0x48cbec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48cbf0:
    // 0x48cbf0: 0x10000048  b           . + 4 + (0x48 << 2)
label_48cbf4:
    if (ctx->pc == 0x48CBF4u) {
        ctx->pc = 0x48CBF8u;
        goto label_48cbf8;
    }
    ctx->pc = 0x48CBF0u;
    {
        const bool branch_taken_0x48cbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cbf0) {
            ctx->pc = 0x48CD14u;
            goto label_48cd14;
        }
    }
    ctx->pc = 0x48CBF8u;
label_48cbf8:
    // 0x48cbf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48cbfc:
    // 0x48cbfc: 0x10000045  b           . + 4 + (0x45 << 2)
label_48cc00:
    if (ctx->pc == 0x48CC00u) {
        ctx->pc = 0x48CC04u;
        goto label_48cc04;
    }
    ctx->pc = 0x48CBFCu;
    {
        const bool branch_taken_0x48cbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cbfc) {
            ctx->pc = 0x48CD14u;
            goto label_48cd14;
        }
    }
    ctx->pc = 0x48CC04u;
label_48cc04:
    // 0x48cc04: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48cc08:
    // 0x48cc08: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48cc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48cc0c:
    // 0x48cc0c: 0xc123200  jal         func_48C800
label_48cc10:
    if (ctx->pc == 0x48CC10u) {
        ctx->pc = 0x48CC14u;
        goto label_48cc14;
    }
    ctx->pc = 0x48CC0Cu;
    SET_GPR_U32(ctx, 31, 0x48CC14u);
    ctx->pc = 0x48C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C800u, 0x48CC0Cu, 0x48CC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CC14u;
label_48cc14:
    // 0x48cc14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48cc14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48cc18:
    // 0x48cc18: 0x10000037  b           . + 4 + (0x37 << 2)
label_48cc1c:
    if (ctx->pc == 0x48CC1Cu) {
        ctx->pc = 0x48CC20u;
        goto label_48cc20;
    }
    ctx->pc = 0x48CC18u;
    {
        const bool branch_taken_0x48cc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cc18) {
            ctx->pc = 0x48CCF8u;
            goto label_48ccf8;
        }
    }
    ctx->pc = 0x48CC20u;
label_48cc20:
    // 0x48cc20: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x48cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_48cc24:
    // 0x48cc24: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_48cc28:
    if (ctx->pc == 0x48CC28u) {
        ctx->pc = 0x48CC2Cu;
        goto label_48cc2c;
    }
    ctx->pc = 0x48CC24u;
    {
        const bool branch_taken_0x48cc24 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x48cc24) {
            ctx->pc = 0x48CC40u;
            goto label_48cc40;
        }
    }
    ctx->pc = 0x48CC2Cu;
label_48cc2c:
    // 0x48cc2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48cc2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48cc30:
    // 0x48cc30: 0x0  nop
    ctx->pc = 0x48cc30u;
    // NOP
label_48cc34:
    // 0x48cc34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x48cc34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_48cc38:
    // 0x48cc38: 0x10000008  b           . + 4 + (0x8 << 2)
label_48cc3c:
    if (ctx->pc == 0x48CC3Cu) {
        ctx->pc = 0x48CC40u;
        goto label_48cc40;
    }
    ctx->pc = 0x48CC38u;
    {
        const bool branch_taken_0x48cc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48cc38) {
            ctx->pc = 0x48CC5Cu;
            goto label_48cc5c;
        }
    }
    ctx->pc = 0x48CC40u;
label_48cc40:
    // 0x48cc40: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x48cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_48cc44:
    // 0x48cc44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x48cc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_48cc48:
    // 0x48cc48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x48cc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_48cc4c:
    // 0x48cc4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x48cc4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48cc50:
    // 0x48cc50: 0x0  nop
    ctx->pc = 0x48cc50u;
    // NOP
label_48cc54:
    // 0x48cc54: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x48cc54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_48cc58:
    // 0x48cc58: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x48cc58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_48cc5c:
    // 0x48cc5c: 0xc7808258  lwc1        $f0, -0x7DA8($gp)
    ctx->pc = 0x48cc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48cc60:
    // 0x48cc60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x48cc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_48cc64:
    // 0x48cc64: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x48cc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_48cc68:
    // 0x48cc68: 0xc10a78a  jal         func_429E28
label_48cc6c:
    if (ctx->pc == 0x48CC6Cu) {
        ctx->pc = 0x48CC70u;
        goto label_48cc70;
    }
    ctx->pc = 0x48CC68u;
    SET_GPR_U32(ctx, 31, 0x48CC70u);
    ctx->pc = 0x429E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429E28u, 0x48CC68u, 0x48CC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CC70u;
label_48cc70:
    // 0x48cc70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x48cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_48cc74:
    // 0x48cc74: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x48cc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_48cc78:
    // 0x48cc78: 0xc0d2654  jal         func_349950
label_48cc7c:
    if (ctx->pc == 0x48CC7Cu) {
        ctx->pc = 0x48CC80u;
        goto label_48cc80;
    }
    ctx->pc = 0x48CC78u;
    SET_GPR_U32(ctx, 31, 0x48CC80u);
    ctx->pc = 0x349950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349950u, 0x48CC78u, 0x48CC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CC80u;
label_48cc80:
    // 0x48cc80: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x48cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_48cc84:
    // 0x48cc84: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x48cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_48cc88:
    // 0x48cc88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48cc8c:
    // 0x48cc8c: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_48cc90:
    if (ctx->pc == 0x48CC90u) {
        ctx->pc = 0x48CC94u;
        goto label_48cc94;
    }
    ctx->pc = 0x48CC8Cu;
    {
        const bool branch_taken_0x48cc8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48cc8c) {
            ctx->pc = 0x48CCF4u;
            goto label_48ccf4;
        }
    }
    ctx->pc = 0x48CC94u;
label_48cc94:
    // 0x48cc94: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x48cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48cc98:
    // 0x48cc98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48cc9c:
    // 0x48cc9c: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_48cca0:
    if (ctx->pc == 0x48CCA0u) {
        ctx->pc = 0x48CCA4u;
        goto label_48cca4;
    }
    ctx->pc = 0x48CC9Cu;
    {
        const bool branch_taken_0x48cc9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48cc9c) {
            ctx->pc = 0x48CCF4u;
            goto label_48ccf4;
        }
    }
    ctx->pc = 0x48CCA4u;
label_48cca4:
    // 0x48cca4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x48cca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48cca8:
    // 0x48cca8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48cca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48ccac:
    // 0x48ccac: 0x0  nop
    ctx->pc = 0x48ccacu;
    // NOP
label_48ccb0:
    // 0x48ccb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x48ccb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48ccb4:
    // 0x48ccb4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_48ccb8:
    if (ctx->pc == 0x48CCB8u) {
        ctx->pc = 0x48CCBCu;
        goto label_48ccbc;
    }
    ctx->pc = 0x48CCB4u;
    {
        const bool branch_taken_0x48ccb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48ccb4) {
            ctx->pc = 0x48CCE4u;
            goto label_48cce4;
        }
    }
    ctx->pc = 0x48CCBCu;
label_48ccbc:
    // 0x48ccbc: 0xc7808258  lwc1        $f0, -0x7DA8($gp)
    ctx->pc = 0x48ccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48ccc0:
    // 0x48ccc0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x48ccc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_48ccc4:
    // 0x48ccc4: 0x10000007  b           . + 4 + (0x7 << 2)
label_48ccc8:
    if (ctx->pc == 0x48CCC8u) {
        ctx->pc = 0x48CCCCu;
        goto label_48cccc;
    }
    ctx->pc = 0x48CCC4u;
    {
        const bool branch_taken_0x48ccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ccc4) {
            ctx->pc = 0x48CCE4u;
            goto label_48cce4;
        }
    }
    ctx->pc = 0x48CCCCu;
label_48cccc:
    // 0x48cccc: 0xc10a78a  jal         func_429E28
label_48ccd0:
    if (ctx->pc == 0x48CCD0u) {
        ctx->pc = 0x48CCD4u;
        goto label_48ccd4;
    }
    ctx->pc = 0x48CCCCu;
    SET_GPR_U32(ctx, 31, 0x48CCD4u);
    ctx->pc = 0x429E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429E28u, 0x48CCCCu, 0x48CCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CCD4u;
label_48ccd4:
    // 0x48ccd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x48ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_48ccd8:
    // 0x48ccd8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x48ccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_48ccdc:
    // 0x48ccdc: 0xc0d2654  jal         func_349950
label_48cce0:
    if (ctx->pc == 0x48CCE0u) {
        ctx->pc = 0x48CCE4u;
        goto label_48cce4;
    }
    ctx->pc = 0x48CCDCu;
    SET_GPR_U32(ctx, 31, 0x48CCE4u);
    ctx->pc = 0x349950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349950u, 0x48CCDCu, 0x48CCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CCE4u;
label_48cce4:
    // 0x48cce4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x48cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48cce8:
    // 0x48cce8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x48cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_48ccec:
    // 0x48ccec: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_48ccf0:
    if (ctx->pc == 0x48CCF0u) {
        ctx->pc = 0x48CCF4u;
        goto label_48ccf4;
    }
    ctx->pc = 0x48CCECu;
    {
        const bool branch_taken_0x48ccec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48ccec) {
            ctx->pc = 0x48CCCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48cccc;
        }
    }
    ctx->pc = 0x48CCF4u;
label_48ccf4:
    // 0x48ccf4: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x48ccf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_48ccf8:
    // 0x48ccf8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x48ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_48ccfc:
    // 0x48ccfc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48cd00:
    // 0x48cd00: 0xc1231f8  jal         func_48C7E0
label_48cd04:
    if (ctx->pc == 0x48CD04u) {
        ctx->pc = 0x48CD08u;
        goto label_48cd08;
    }
    ctx->pc = 0x48CD00u;
    SET_GPR_U32(ctx, 31, 0x48CD08u);
    ctx->pc = 0x48C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C7E0u, 0x48CD00u, 0x48CD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CD08u;
label_48cd08:
    // 0x48cd08: 0x1602ffc5  bne         $s0, $v0, . + 4 + (-0x3B << 2)
label_48cd0c:
    if (ctx->pc == 0x48CD0Cu) {
        ctx->pc = 0x48CD10u;
        goto label_48cd10;
    }
    ctx->pc = 0x48CD08u;
    {
        const bool branch_taken_0x48cd08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x48cd08) {
            ctx->pc = 0x48CC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48cc20;
        }
    }
    ctx->pc = 0x48CD10u;
label_48cd10:
    // 0x48cd10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48cd14:
    // 0x48cd14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48cd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_48cd18:
    // 0x48cd18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48cd18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48cd1c:
    // 0x48cd1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48cd1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48cd20:
    // 0x48cd20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48cd20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48cd24:
    // 0x48cd24: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x48cd24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_48cd28:
    // 0x48cd28: 0x3e00008  jr          $ra
label_48cd2c:
    if (ctx->pc == 0x48CD2Cu) {
        ctx->pc = 0x48CD30u;
        goto label_fallthrough_0x48cd28;
    }
    ctx->pc = 0x48CD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48cd28:
    ctx->pc = 0x48CD30u;
}
