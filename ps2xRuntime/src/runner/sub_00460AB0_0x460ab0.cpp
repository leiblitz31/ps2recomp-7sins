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

// Function: sub_00460AB0
// Address: 0x460ab0 - 0x460d10
void sub_00460AB0_0x460ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00460AB0_0x460ab0");
#endif

    switch (ctx->pc) {
        case 0x460ab0u: goto label_460ab0;
        case 0x460ab4u: goto label_460ab4;
        case 0x460ab8u: goto label_460ab8;
        case 0x460abcu: goto label_460abc;
        case 0x460ac0u: goto label_460ac0;
        case 0x460ac4u: goto label_460ac4;
        case 0x460ac8u: goto label_460ac8;
        case 0x460accu: goto label_460acc;
        case 0x460ad0u: goto label_460ad0;
        case 0x460ad4u: goto label_460ad4;
        case 0x460ad8u: goto label_460ad8;
        case 0x460adcu: goto label_460adc;
        case 0x460ae0u: goto label_460ae0;
        case 0x460ae4u: goto label_460ae4;
        case 0x460ae8u: goto label_460ae8;
        case 0x460aecu: goto label_460aec;
        case 0x460af0u: goto label_460af0;
        case 0x460af4u: goto label_460af4;
        case 0x460af8u: goto label_460af8;
        case 0x460afcu: goto label_460afc;
        case 0x460b00u: goto label_460b00;
        case 0x460b04u: goto label_460b04;
        case 0x460b08u: goto label_460b08;
        case 0x460b0cu: goto label_460b0c;
        case 0x460b10u: goto label_460b10;
        case 0x460b14u: goto label_460b14;
        case 0x460b18u: goto label_460b18;
        case 0x460b1cu: goto label_460b1c;
        case 0x460b20u: goto label_460b20;
        case 0x460b24u: goto label_460b24;
        case 0x460b28u: goto label_460b28;
        case 0x460b2cu: goto label_460b2c;
        case 0x460b30u: goto label_460b30;
        case 0x460b34u: goto label_460b34;
        case 0x460b38u: goto label_460b38;
        case 0x460b3cu: goto label_460b3c;
        case 0x460b40u: goto label_460b40;
        case 0x460b44u: goto label_460b44;
        case 0x460b48u: goto label_460b48;
        case 0x460b4cu: goto label_460b4c;
        case 0x460b50u: goto label_460b50;
        case 0x460b54u: goto label_460b54;
        case 0x460b58u: goto label_460b58;
        case 0x460b5cu: goto label_460b5c;
        case 0x460b60u: goto label_460b60;
        case 0x460b64u: goto label_460b64;
        case 0x460b68u: goto label_460b68;
        case 0x460b6cu: goto label_460b6c;
        case 0x460b70u: goto label_460b70;
        case 0x460b74u: goto label_460b74;
        case 0x460b78u: goto label_460b78;
        case 0x460b7cu: goto label_460b7c;
        case 0x460b80u: goto label_460b80;
        case 0x460b84u: goto label_460b84;
        case 0x460b88u: goto label_460b88;
        case 0x460b8cu: goto label_460b8c;
        case 0x460b90u: goto label_460b90;
        case 0x460b94u: goto label_460b94;
        case 0x460b98u: goto label_460b98;
        case 0x460b9cu: goto label_460b9c;
        case 0x460ba0u: goto label_460ba0;
        case 0x460ba4u: goto label_460ba4;
        case 0x460ba8u: goto label_460ba8;
        case 0x460bacu: goto label_460bac;
        case 0x460bb0u: goto label_460bb0;
        case 0x460bb4u: goto label_460bb4;
        case 0x460bb8u: goto label_460bb8;
        case 0x460bbcu: goto label_460bbc;
        case 0x460bc0u: goto label_460bc0;
        case 0x460bc4u: goto label_460bc4;
        case 0x460bc8u: goto label_460bc8;
        case 0x460bccu: goto label_460bcc;
        case 0x460bd0u: goto label_460bd0;
        case 0x460bd4u: goto label_460bd4;
        case 0x460bd8u: goto label_460bd8;
        case 0x460bdcu: goto label_460bdc;
        case 0x460be0u: goto label_460be0;
        case 0x460be4u: goto label_460be4;
        case 0x460be8u: goto label_460be8;
        case 0x460becu: goto label_460bec;
        case 0x460bf0u: goto label_460bf0;
        case 0x460bf4u: goto label_460bf4;
        case 0x460bf8u: goto label_460bf8;
        case 0x460bfcu: goto label_460bfc;
        case 0x460c00u: goto label_460c00;
        case 0x460c04u: goto label_460c04;
        case 0x460c08u: goto label_460c08;
        case 0x460c0cu: goto label_460c0c;
        case 0x460c10u: goto label_460c10;
        case 0x460c14u: goto label_460c14;
        case 0x460c18u: goto label_460c18;
        case 0x460c1cu: goto label_460c1c;
        case 0x460c20u: goto label_460c20;
        case 0x460c24u: goto label_460c24;
        case 0x460c28u: goto label_460c28;
        case 0x460c2cu: goto label_460c2c;
        case 0x460c30u: goto label_460c30;
        case 0x460c34u: goto label_460c34;
        case 0x460c38u: goto label_460c38;
        case 0x460c3cu: goto label_460c3c;
        case 0x460c40u: goto label_460c40;
        case 0x460c44u: goto label_460c44;
        case 0x460c48u: goto label_460c48;
        case 0x460c4cu: goto label_460c4c;
        case 0x460c50u: goto label_460c50;
        case 0x460c54u: goto label_460c54;
        case 0x460c58u: goto label_460c58;
        case 0x460c5cu: goto label_460c5c;
        case 0x460c60u: goto label_460c60;
        case 0x460c64u: goto label_460c64;
        case 0x460c68u: goto label_460c68;
        case 0x460c6cu: goto label_460c6c;
        case 0x460c70u: goto label_460c70;
        case 0x460c74u: goto label_460c74;
        case 0x460c78u: goto label_460c78;
        case 0x460c7cu: goto label_460c7c;
        case 0x460c80u: goto label_460c80;
        case 0x460c84u: goto label_460c84;
        case 0x460c88u: goto label_460c88;
        case 0x460c8cu: goto label_460c8c;
        case 0x460c90u: goto label_460c90;
        case 0x460c94u: goto label_460c94;
        case 0x460c98u: goto label_460c98;
        case 0x460c9cu: goto label_460c9c;
        case 0x460ca0u: goto label_460ca0;
        case 0x460ca4u: goto label_460ca4;
        case 0x460ca8u: goto label_460ca8;
        case 0x460cacu: goto label_460cac;
        case 0x460cb0u: goto label_460cb0;
        case 0x460cb4u: goto label_460cb4;
        case 0x460cb8u: goto label_460cb8;
        case 0x460cbcu: goto label_460cbc;
        case 0x460cc0u: goto label_460cc0;
        case 0x460cc4u: goto label_460cc4;
        case 0x460cc8u: goto label_460cc8;
        case 0x460cccu: goto label_460ccc;
        case 0x460cd0u: goto label_460cd0;
        case 0x460cd4u: goto label_460cd4;
        case 0x460cd8u: goto label_460cd8;
        case 0x460cdcu: goto label_460cdc;
        case 0x460ce0u: goto label_460ce0;
        case 0x460ce4u: goto label_460ce4;
        case 0x460ce8u: goto label_460ce8;
        case 0x460cecu: goto label_460cec;
        case 0x460cf0u: goto label_460cf0;
        case 0x460cf4u: goto label_460cf4;
        case 0x460cf8u: goto label_460cf8;
        case 0x460cfcu: goto label_460cfc;
        case 0x460d00u: goto label_460d00;
        case 0x460d04u: goto label_460d04;
        case 0x460d08u: goto label_460d08;
        case 0x460d0cu: goto label_460d0c;
        default: break;
    }

    ctx->pc = 0x460ab0u;

label_460ab0:
    // 0x460ab0: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x460ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
label_460ab4:
    // 0x460ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x460ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_460ab8:
    // 0x460ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x460ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_460abc:
    // 0x460abc: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x460abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
label_460ac0:
    // 0x460ac0: 0xafa50290  sw          $a1, 0x290($sp)
    ctx->pc = 0x460ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 5));
label_460ac4:
    // 0x460ac4: 0xafa602a0  sw          $a2, 0x2A0($sp)
    ctx->pc = 0x460ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 6));
label_460ac8:
    // 0x460ac8: 0x8f84bfb0  lw          $a0, -0x4050($gp)
    ctx->pc = 0x460ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_460acc:
    // 0x460acc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x460accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460ad0:
    // 0x460ad0: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
label_460ad4:
    if (ctx->pc == 0x460AD4u) {
        ctx->pc = 0x460AD8u;
        goto label_460ad8;
    }
    ctx->pc = 0x460AD0u;
    {
        const bool branch_taken_0x460ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x460ad0) {
            ctx->pc = 0x460B3Cu;
            goto label_460b3c;
        }
    }
    ctx->pc = 0x460AD8u;
label_460ad8:
    // 0x460ad8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_460adc:
    if (ctx->pc == 0x460ADCu) {
        ctx->pc = 0x460AE0u;
        goto label_460ae0;
    }
    ctx->pc = 0x460AD8u;
    {
        const bool branch_taken_0x460ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x460ad8) {
            ctx->pc = 0x460AE8u;
            goto label_460ae8;
        }
    }
    ctx->pc = 0x460AE0u;
label_460ae0:
    // 0x460ae0: 0x1000005b  b           . + 4 + (0x5B << 2)
label_460ae4:
    if (ctx->pc == 0x460AE4u) {
        ctx->pc = 0x460AE8u;
        goto label_460ae8;
    }
    ctx->pc = 0x460AE0u;
    {
        const bool branch_taken_0x460ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460ae0) {
            ctx->pc = 0x460C50u;
            goto label_460c50;
        }
    }
    ctx->pc = 0x460AE8u;
label_460ae8:
    // 0x460ae8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x460ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_460aec:
    // 0x460aec: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x460aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_460af0:
    // 0x460af0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x460af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_460af4:
    // 0x460af4: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x460af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_460af8:
    // 0x460af8: 0xc0c3e1a  jal         func_30F868
label_460afc:
    if (ctx->pc == 0x460AFCu) {
        ctx->pc = 0x460B00u;
        goto label_460b00;
    }
    ctx->pc = 0x460AF8u;
    SET_GPR_U32(ctx, 31, 0x460B00u);
    ctx->pc = 0x30F868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F868u, 0x460AF8u, 0x460B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460B00u;
label_460b00:
    // 0x460b00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x460b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_460b04:
    // 0x460b04: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
label_460b08:
    if (ctx->pc == 0x460B08u) {
        ctx->pc = 0x460B0Cu;
        goto label_460b0c;
    }
    ctx->pc = 0x460B04u;
    {
        const bool branch_taken_0x460b04 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x460b04) {
            ctx->pc = 0x460B28u;
            goto label_460b28;
        }
    }
    ctx->pc = 0x460B0Cu;
label_460b0c:
    // 0x460b0c: 0xaf90bfb4  sw          $s0, -0x404C($gp)
    ctx->pc = 0x460b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 16));
label_460b10:
    // 0x460b10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x460b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460b14:
    // 0x460b14: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x460b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_460b18:
    // 0x460b18: 0xc1181ac  jal         func_4606B0
label_460b1c:
    if (ctx->pc == 0x460B1Cu) {
        ctx->pc = 0x460B20u;
        goto label_460b20;
    }
    ctx->pc = 0x460B18u;
    SET_GPR_U32(ctx, 31, 0x460B20u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x460B18u, 0x460B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460B20u;
label_460b20:
    // 0x460b20: 0x10000074  b           . + 4 + (0x74 << 2)
label_460b24:
    if (ctx->pc == 0x460B24u) {
        ctx->pc = 0x460B28u;
        goto label_460b28;
    }
    ctx->pc = 0x460B20u;
    {
        const bool branch_taken_0x460b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460b20) {
            ctx->pc = 0x460CF4u;
            goto label_460cf4;
        }
    }
    ctx->pc = 0x460B28u;
label_460b28:
    // 0x460b28: 0x8f83bfb0  lw          $v1, -0x4050($gp)
    ctx->pc = 0x460b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_460b2c:
    // 0x460b2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x460b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_460b30:
    // 0x460b30: 0xaf83bfb0  sw          $v1, -0x4050($gp)
    ctx->pc = 0x460b30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 3));
label_460b34:
    // 0x460b34: 0x1000006f  b           . + 4 + (0x6F << 2)
label_460b38:
    if (ctx->pc == 0x460B38u) {
        ctx->pc = 0x460B3Cu;
        goto label_460b3c;
    }
    ctx->pc = 0x460B34u;
    {
        const bool branch_taken_0x460b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460b34) {
            ctx->pc = 0x460CF4u;
            goto label_460cf4;
        }
    }
    ctx->pc = 0x460B3Cu;
label_460b3c:
    // 0x460b3c: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x460b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_460b40:
    // 0x460b40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x460b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460b44:
    // 0x460b44: 0x1483006b  bne         $a0, $v1, . + 4 + (0x6B << 2)
label_460b48:
    if (ctx->pc == 0x460B48u) {
        ctx->pc = 0x460B4Cu;
        goto label_460b4c;
    }
    ctx->pc = 0x460B44u;
    {
        const bool branch_taken_0x460b44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x460b44) {
            ctx->pc = 0x460CF4u;
            goto label_460cf4;
        }
    }
    ctx->pc = 0x460B4Cu;
label_460b4c:
    // 0x460b4c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x460b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_460b50:
    // 0x460b50: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x460b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
label_460b54:
    // 0x460b54: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x460b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_460b58:
    // 0x460b58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x460b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_460b5c:
    // 0x460b5c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_460b60:
    if (ctx->pc == 0x460B60u) {
        ctx->pc = 0x460B64u;
        goto label_460b64;
    }
    ctx->pc = 0x460B5Cu;
    {
        const bool branch_taken_0x460b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x460b5c) {
            ctx->pc = 0x460C0Cu;
            goto label_460c0c;
        }
    }
    ctx->pc = 0x460B64u;
label_460b64:
    // 0x460b64: 0x8f82b1f4  lw          $v0, -0x4E0C($gp)
    ctx->pc = 0x460b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947316)));
label_460b68:
    // 0x460b68: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_460b6c:
    if (ctx->pc == 0x460B6Cu) {
        ctx->pc = 0x460B70u;
        goto label_460b70;
    }
    ctx->pc = 0x460B68u;
    {
        const bool branch_taken_0x460b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460b68) {
            ctx->pc = 0x460C0Cu;
            goto label_460c0c;
        }
    }
    ctx->pc = 0x460B70u;
label_460b70:
    // 0x460b70: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x460b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_460b74:
    // 0x460b74: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460b78:
    // 0x460b78: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x460b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_460b7c:
    // 0x460b7c: 0xc115ee8  jal         func_457BA0
label_460b80:
    if (ctx->pc == 0x460B80u) {
        ctx->pc = 0x460B84u;
        goto label_460b84;
    }
    ctx->pc = 0x460B7Cu;
    SET_GPR_U32(ctx, 31, 0x460B84u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x460B7Cu, 0x460B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460B84u;
label_460b84:
    // 0x460b84: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_460b88:
    if (ctx->pc == 0x460B88u) {
        ctx->pc = 0x460B8Cu;
        goto label_460b8c;
    }
    ctx->pc = 0x460B84u;
    {
        const bool branch_taken_0x460b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460b84) {
            ctx->pc = 0x460C0Cu;
            goto label_460c0c;
        }
    }
    ctx->pc = 0x460B8Cu;
label_460b8c:
    // 0x460b8c: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x460b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_460b90:
    // 0x460b90: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_460b94:
    if (ctx->pc == 0x460B94u) {
        ctx->pc = 0x460B98u;
        goto label_460b98;
    }
    ctx->pc = 0x460B90u;
    {
        const bool branch_taken_0x460b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460b90) {
            ctx->pc = 0x460C0Cu;
            goto label_460c0c;
        }
    }
    ctx->pc = 0x460B98u;
label_460b98:
    // 0x460b98: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x460b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_460b9c:
    // 0x460b9c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460ba0:
    // 0x460ba0: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x460ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_460ba4:
    // 0x460ba4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x460ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_460ba8:
    // 0x460ba8: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x460ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_460bac:
    // 0x460bac: 0x240805ba  addiu       $t0, $zero, 0x5BA
    ctx->pc = 0x460bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1466));
label_460bb0:
    // 0x460bb0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x460bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_460bb4:
    // 0x460bb4: 0x2529eff0  addiu       $t1, $t1, -0x1010
    ctx->pc = 0x460bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963184));
label_460bb8:
    // 0x460bb8: 0xc113940  jal         func_44E500
label_460bbc:
    if (ctx->pc == 0x460BBCu) {
        ctx->pc = 0x460BC0u;
        goto label_460bc0;
    }
    ctx->pc = 0x460BB8u;
    SET_GPR_U32(ctx, 31, 0x460BC0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x460BB8u, 0x460BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460BC0u;
label_460bc0:
    // 0x460bc0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x460bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_460bc4:
    // 0x460bc4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x460bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_460bc8:
    // 0x460bc8: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x460bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_460bcc:
    // 0x460bcc: 0xc115c24  jal         func_457090
label_460bd0:
    if (ctx->pc == 0x460BD0u) {
        ctx->pc = 0x460BD4u;
        goto label_460bd4;
    }
    ctx->pc = 0x460BCCu;
    SET_GPR_U32(ctx, 31, 0x460BD4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x460BCCu, 0x460BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460BD4u;
label_460bd4:
    // 0x460bd4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x460bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_460bd8:
    // 0x460bd8: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x460bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_460bdc:
    // 0x460bdc: 0x40f809  jalr        $v0
label_460be0:
    if (ctx->pc == 0x460BE0u) {
        ctx->pc = 0x460BE4u;
        goto label_460be4;
    }
    ctx->pc = 0x460BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x460BE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460BDCu, 0x460BE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x460BE4u;
label_460be4:
    // 0x460be4: 0xaf82b1f4  sw          $v0, -0x4E0C($gp)
    ctx->pc = 0x460be4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947316), GPR_U32(ctx, 2));
label_460be8:
    // 0x460be8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x460be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_460bec:
    // 0x460bec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_460bf0:
    if (ctx->pc == 0x460BF0u) {
        ctx->pc = 0x460BF4u;
        goto label_460bf4;
    }
    ctx->pc = 0x460BECu;
    {
        const bool branch_taken_0x460bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460bec) {
            ctx->pc = 0x460BFCu;
            goto label_460bfc;
        }
    }
    ctx->pc = 0x460BF4u;
label_460bf4:
    // 0x460bf4: 0xd  break       0
    ctx->pc = 0x460bf4u;
    runtime->handleBreak(rdram, ctx);
label_460bf8:
    // 0x460bf8: 0x0  nop
    ctx->pc = 0x460bf8u;
    // NOP
label_460bfc:
    // 0x460bfc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x460bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_460c00:
    // 0x460c00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x460c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_460c04:
    // 0x460c04: 0xc11392c  jal         func_44E4B0
label_460c08:
    if (ctx->pc == 0x460C08u) {
        ctx->pc = 0x460C0Cu;
        goto label_460c0c;
    }
    ctx->pc = 0x460C04u;
    SET_GPR_U32(ctx, 31, 0x460C0Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x460C04u, 0x460C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460C0Cu;
label_460c0c:
    // 0x460c0c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x460c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_460c10:
    // 0x460c10: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_460c14:
    if (ctx->pc == 0x460C14u) {
        ctx->pc = 0x460C18u;
        goto label_460c18;
    }
    ctx->pc = 0x460C10u;
    {
        const bool branch_taken_0x460c10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x460c10) {
            ctx->pc = 0x460C38u;
            goto label_460c38;
        }
    }
    ctx->pc = 0x460C18u;
label_460c18:
    // 0x460c18: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x460c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_460c1c:
    // 0x460c1c: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x460c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_460c20:
    // 0x460c20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x460c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460c24:
    // 0x460c24: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x460c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_460c28:
    // 0x460c28: 0xc1181ac  jal         func_4606B0
label_460c2c:
    if (ctx->pc == 0x460C2Cu) {
        ctx->pc = 0x460C30u;
        goto label_460c30;
    }
    ctx->pc = 0x460C28u;
    SET_GPR_U32(ctx, 31, 0x460C30u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x460C28u, 0x460C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460C30u;
label_460c30:
    // 0x460c30: 0x10000030  b           . + 4 + (0x30 << 2)
label_460c34:
    if (ctx->pc == 0x460C34u) {
        ctx->pc = 0x460C38u;
        goto label_460c38;
    }
    ctx->pc = 0x460C30u;
    {
        const bool branch_taken_0x460c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460c30) {
            ctx->pc = 0x460CF4u;
            goto label_460cf4;
        }
    }
    ctx->pc = 0x460C38u;
label_460c38:
    // 0x460c38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x460c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_460c3c:
    // 0x460c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x460c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_460c40:
    // 0x460c40: 0xc1181ac  jal         func_4606B0
label_460c44:
    if (ctx->pc == 0x460C44u) {
        ctx->pc = 0x460C48u;
        goto label_460c48;
    }
    ctx->pc = 0x460C40u;
    SET_GPR_U32(ctx, 31, 0x460C48u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x460C40u, 0x460C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460C48u;
label_460c48:
    // 0x460c48: 0x1000002a  b           . + 4 + (0x2A << 2)
label_460c4c:
    if (ctx->pc == 0x460C4Cu) {
        ctx->pc = 0x460C50u;
        goto label_460c50;
    }
    ctx->pc = 0x460C48u;
    {
        const bool branch_taken_0x460c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460c48) {
            ctx->pc = 0x460CF4u;
            goto label_460cf4;
        }
    }
    ctx->pc = 0x460C50u;
label_460c50:
    // 0x460c50: 0x8f83b1f8  lw          $v1, -0x4E08($gp)
    ctx->pc = 0x460c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947320)));
label_460c54:
    // 0x460c54: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_460c58:
    if (ctx->pc == 0x460C58u) {
        ctx->pc = 0x460C5Cu;
        goto label_460c5c;
    }
    ctx->pc = 0x460C54u;
    {
        const bool branch_taken_0x460c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x460c54) {
            ctx->pc = 0x460CF4u;
            goto label_460cf4;
        }
    }
    ctx->pc = 0x460C5Cu;
label_460c5c:
    // 0x460c5c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x460c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_460c60:
    // 0x460c60: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460c64:
    // 0x460c64: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x460c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_460c68:
    // 0x460c68: 0xc115ee8  jal         func_457BA0
label_460c6c:
    if (ctx->pc == 0x460C6Cu) {
        ctx->pc = 0x460C70u;
        goto label_460c70;
    }
    ctx->pc = 0x460C68u;
    SET_GPR_U32(ctx, 31, 0x460C70u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x460C68u, 0x460C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460C70u;
label_460c70:
    // 0x460c70: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_460c74:
    if (ctx->pc == 0x460C74u) {
        ctx->pc = 0x460C78u;
        goto label_460c78;
    }
    ctx->pc = 0x460C70u;
    {
        const bool branch_taken_0x460c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460c70) {
            ctx->pc = 0x460CF4u;
            goto label_460cf4;
        }
    }
    ctx->pc = 0x460C78u;
label_460c78:
    // 0x460c78: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x460c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_460c7c:
    // 0x460c7c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_460c80:
    if (ctx->pc == 0x460C80u) {
        ctx->pc = 0x460C84u;
        goto label_460c84;
    }
    ctx->pc = 0x460C7Cu;
    {
        const bool branch_taken_0x460c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x460c7c) {
            ctx->pc = 0x460CF4u;
            goto label_460cf4;
        }
    }
    ctx->pc = 0x460C84u;
label_460c84:
    // 0x460c84: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x460c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_460c88:
    // 0x460c88: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460c8c:
    // 0x460c8c: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x460c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_460c90:
    // 0x460c90: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x460c90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_460c94:
    // 0x460c94: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x460c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_460c98:
    // 0x460c98: 0x240805c8  addiu       $t0, $zero, 0x5C8
    ctx->pc = 0x460c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1480));
label_460c9c:
    // 0x460c9c: 0x2789b1cc  addiu       $t1, $gp, -0x4E34
    ctx->pc = 0x460c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947276));
label_460ca0:
    // 0x460ca0: 0xc113940  jal         func_44E500
label_460ca4:
    if (ctx->pc == 0x460CA4u) {
        ctx->pc = 0x460CA8u;
        goto label_460ca8;
    }
    ctx->pc = 0x460CA0u;
    SET_GPR_U32(ctx, 31, 0x460CA8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x460CA0u, 0x460CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460CA8u;
label_460ca8:
    // 0x460ca8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x460ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_460cac:
    // 0x460cac: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x460cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_460cb0:
    // 0x460cb0: 0x24a5efd0  addiu       $a1, $a1, -0x1030
    ctx->pc = 0x460cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
label_460cb4:
    // 0x460cb4: 0xc115c24  jal         func_457090
label_460cb8:
    if (ctx->pc == 0x460CB8u) {
        ctx->pc = 0x460CBCu;
        goto label_460cbc;
    }
    ctx->pc = 0x460CB4u;
    SET_GPR_U32(ctx, 31, 0x460CBCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x460CB4u, 0x460CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460CBCu;
label_460cbc:
    // 0x460cbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x460cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_460cc0:
    // 0x460cc0: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x460cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_460cc4:
    // 0x460cc4: 0x40f809  jalr        $v0
label_460cc8:
    if (ctx->pc == 0x460CC8u) {
        ctx->pc = 0x460CCCu;
        goto label_460ccc;
    }
    ctx->pc = 0x460CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x460CCCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460CC4u, 0x460CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x460CCCu;
label_460ccc:
    // 0x460ccc: 0xaf82b1f8  sw          $v0, -0x4E08($gp)
    ctx->pc = 0x460cccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947320), GPR_U32(ctx, 2));
label_460cd0:
    // 0x460cd0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x460cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_460cd4:
    // 0x460cd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_460cd8:
    if (ctx->pc == 0x460CD8u) {
        ctx->pc = 0x460CDCu;
        goto label_460cdc;
    }
    ctx->pc = 0x460CD4u;
    {
        const bool branch_taken_0x460cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460cd4) {
            ctx->pc = 0x460CE4u;
            goto label_460ce4;
        }
    }
    ctx->pc = 0x460CDCu;
label_460cdc:
    // 0x460cdc: 0xd  break       0
    ctx->pc = 0x460cdcu;
    runtime->handleBreak(rdram, ctx);
label_460ce0:
    // 0x460ce0: 0x0  nop
    ctx->pc = 0x460ce0u;
    // NOP
label_460ce4:
    // 0x460ce4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x460ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_460ce8:
    // 0x460ce8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x460ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_460cec:
    // 0x460cec: 0xc11392c  jal         func_44E4B0
label_460cf0:
    if (ctx->pc == 0x460CF0u) {
        ctx->pc = 0x460CF4u;
        goto label_460cf4;
    }
    ctx->pc = 0x460CECu;
    SET_GPR_U32(ctx, 31, 0x460CF4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x460CECu, 0x460CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460CF4u;
label_460cf4:
    // 0x460cf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x460cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_460cf8:
    // 0x460cf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x460cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_460cfc:
    // 0x460cfc: 0x27bd02b0  addiu       $sp, $sp, 0x2B0
    ctx->pc = 0x460cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_460d00:
    // 0x460d00: 0x3e00008  jr          $ra
label_460d04:
    if (ctx->pc == 0x460D04u) {
        ctx->pc = 0x460D08u;
        goto label_460d08;
    }
    ctx->pc = 0x460D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x460D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x460D08u;
label_460d08:
    // 0x460d08: 0x0  nop
    ctx->pc = 0x460d08u;
    // NOP
label_460d0c:
    // 0x460d0c: 0x0  nop
    ctx->pc = 0x460d0cu;
    // NOP
    ctx->pc = 0x460d10u;
}
