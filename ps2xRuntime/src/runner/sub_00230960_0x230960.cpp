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

// Function: sub_00230960
// Address: 0x230960 - 0x230cb0
void sub_00230960_0x230960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230960_0x230960");
#endif

    switch (ctx->pc) {
        case 0x230960u: goto label_230960;
        case 0x230964u: goto label_230964;
        case 0x230968u: goto label_230968;
        case 0x23096cu: goto label_23096c;
        case 0x230970u: goto label_230970;
        case 0x230974u: goto label_230974;
        case 0x230978u: goto label_230978;
        case 0x23097cu: goto label_23097c;
        case 0x230980u: goto label_230980;
        case 0x230984u: goto label_230984;
        case 0x230988u: goto label_230988;
        case 0x23098cu: goto label_23098c;
        case 0x230990u: goto label_230990;
        case 0x230994u: goto label_230994;
        case 0x230998u: goto label_230998;
        case 0x23099cu: goto label_23099c;
        case 0x2309a0u: goto label_2309a0;
        case 0x2309a4u: goto label_2309a4;
        case 0x2309a8u: goto label_2309a8;
        case 0x2309acu: goto label_2309ac;
        case 0x2309b0u: goto label_2309b0;
        case 0x2309b4u: goto label_2309b4;
        case 0x2309b8u: goto label_2309b8;
        case 0x2309bcu: goto label_2309bc;
        case 0x2309c0u: goto label_2309c0;
        case 0x2309c4u: goto label_2309c4;
        case 0x2309c8u: goto label_2309c8;
        case 0x2309ccu: goto label_2309cc;
        case 0x2309d0u: goto label_2309d0;
        case 0x2309d4u: goto label_2309d4;
        case 0x2309d8u: goto label_2309d8;
        case 0x2309dcu: goto label_2309dc;
        case 0x2309e0u: goto label_2309e0;
        case 0x2309e4u: goto label_2309e4;
        case 0x2309e8u: goto label_2309e8;
        case 0x2309ecu: goto label_2309ec;
        case 0x2309f0u: goto label_2309f0;
        case 0x2309f4u: goto label_2309f4;
        case 0x2309f8u: goto label_2309f8;
        case 0x2309fcu: goto label_2309fc;
        case 0x230a00u: goto label_230a00;
        case 0x230a04u: goto label_230a04;
        case 0x230a08u: goto label_230a08;
        case 0x230a0cu: goto label_230a0c;
        case 0x230a10u: goto label_230a10;
        case 0x230a14u: goto label_230a14;
        case 0x230a18u: goto label_230a18;
        case 0x230a1cu: goto label_230a1c;
        case 0x230a20u: goto label_230a20;
        case 0x230a24u: goto label_230a24;
        case 0x230a28u: goto label_230a28;
        case 0x230a2cu: goto label_230a2c;
        case 0x230a30u: goto label_230a30;
        case 0x230a34u: goto label_230a34;
        case 0x230a38u: goto label_230a38;
        case 0x230a3cu: goto label_230a3c;
        case 0x230a40u: goto label_230a40;
        case 0x230a44u: goto label_230a44;
        case 0x230a48u: goto label_230a48;
        case 0x230a4cu: goto label_230a4c;
        case 0x230a50u: goto label_230a50;
        case 0x230a54u: goto label_230a54;
        case 0x230a58u: goto label_230a58;
        case 0x230a5cu: goto label_230a5c;
        case 0x230a60u: goto label_230a60;
        case 0x230a64u: goto label_230a64;
        case 0x230a68u: goto label_230a68;
        case 0x230a6cu: goto label_230a6c;
        case 0x230a70u: goto label_230a70;
        case 0x230a74u: goto label_230a74;
        case 0x230a78u: goto label_230a78;
        case 0x230a7cu: goto label_230a7c;
        case 0x230a80u: goto label_230a80;
        case 0x230a84u: goto label_230a84;
        case 0x230a88u: goto label_230a88;
        case 0x230a8cu: goto label_230a8c;
        case 0x230a90u: goto label_230a90;
        case 0x230a94u: goto label_230a94;
        case 0x230a98u: goto label_230a98;
        case 0x230a9cu: goto label_230a9c;
        case 0x230aa0u: goto label_230aa0;
        case 0x230aa4u: goto label_230aa4;
        case 0x230aa8u: goto label_230aa8;
        case 0x230aacu: goto label_230aac;
        case 0x230ab0u: goto label_230ab0;
        case 0x230ab4u: goto label_230ab4;
        case 0x230ab8u: goto label_230ab8;
        case 0x230abcu: goto label_230abc;
        case 0x230ac0u: goto label_230ac0;
        case 0x230ac4u: goto label_230ac4;
        case 0x230ac8u: goto label_230ac8;
        case 0x230accu: goto label_230acc;
        case 0x230ad0u: goto label_230ad0;
        case 0x230ad4u: goto label_230ad4;
        case 0x230ad8u: goto label_230ad8;
        case 0x230adcu: goto label_230adc;
        case 0x230ae0u: goto label_230ae0;
        case 0x230ae4u: goto label_230ae4;
        case 0x230ae8u: goto label_230ae8;
        case 0x230aecu: goto label_230aec;
        case 0x230af0u: goto label_230af0;
        case 0x230af4u: goto label_230af4;
        case 0x230af8u: goto label_230af8;
        case 0x230afcu: goto label_230afc;
        case 0x230b00u: goto label_230b00;
        case 0x230b04u: goto label_230b04;
        case 0x230b08u: goto label_230b08;
        case 0x230b0cu: goto label_230b0c;
        case 0x230b10u: goto label_230b10;
        case 0x230b14u: goto label_230b14;
        case 0x230b18u: goto label_230b18;
        case 0x230b1cu: goto label_230b1c;
        case 0x230b20u: goto label_230b20;
        case 0x230b24u: goto label_230b24;
        case 0x230b28u: goto label_230b28;
        case 0x230b2cu: goto label_230b2c;
        case 0x230b30u: goto label_230b30;
        case 0x230b34u: goto label_230b34;
        case 0x230b38u: goto label_230b38;
        case 0x230b3cu: goto label_230b3c;
        case 0x230b40u: goto label_230b40;
        case 0x230b44u: goto label_230b44;
        case 0x230b48u: goto label_230b48;
        case 0x230b4cu: goto label_230b4c;
        case 0x230b50u: goto label_230b50;
        case 0x230b54u: goto label_230b54;
        case 0x230b58u: goto label_230b58;
        case 0x230b5cu: goto label_230b5c;
        case 0x230b60u: goto label_230b60;
        case 0x230b64u: goto label_230b64;
        case 0x230b68u: goto label_230b68;
        case 0x230b6cu: goto label_230b6c;
        case 0x230b70u: goto label_230b70;
        case 0x230b74u: goto label_230b74;
        case 0x230b78u: goto label_230b78;
        case 0x230b7cu: goto label_230b7c;
        case 0x230b80u: goto label_230b80;
        case 0x230b84u: goto label_230b84;
        case 0x230b88u: goto label_230b88;
        case 0x230b8cu: goto label_230b8c;
        case 0x230b90u: goto label_230b90;
        case 0x230b94u: goto label_230b94;
        case 0x230b98u: goto label_230b98;
        case 0x230b9cu: goto label_230b9c;
        case 0x230ba0u: goto label_230ba0;
        case 0x230ba4u: goto label_230ba4;
        case 0x230ba8u: goto label_230ba8;
        case 0x230bacu: goto label_230bac;
        case 0x230bb0u: goto label_230bb0;
        case 0x230bb4u: goto label_230bb4;
        case 0x230bb8u: goto label_230bb8;
        case 0x230bbcu: goto label_230bbc;
        case 0x230bc0u: goto label_230bc0;
        case 0x230bc4u: goto label_230bc4;
        case 0x230bc8u: goto label_230bc8;
        case 0x230bccu: goto label_230bcc;
        case 0x230bd0u: goto label_230bd0;
        case 0x230bd4u: goto label_230bd4;
        case 0x230bd8u: goto label_230bd8;
        case 0x230bdcu: goto label_230bdc;
        case 0x230be0u: goto label_230be0;
        case 0x230be4u: goto label_230be4;
        case 0x230be8u: goto label_230be8;
        case 0x230becu: goto label_230bec;
        case 0x230bf0u: goto label_230bf0;
        case 0x230bf4u: goto label_230bf4;
        case 0x230bf8u: goto label_230bf8;
        case 0x230bfcu: goto label_230bfc;
        case 0x230c00u: goto label_230c00;
        case 0x230c04u: goto label_230c04;
        case 0x230c08u: goto label_230c08;
        case 0x230c0cu: goto label_230c0c;
        case 0x230c10u: goto label_230c10;
        case 0x230c14u: goto label_230c14;
        case 0x230c18u: goto label_230c18;
        case 0x230c1cu: goto label_230c1c;
        case 0x230c20u: goto label_230c20;
        case 0x230c24u: goto label_230c24;
        case 0x230c28u: goto label_230c28;
        case 0x230c2cu: goto label_230c2c;
        case 0x230c30u: goto label_230c30;
        case 0x230c34u: goto label_230c34;
        case 0x230c38u: goto label_230c38;
        case 0x230c3cu: goto label_230c3c;
        case 0x230c40u: goto label_230c40;
        case 0x230c44u: goto label_230c44;
        case 0x230c48u: goto label_230c48;
        case 0x230c4cu: goto label_230c4c;
        case 0x230c50u: goto label_230c50;
        case 0x230c54u: goto label_230c54;
        case 0x230c58u: goto label_230c58;
        case 0x230c5cu: goto label_230c5c;
        case 0x230c60u: goto label_230c60;
        case 0x230c64u: goto label_230c64;
        case 0x230c68u: goto label_230c68;
        case 0x230c6cu: goto label_230c6c;
        case 0x230c70u: goto label_230c70;
        case 0x230c74u: goto label_230c74;
        case 0x230c78u: goto label_230c78;
        case 0x230c7cu: goto label_230c7c;
        case 0x230c80u: goto label_230c80;
        case 0x230c84u: goto label_230c84;
        case 0x230c88u: goto label_230c88;
        case 0x230c8cu: goto label_230c8c;
        case 0x230c90u: goto label_230c90;
        case 0x230c94u: goto label_230c94;
        case 0x230c98u: goto label_230c98;
        case 0x230c9cu: goto label_230c9c;
        case 0x230ca0u: goto label_230ca0;
        case 0x230ca4u: goto label_230ca4;
        case 0x230ca8u: goto label_230ca8;
        case 0x230cacu: goto label_230cac;
        default: break;
    }

    ctx->pc = 0x230960u;

label_230960:
    // 0x230960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x230960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_230964:
    // 0x230964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x230964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_230968:
    // 0x230968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23096c:
    // 0x23096c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_230970:
    // 0x230970: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x230970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_230974:
    // 0x230974: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x230974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_230978:
    // 0x230978: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x230978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_23097c:
    // 0x23097c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x23097cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_230980:
    // 0x230980: 0xc08c200  jal         func_230800
label_230984:
    if (ctx->pc == 0x230984u) {
        ctx->pc = 0x230988u;
        goto label_230988;
    }
    ctx->pc = 0x230980u;
    SET_GPR_U32(ctx, 31, 0x230988u);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x230980u, 0x230988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230988u;
label_230988:
    // 0x230988: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23098c:
    if (ctx->pc == 0x23098Cu) {
        ctx->pc = 0x230990u;
        goto label_230990;
    }
    ctx->pc = 0x230988u;
    {
        const bool branch_taken_0x230988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230988) {
            ctx->pc = 0x23099Cu;
            goto label_23099c;
        }
    }
    ctx->pc = 0x230990u;
label_230990:
    // 0x230990: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x230990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_230994:
    // 0x230994: 0x100000bd  b           . + 4 + (0xBD << 2)
label_230998:
    if (ctx->pc == 0x230998u) {
        ctx->pc = 0x23099Cu;
        goto label_23099c;
    }
    ctx->pc = 0x230994u;
    {
        const bool branch_taken_0x230994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230994) {
            ctx->pc = 0x230C8Cu;
            goto label_230c8c;
        }
    }
    ctx->pc = 0x23099Cu;
label_23099c:
    // 0x23099c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x23099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2309a0:
    // 0x2309a0: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x2309a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_2309a4:
    // 0x2309a4: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x2309a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2309a8:
    // 0x2309a8: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
label_2309ac:
    if (ctx->pc == 0x2309ACu) {
        ctx->pc = 0x2309B0u;
        goto label_2309b0;
    }
    ctx->pc = 0x2309A8u;
    {
        const bool branch_taken_0x2309a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2309a8) {
            ctx->pc = 0x230AACu;
            goto label_230aac;
        }
    }
    ctx->pc = 0x2309B0u;
label_2309b0:
    // 0x2309b0: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x2309b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2309b4:
    // 0x2309b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2309b8:
    if (ctx->pc == 0x2309B8u) {
        ctx->pc = 0x2309BCu;
        goto label_2309bc;
    }
    ctx->pc = 0x2309B4u;
    {
        const bool branch_taken_0x2309b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2309b4) {
            ctx->pc = 0x2309C4u;
            goto label_2309c4;
        }
    }
    ctx->pc = 0x2309BCu;
label_2309bc:
    // 0x2309bc: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_2309c0:
    if (ctx->pc == 0x2309C0u) {
        ctx->pc = 0x2309C4u;
        goto label_2309c4;
    }
    ctx->pc = 0x2309BCu;
    {
        const bool branch_taken_0x2309bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2309bc) {
            ctx->pc = 0x230C88u;
            goto label_230c88;
        }
    }
    ctx->pc = 0x2309C4u;
label_2309c4:
    // 0x2309c4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2309c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2309c8:
    // 0x2309c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2309c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2309cc:
    // 0x2309cc: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x2309ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_2309d0:
    // 0x2309d0: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x2309d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_2309d4:
    // 0x2309d4: 0xc08c248  jal         func_230920
label_2309d8:
    if (ctx->pc == 0x2309D8u) {
        ctx->pc = 0x2309DCu;
        goto label_2309dc;
    }
    ctx->pc = 0x2309D4u;
    SET_GPR_U32(ctx, 31, 0x2309DCu);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x2309D4u, 0x2309DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2309DCu;
label_2309dc:
    // 0x2309dc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2309dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2309e0:
    // 0x2309e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2309e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2309e4:
    // 0x2309e4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2309e8:
    if (ctx->pc == 0x2309E8u) {
        ctx->pc = 0x2309ECu;
        goto label_2309ec;
    }
    ctx->pc = 0x2309E4u;
    {
        const bool branch_taken_0x2309e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2309e4) {
            ctx->pc = 0x230A24u;
            goto label_230a24;
        }
    }
    ctx->pc = 0x2309ECu;
label_2309ec:
    // 0x2309ec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2309ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2309f0:
    // 0x2309f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2309f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2309f4:
    // 0x2309f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2309f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2309f8:
    // 0x2309f8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2309f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2309fc:
    // 0x2309fc: 0x40f809  jalr        $v0
label_230a00:
    if (ctx->pc == 0x230A00u) {
        ctx->pc = 0x230A04u;
        goto label_230a04;
    }
    ctx->pc = 0x2309FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230A04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2309FCu, 0x230A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230A04u;
label_230a04:
    // 0x230a04: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x230a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_230a08:
    // 0x230a08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x230a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_230a0c:
    // 0x230a0c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x230a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_230a10:
    // 0x230a10: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x230a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_230a14:
    // 0x230a14: 0x40f809  jalr        $v0
label_230a18:
    if (ctx->pc == 0x230A18u) {
        ctx->pc = 0x230A1Cu;
        goto label_230a1c;
    }
    ctx->pc = 0x230A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230A1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230A14u, 0x230A1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230A1Cu;
label_230a1c:
    // 0x230a1c: 0x10000016  b           . + 4 + (0x16 << 2)
label_230a20:
    if (ctx->pc == 0x230A20u) {
        ctx->pc = 0x230A24u;
        goto label_230a24;
    }
    ctx->pc = 0x230A1Cu;
    {
        const bool branch_taken_0x230a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230a1c) {
            ctx->pc = 0x230A78u;
            goto label_230a78;
        }
    }
    ctx->pc = 0x230A24u;
label_230a24:
    // 0x230a24: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x230a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_230a28:
    // 0x230a28: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x230a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_230a2c:
    // 0x230a2c: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x230a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_230a30:
    // 0x230a30: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x230a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_230a34:
    // 0x230a34: 0xc08c248  jal         func_230920
label_230a38:
    if (ctx->pc == 0x230A38u) {
        ctx->pc = 0x230A3Cu;
        goto label_230a3c;
    }
    ctx->pc = 0x230A34u;
    SET_GPR_U32(ctx, 31, 0x230A3Cu);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x230A34u, 0x230A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A3Cu;
label_230a3c:
    // 0x230a3c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x230a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_230a40:
    // 0x230a40: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_230a44:
    if (ctx->pc == 0x230A44u) {
        ctx->pc = 0x230A48u;
        goto label_230a48;
    }
    ctx->pc = 0x230A40u;
    {
        const bool branch_taken_0x230a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230a40) {
            ctx->pc = 0x230A78u;
            goto label_230a78;
        }
    }
    ctx->pc = 0x230A48u;
label_230a48:
    // 0x230a48: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x230a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_230a4c:
    // 0x230a4c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x230a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_230a50:
    // 0x230a50: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x230a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_230a54:
    // 0x230a54: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x230a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_230a58:
    // 0x230a58: 0x40f809  jalr        $v0
label_230a5c:
    if (ctx->pc == 0x230A5Cu) {
        ctx->pc = 0x230A60u;
        goto label_230a60;
    }
    ctx->pc = 0x230A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230A60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230A58u, 0x230A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230A60u;
label_230a60:
    // 0x230a60: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x230a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_230a64:
    // 0x230a64: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x230a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_230a68:
    // 0x230a68: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x230a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_230a6c:
    // 0x230a6c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x230a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_230a70:
    // 0x230a70: 0x40f809  jalr        $v0
label_230a74:
    if (ctx->pc == 0x230A74u) {
        ctx->pc = 0x230A78u;
        goto label_230a78;
    }
    ctx->pc = 0x230A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230A78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230A70u, 0x230A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230A78u;
label_230a78:
    // 0x230a78: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x230a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_230a7c:
    // 0x230a7c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x230a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_230a80:
    // 0x230a80: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x230a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_230a84:
    // 0x230a84: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x230a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_230a88:
    // 0x230a88: 0xc08c248  jal         func_230920
label_230a8c:
    if (ctx->pc == 0x230A8Cu) {
        ctx->pc = 0x230A90u;
        goto label_230a90;
    }
    ctx->pc = 0x230A88u;
    SET_GPR_U32(ctx, 31, 0x230A90u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x230A88u, 0x230A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A90u;
label_230a90:
    // 0x230a90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x230a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_230a94:
    // 0x230a94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x230a94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_230a98:
    // 0x230a98: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x230a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_230a9c:
    // 0x230a9c: 0x320f809  jalr        $t9
label_230aa0:
    if (ctx->pc == 0x230AA0u) {
        ctx->pc = 0x230AA4u;
        goto label_230aa4;
    }
    ctx->pc = 0x230A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230AA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230A9Cu, 0x230AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230AA4u;
label_230aa4:
    // 0x230aa4: 0x10000079  b           . + 4 + (0x79 << 2)
label_230aa8:
    if (ctx->pc == 0x230AA8u) {
        ctx->pc = 0x230AACu;
        goto label_230aac;
    }
    ctx->pc = 0x230AA4u;
    {
        const bool branch_taken_0x230aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230aa4) {
            ctx->pc = 0x230C8Cu;
            goto label_230c8c;
        }
    }
    ctx->pc = 0x230AACu;
label_230aac:
    // 0x230aac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x230aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_230ab0:
    // 0x230ab0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x230ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_230ab4:
    // 0x230ab4: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x230ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
label_230ab8:
    // 0x230ab8: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x230ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_230abc:
    // 0x230abc: 0xc08c1f0  jal         func_2307C0
label_230ac0:
    if (ctx->pc == 0x230AC0u) {
        ctx->pc = 0x230AC4u;
        goto label_230ac4;
    }
    ctx->pc = 0x230ABCu;
    SET_GPR_U32(ctx, 31, 0x230AC4u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x230ABCu, 0x230AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230AC4u;
label_230ac4:
    // 0x230ac4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x230ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_230ac8:
    // 0x230ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230acc:
    // 0x230acc: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_230ad0:
    if (ctx->pc == 0x230AD0u) {
        ctx->pc = 0x230AD4u;
        goto label_230ad4;
    }
    ctx->pc = 0x230ACCu;
    {
        const bool branch_taken_0x230acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x230acc) {
            ctx->pc = 0x230B0Cu;
            goto label_230b0c;
        }
    }
    ctx->pc = 0x230AD4u;
label_230ad4:
    // 0x230ad4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x230ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_230ad8:
    // 0x230ad8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x230ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_230adc:
    // 0x230adc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x230adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_230ae0:
    // 0x230ae0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x230ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_230ae4:
    // 0x230ae4: 0x40f809  jalr        $v0
label_230ae8:
    if (ctx->pc == 0x230AE8u) {
        ctx->pc = 0x230AECu;
        goto label_230aec;
    }
    ctx->pc = 0x230AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230AECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230AE4u, 0x230AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230AECu;
label_230aec:
    // 0x230aec: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x230aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_230af0:
    // 0x230af0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x230af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_230af4:
    // 0x230af4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x230af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_230af8:
    // 0x230af8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x230af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_230afc:
    // 0x230afc: 0x40f809  jalr        $v0
label_230b00:
    if (ctx->pc == 0x230B00u) {
        ctx->pc = 0x230B04u;
        goto label_230b04;
    }
    ctx->pc = 0x230AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230B04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230AFCu, 0x230B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230B04u;
label_230b04:
    // 0x230b04: 0x10000016  b           . + 4 + (0x16 << 2)
label_230b08:
    if (ctx->pc == 0x230B08u) {
        ctx->pc = 0x230B0Cu;
        goto label_230b0c;
    }
    ctx->pc = 0x230B04u;
    {
        const bool branch_taken_0x230b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230b04) {
            ctx->pc = 0x230B60u;
            goto label_230b60;
        }
    }
    ctx->pc = 0x230B0Cu;
label_230b0c:
    // 0x230b0c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x230b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_230b10:
    // 0x230b10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x230b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_230b14:
    // 0x230b14: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x230b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
label_230b18:
    // 0x230b18: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x230b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_230b1c:
    // 0x230b1c: 0xc08c1f0  jal         func_2307C0
label_230b20:
    if (ctx->pc == 0x230B20u) {
        ctx->pc = 0x230B24u;
        goto label_230b24;
    }
    ctx->pc = 0x230B1Cu;
    SET_GPR_U32(ctx, 31, 0x230B24u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x230B1Cu, 0x230B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B24u;
label_230b24:
    // 0x230b24: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x230b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_230b28:
    // 0x230b28: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_230b2c:
    if (ctx->pc == 0x230B2Cu) {
        ctx->pc = 0x230B30u;
        goto label_230b30;
    }
    ctx->pc = 0x230B28u;
    {
        const bool branch_taken_0x230b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230b28) {
            ctx->pc = 0x230B60u;
            goto label_230b60;
        }
    }
    ctx->pc = 0x230B30u;
label_230b30:
    // 0x230b30: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x230b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_230b34:
    // 0x230b34: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x230b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_230b38:
    // 0x230b38: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x230b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_230b3c:
    // 0x230b3c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x230b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_230b40:
    // 0x230b40: 0x40f809  jalr        $v0
label_230b44:
    if (ctx->pc == 0x230B44u) {
        ctx->pc = 0x230B48u;
        goto label_230b48;
    }
    ctx->pc = 0x230B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230B48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230B40u, 0x230B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230B48u;
label_230b48:
    // 0x230b48: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x230b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_230b4c:
    // 0x230b4c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x230b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_230b50:
    // 0x230b50: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x230b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_230b54:
    // 0x230b54: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x230b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_230b58:
    // 0x230b58: 0x40f809  jalr        $v0
label_230b5c:
    if (ctx->pc == 0x230B5Cu) {
        ctx->pc = 0x230B60u;
        goto label_230b60;
    }
    ctx->pc = 0x230B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x230B60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230B58u, 0x230B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230B60u;
label_230b60:
    // 0x230b60: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x230b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_230b64:
    // 0x230b64: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x230b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_230b68:
    // 0x230b68: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x230b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
label_230b6c:
    // 0x230b6c: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x230b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_230b70:
    // 0x230b70: 0xc08c1f0  jal         func_2307C0
label_230b74:
    if (ctx->pc == 0x230B74u) {
        ctx->pc = 0x230B78u;
        goto label_230b78;
    }
    ctx->pc = 0x230B70u;
    SET_GPR_U32(ctx, 31, 0x230B78u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x230B70u, 0x230B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B78u;
label_230b78:
    // 0x230b78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230b7c:
    // 0x230b7c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x230b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_230b80:
    // 0x230b80: 0x2484b970  addiu       $a0, $a0, -0x4690
    ctx->pc = 0x230b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949232));
label_230b84:
    // 0x230b84: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x230b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_230b88:
    // 0x230b88: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x230b88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_230b8c:
    // 0x230b8c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x230b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_230b90:
    // 0x230b90: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x230b90u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_230b94:
    // 0x230b94: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x230b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_230b98:
    // 0x230b98: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x230b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_230b9c:
    // 0x230b9c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x230b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_230ba0:
    // 0x230ba0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_230ba4:
    if (ctx->pc == 0x230BA4u) {
        ctx->pc = 0x230BA8u;
        goto label_230ba8;
    }
    ctx->pc = 0x230BA0u;
    {
        const bool branch_taken_0x230ba0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x230ba0) {
            ctx->pc = 0x230BBCu;
            goto label_230bbc;
        }
    }
    ctx->pc = 0x230BA8u;
label_230ba8:
    // 0x230ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230bac:
    // 0x230bac: 0x0  nop
    ctx->pc = 0x230bacu;
    // NOP
label_230bb0:
    // 0x230bb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x230bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_230bb4:
    // 0x230bb4: 0x10000008  b           . + 4 + (0x8 << 2)
label_230bb8:
    if (ctx->pc == 0x230BB8u) {
        ctx->pc = 0x230BBCu;
        goto label_230bbc;
    }
    ctx->pc = 0x230BB4u;
    {
        const bool branch_taken_0x230bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230bb4) {
            ctx->pc = 0x230BD8u;
            goto label_230bd8;
        }
    }
    ctx->pc = 0x230BBCu;
label_230bbc:
    // 0x230bbc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x230bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_230bc0:
    // 0x230bc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x230bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_230bc4:
    // 0x230bc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x230bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_230bc8:
    // 0x230bc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230bc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230bcc:
    // 0x230bcc: 0x0  nop
    ctx->pc = 0x230bccu;
    // NOP
label_230bd0:
    // 0x230bd0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x230bd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_230bd4:
    // 0x230bd4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x230bd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_230bd8:
    // 0x230bd8: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x230bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_230bdc:
    // 0x230bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230be0:
    // 0x230be0: 0x0  nop
    ctx->pc = 0x230be0u;
    // NOP
label_230be4:
    // 0x230be4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x230be4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_230be8:
    // 0x230be8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x230be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_230bec:
    // 0x230bec: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x230becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_230bf0:
    // 0x230bf0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x230bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_230bf4:
    // 0x230bf4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_230bf8:
    if (ctx->pc == 0x230BF8u) {
        ctx->pc = 0x230BFCu;
        goto label_230bfc;
    }
    ctx->pc = 0x230BF4u;
    {
        const bool branch_taken_0x230bf4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x230bf4) {
            ctx->pc = 0x230C10u;
            goto label_230c10;
        }
    }
    ctx->pc = 0x230BFCu;
label_230bfc:
    // 0x230bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230c00:
    // 0x230c00: 0x0  nop
    ctx->pc = 0x230c00u;
    // NOP
label_230c04:
    // 0x230c04: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x230c04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_230c08:
    // 0x230c08: 0x10000008  b           . + 4 + (0x8 << 2)
label_230c0c:
    if (ctx->pc == 0x230C0Cu) {
        ctx->pc = 0x230C10u;
        goto label_230c10;
    }
    ctx->pc = 0x230C08u;
    {
        const bool branch_taken_0x230c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230c08) {
            ctx->pc = 0x230C2Cu;
            goto label_230c2c;
        }
    }
    ctx->pc = 0x230C10u;
label_230c10:
    // 0x230c10: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x230c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_230c14:
    // 0x230c14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x230c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_230c18:
    // 0x230c18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x230c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_230c1c:
    // 0x230c1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x230c1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230c20:
    // 0x230c20: 0x0  nop
    ctx->pc = 0x230c20u;
    // NOP
label_230c24:
    // 0x230c24: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x230c24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_230c28:
    // 0x230c28: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x230c28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_230c2c:
    // 0x230c2c: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x230c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
label_230c30:
    // 0x230c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230c34:
    // 0x230c34: 0x0  nop
    ctx->pc = 0x230c34u;
    // NOP
label_230c38:
    // 0x230c38: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x230c38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_230c3c:
    // 0x230c3c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x230c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_230c40:
    // 0x230c40: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x230c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_230c44:
    // 0x230c44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x230c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_230c48:
    // 0x230c48: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x230c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_230c4c:
    // 0x230c4c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x230c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_230c50:
    // 0x230c50: 0xc11dab8  jal         func_476AE0
label_230c54:
    if (ctx->pc == 0x230C54u) {
        ctx->pc = 0x230C58u;
        goto label_230c58;
    }
    ctx->pc = 0x230C50u;
    SET_GPR_U32(ctx, 31, 0x230C58u);
    ctx->pc = 0x476AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476AE0u, 0x230C50u, 0x230C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C58u;
label_230c58:
    // 0x230c58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x230c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_230c5c:
    // 0x230c5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x230c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_230c60:
    // 0x230c60: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x230c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_230c64:
    // 0x230c64: 0x320f809  jalr        $t9
label_230c68:
    if (ctx->pc == 0x230C68u) {
        ctx->pc = 0x230C6Cu;
        goto label_230c6c;
    }
    ctx->pc = 0x230C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230C6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230C64u, 0x230C6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230C6Cu;
label_230c6c:
    // 0x230c6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x230c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230c70:
    // 0x230c70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x230c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_230c74:
    // 0x230c74: 0xc11db70  jal         func_476DC0
label_230c78:
    if (ctx->pc == 0x230C78u) {
        ctx->pc = 0x230C7Cu;
        goto label_230c7c;
    }
    ctx->pc = 0x230C74u;
    SET_GPR_U32(ctx, 31, 0x230C7Cu);
    ctx->pc = 0x476DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476DC0u, 0x230C74u, 0x230C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C7Cu;
label_230c7c:
    // 0x230c7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x230c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230c80:
    // 0x230c80: 0x10000002  b           . + 4 + (0x2 << 2)
label_230c84:
    if (ctx->pc == 0x230C84u) {
        ctx->pc = 0x230C88u;
        goto label_230c88;
    }
    ctx->pc = 0x230C80u;
    {
        const bool branch_taken_0x230c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230c80) {
            ctx->pc = 0x230C8Cu;
            goto label_230c8c;
        }
    }
    ctx->pc = 0x230C88u;
label_230c88:
    // 0x230c88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x230c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_230c8c:
    // 0x230c8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x230c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_230c90:
    // 0x230c90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x230c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_230c94:
    // 0x230c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x230c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_230c98:
    // 0x230c98: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x230c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_230c9c:
    // 0x230c9c: 0x3e00008  jr          $ra
label_230ca0:
    if (ctx->pc == 0x230CA0u) {
        ctx->pc = 0x230CA4u;
        goto label_230ca4;
    }
    ctx->pc = 0x230C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230CA4u;
label_230ca4:
    // 0x230ca4: 0x0  nop
    ctx->pc = 0x230ca4u;
    // NOP
label_230ca8:
    // 0x230ca8: 0x0  nop
    ctx->pc = 0x230ca8u;
    // NOP
label_230cac:
    // 0x230cac: 0x0  nop
    ctx->pc = 0x230cacu;
    // NOP
    ctx->pc = 0x230cb0u;
}
