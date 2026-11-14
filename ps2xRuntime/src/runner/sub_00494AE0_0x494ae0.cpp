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

// Function: sub_00494AE0
// Address: 0x494ae0 - 0x494d80
void sub_00494AE0_0x494ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494AE0_0x494ae0");
#endif

    switch (ctx->pc) {
        case 0x494ae0u: goto label_494ae0;
        case 0x494ae4u: goto label_494ae4;
        case 0x494ae8u: goto label_494ae8;
        case 0x494aecu: goto label_494aec;
        case 0x494af0u: goto label_494af0;
        case 0x494af4u: goto label_494af4;
        case 0x494af8u: goto label_494af8;
        case 0x494afcu: goto label_494afc;
        case 0x494b00u: goto label_494b00;
        case 0x494b04u: goto label_494b04;
        case 0x494b08u: goto label_494b08;
        case 0x494b0cu: goto label_494b0c;
        case 0x494b10u: goto label_494b10;
        case 0x494b14u: goto label_494b14;
        case 0x494b18u: goto label_494b18;
        case 0x494b1cu: goto label_494b1c;
        case 0x494b20u: goto label_494b20;
        case 0x494b24u: goto label_494b24;
        case 0x494b28u: goto label_494b28;
        case 0x494b2cu: goto label_494b2c;
        case 0x494b30u: goto label_494b30;
        case 0x494b34u: goto label_494b34;
        case 0x494b38u: goto label_494b38;
        case 0x494b3cu: goto label_494b3c;
        case 0x494b40u: goto label_494b40;
        case 0x494b44u: goto label_494b44;
        case 0x494b48u: goto label_494b48;
        case 0x494b4cu: goto label_494b4c;
        case 0x494b50u: goto label_494b50;
        case 0x494b54u: goto label_494b54;
        case 0x494b58u: goto label_494b58;
        case 0x494b5cu: goto label_494b5c;
        case 0x494b60u: goto label_494b60;
        case 0x494b64u: goto label_494b64;
        case 0x494b68u: goto label_494b68;
        case 0x494b6cu: goto label_494b6c;
        case 0x494b70u: goto label_494b70;
        case 0x494b74u: goto label_494b74;
        case 0x494b78u: goto label_494b78;
        case 0x494b7cu: goto label_494b7c;
        case 0x494b80u: goto label_494b80;
        case 0x494b84u: goto label_494b84;
        case 0x494b88u: goto label_494b88;
        case 0x494b8cu: goto label_494b8c;
        case 0x494b90u: goto label_494b90;
        case 0x494b94u: goto label_494b94;
        case 0x494b98u: goto label_494b98;
        case 0x494b9cu: goto label_494b9c;
        case 0x494ba0u: goto label_494ba0;
        case 0x494ba4u: goto label_494ba4;
        case 0x494ba8u: goto label_494ba8;
        case 0x494bacu: goto label_494bac;
        case 0x494bb0u: goto label_494bb0;
        case 0x494bb4u: goto label_494bb4;
        case 0x494bb8u: goto label_494bb8;
        case 0x494bbcu: goto label_494bbc;
        case 0x494bc0u: goto label_494bc0;
        case 0x494bc4u: goto label_494bc4;
        case 0x494bc8u: goto label_494bc8;
        case 0x494bccu: goto label_494bcc;
        case 0x494bd0u: goto label_494bd0;
        case 0x494bd4u: goto label_494bd4;
        case 0x494bd8u: goto label_494bd8;
        case 0x494bdcu: goto label_494bdc;
        case 0x494be0u: goto label_494be0;
        case 0x494be4u: goto label_494be4;
        case 0x494be8u: goto label_494be8;
        case 0x494becu: goto label_494bec;
        case 0x494bf0u: goto label_494bf0;
        case 0x494bf4u: goto label_494bf4;
        case 0x494bf8u: goto label_494bf8;
        case 0x494bfcu: goto label_494bfc;
        case 0x494c00u: goto label_494c00;
        case 0x494c04u: goto label_494c04;
        case 0x494c08u: goto label_494c08;
        case 0x494c0cu: goto label_494c0c;
        case 0x494c10u: goto label_494c10;
        case 0x494c14u: goto label_494c14;
        case 0x494c18u: goto label_494c18;
        case 0x494c1cu: goto label_494c1c;
        case 0x494c20u: goto label_494c20;
        case 0x494c24u: goto label_494c24;
        case 0x494c28u: goto label_494c28;
        case 0x494c2cu: goto label_494c2c;
        case 0x494c30u: goto label_494c30;
        case 0x494c34u: goto label_494c34;
        case 0x494c38u: goto label_494c38;
        case 0x494c3cu: goto label_494c3c;
        case 0x494c40u: goto label_494c40;
        case 0x494c44u: goto label_494c44;
        case 0x494c48u: goto label_494c48;
        case 0x494c4cu: goto label_494c4c;
        case 0x494c50u: goto label_494c50;
        case 0x494c54u: goto label_494c54;
        case 0x494c58u: goto label_494c58;
        case 0x494c5cu: goto label_494c5c;
        case 0x494c60u: goto label_494c60;
        case 0x494c64u: goto label_494c64;
        case 0x494c68u: goto label_494c68;
        case 0x494c6cu: goto label_494c6c;
        case 0x494c70u: goto label_494c70;
        case 0x494c74u: goto label_494c74;
        case 0x494c78u: goto label_494c78;
        case 0x494c7cu: goto label_494c7c;
        case 0x494c80u: goto label_494c80;
        case 0x494c84u: goto label_494c84;
        case 0x494c88u: goto label_494c88;
        case 0x494c8cu: goto label_494c8c;
        case 0x494c90u: goto label_494c90;
        case 0x494c94u: goto label_494c94;
        case 0x494c98u: goto label_494c98;
        case 0x494c9cu: goto label_494c9c;
        case 0x494ca0u: goto label_494ca0;
        case 0x494ca4u: goto label_494ca4;
        case 0x494ca8u: goto label_494ca8;
        case 0x494cacu: goto label_494cac;
        case 0x494cb0u: goto label_494cb0;
        case 0x494cb4u: goto label_494cb4;
        case 0x494cb8u: goto label_494cb8;
        case 0x494cbcu: goto label_494cbc;
        case 0x494cc0u: goto label_494cc0;
        case 0x494cc4u: goto label_494cc4;
        case 0x494cc8u: goto label_494cc8;
        case 0x494cccu: goto label_494ccc;
        case 0x494cd0u: goto label_494cd0;
        case 0x494cd4u: goto label_494cd4;
        case 0x494cd8u: goto label_494cd8;
        case 0x494cdcu: goto label_494cdc;
        case 0x494ce0u: goto label_494ce0;
        case 0x494ce4u: goto label_494ce4;
        case 0x494ce8u: goto label_494ce8;
        case 0x494cecu: goto label_494cec;
        case 0x494cf0u: goto label_494cf0;
        case 0x494cf4u: goto label_494cf4;
        case 0x494cf8u: goto label_494cf8;
        case 0x494cfcu: goto label_494cfc;
        case 0x494d00u: goto label_494d00;
        case 0x494d04u: goto label_494d04;
        case 0x494d08u: goto label_494d08;
        case 0x494d0cu: goto label_494d0c;
        case 0x494d10u: goto label_494d10;
        case 0x494d14u: goto label_494d14;
        case 0x494d18u: goto label_494d18;
        case 0x494d1cu: goto label_494d1c;
        case 0x494d20u: goto label_494d20;
        case 0x494d24u: goto label_494d24;
        case 0x494d28u: goto label_494d28;
        case 0x494d2cu: goto label_494d2c;
        case 0x494d30u: goto label_494d30;
        case 0x494d34u: goto label_494d34;
        case 0x494d38u: goto label_494d38;
        case 0x494d3cu: goto label_494d3c;
        case 0x494d40u: goto label_494d40;
        case 0x494d44u: goto label_494d44;
        case 0x494d48u: goto label_494d48;
        case 0x494d4cu: goto label_494d4c;
        case 0x494d50u: goto label_494d50;
        case 0x494d54u: goto label_494d54;
        case 0x494d58u: goto label_494d58;
        case 0x494d5cu: goto label_494d5c;
        case 0x494d60u: goto label_494d60;
        case 0x494d64u: goto label_494d64;
        case 0x494d68u: goto label_494d68;
        case 0x494d6cu: goto label_494d6c;
        case 0x494d70u: goto label_494d70;
        case 0x494d74u: goto label_494d74;
        case 0x494d78u: goto label_494d78;
        case 0x494d7cu: goto label_494d7c;
        default: break;
    }

    ctx->pc = 0x494ae0u;

label_494ae0:
    // 0x494ae0: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x494ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
label_494ae4:
    // 0x494ae4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x494ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_494ae8:
    // 0x494ae8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x494ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_494aec:
    // 0x494aec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x494aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_494af0:
    // 0x494af0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x494af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_494af4:
    // 0x494af4: 0xafa402a0  sw          $a0, 0x2A0($sp)
    ctx->pc = 0x494af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 4));
label_494af8:
    // 0x494af8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x494af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_494afc:
    // 0x494afc: 0xaf82c17c  sw          $v0, -0x3E84($gp)
    ctx->pc = 0x494afcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951292), GPR_U32(ctx, 2));
label_494b00:
    // 0x494b00: 0xc125228  jal         func_4948A0
label_494b04:
    if (ctx->pc == 0x494B04u) {
        ctx->pc = 0x494B08u;
        goto label_494b08;
    }
    ctx->pc = 0x494B00u;
    SET_GPR_U32(ctx, 31, 0x494B08u);
    ctx->pc = 0x4948A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4948A0u, 0x494B00u, 0x494B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494B08u;
label_494b08:
    // 0x494b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x494b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_494b0c:
    // 0x494b0c: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
label_494b10:
    if (ctx->pc == 0x494B10u) {
        ctx->pc = 0x494B14u;
        goto label_494b14;
    }
    ctx->pc = 0x494B0Cu;
    {
        const bool branch_taken_0x494b0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x494b0c) {
            ctx->pc = 0x494BBCu;
            goto label_494bbc;
        }
    }
    ctx->pc = 0x494B14u;
label_494b14:
    // 0x494b14: 0x8f82b740  lw          $v0, -0x48C0($gp)
    ctx->pc = 0x494b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948672)));
label_494b18:
    // 0x494b18: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_494b1c:
    if (ctx->pc == 0x494B1Cu) {
        ctx->pc = 0x494B20u;
        goto label_494b20;
    }
    ctx->pc = 0x494B18u;
    {
        const bool branch_taken_0x494b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b18) {
            ctx->pc = 0x494BBCu;
            goto label_494bbc;
        }
    }
    ctx->pc = 0x494B20u;
label_494b20:
    // 0x494b20: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x494b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_494b24:
    // 0x494b24: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x494b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_494b28:
    // 0x494b28: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x494b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_494b2c:
    // 0x494b2c: 0xc115ee8  jal         func_457BA0
label_494b30:
    if (ctx->pc == 0x494B30u) {
        ctx->pc = 0x494B34u;
        goto label_494b34;
    }
    ctx->pc = 0x494B2Cu;
    SET_GPR_U32(ctx, 31, 0x494B34u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x494B2Cu, 0x494B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494B34u;
label_494b34:
    // 0x494b34: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_494b38:
    if (ctx->pc == 0x494B38u) {
        ctx->pc = 0x494B3Cu;
        goto label_494b3c;
    }
    ctx->pc = 0x494B34u;
    {
        const bool branch_taken_0x494b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b34) {
            ctx->pc = 0x494BBCu;
            goto label_494bbc;
        }
    }
    ctx->pc = 0x494B3Cu;
label_494b3c:
    // 0x494b3c: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x494b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_494b40:
    // 0x494b40: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_494b44:
    if (ctx->pc == 0x494B44u) {
        ctx->pc = 0x494B48u;
        goto label_494b48;
    }
    ctx->pc = 0x494B40u;
    {
        const bool branch_taken_0x494b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b40) {
            ctx->pc = 0x494BBCu;
            goto label_494bbc;
        }
    }
    ctx->pc = 0x494B48u;
label_494b48:
    // 0x494b48: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x494b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_494b4c:
    // 0x494b4c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x494b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_494b50:
    // 0x494b50: 0x8fa60294  lw          $a2, 0x294($sp)
    ctx->pc = 0x494b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_494b54:
    // 0x494b54: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x494b54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_494b58:
    // 0x494b58: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x494b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_494b5c:
    // 0x494b5c: 0x2408012e  addiu       $t0, $zero, 0x12E
    ctx->pc = 0x494b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
label_494b60:
    // 0x494b60: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x494b60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_494b64:
    // 0x494b64: 0x25295300  addiu       $t1, $t1, 0x5300
    ctx->pc = 0x494b64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21248));
label_494b68:
    // 0x494b68: 0xc113940  jal         func_44E500
label_494b6c:
    if (ctx->pc == 0x494B6Cu) {
        ctx->pc = 0x494B70u;
        goto label_494b70;
    }
    ctx->pc = 0x494B68u;
    SET_GPR_U32(ctx, 31, 0x494B70u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x494B68u, 0x494B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494B70u;
label_494b70:
    // 0x494b70: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x494b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_494b74:
    // 0x494b74: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x494b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_494b78:
    // 0x494b78: 0x24a55370  addiu       $a1, $a1, 0x5370
    ctx->pc = 0x494b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21360));
label_494b7c:
    // 0x494b7c: 0xc115c24  jal         func_457090
label_494b80:
    if (ctx->pc == 0x494B80u) {
        ctx->pc = 0x494B84u;
        goto label_494b84;
    }
    ctx->pc = 0x494B7Cu;
    SET_GPR_U32(ctx, 31, 0x494B84u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x494B7Cu, 0x494B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494B84u;
label_494b84:
    // 0x494b84: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x494b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_494b88:
    // 0x494b88: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x494b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_494b8c:
    // 0x494b8c: 0x40f809  jalr        $v0
label_494b90:
    if (ctx->pc == 0x494B90u) {
        ctx->pc = 0x494B94u;
        goto label_494b94;
    }
    ctx->pc = 0x494B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x494B94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494B8Cu, 0x494B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x494B94u;
label_494b94:
    // 0x494b94: 0xaf82b740  sw          $v0, -0x48C0($gp)
    ctx->pc = 0x494b94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948672), GPR_U32(ctx, 2));
label_494b98:
    // 0x494b98: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x494b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_494b9c:
    // 0x494b9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_494ba0:
    if (ctx->pc == 0x494BA0u) {
        ctx->pc = 0x494BA4u;
        goto label_494ba4;
    }
    ctx->pc = 0x494B9Cu;
    {
        const bool branch_taken_0x494b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494b9c) {
            ctx->pc = 0x494BACu;
            goto label_494bac;
        }
    }
    ctx->pc = 0x494BA4u;
label_494ba4:
    // 0x494ba4: 0xd  break       0
    ctx->pc = 0x494ba4u;
    runtime->handleBreak(rdram, ctx);
label_494ba8:
    // 0x494ba8: 0x0  nop
    ctx->pc = 0x494ba8u;
    // NOP
label_494bac:
    // 0x494bac: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x494bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_494bb0:
    // 0x494bb0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x494bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_494bb4:
    // 0x494bb4: 0xc11392c  jal         func_44E4B0
label_494bb8:
    if (ctx->pc == 0x494BB8u) {
        ctx->pc = 0x494BBCu;
        goto label_494bbc;
    }
    ctx->pc = 0x494BB4u;
    SET_GPR_U32(ctx, 31, 0x494BBCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x494BB4u, 0x494BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494BBCu;
label_494bbc:
    // 0x494bbc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_494bc0:
    if (ctx->pc == 0x494BC0u) {
        ctx->pc = 0x494BC4u;
        goto label_494bc4;
    }
    ctx->pc = 0x494BBCu;
    {
        const bool branch_taken_0x494bbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x494bbc) {
            ctx->pc = 0x494BD0u;
            goto label_494bd0;
        }
    }
    ctx->pc = 0x494BC4u;
label_494bc4:
    // 0x494bc4: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x494bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_494bc8:
    // 0x494bc8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_494bcc:
    if (ctx->pc == 0x494BCCu) {
        ctx->pc = 0x494BD0u;
        goto label_494bd0;
    }
    ctx->pc = 0x494BC8u;
    {
        const bool branch_taken_0x494bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494bc8) {
            ctx->pc = 0x494BDCu;
            goto label_494bdc;
        }
    }
    ctx->pc = 0x494BD0u;
label_494bd0:
    // 0x494bd0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x494bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_494bd4:
    // 0x494bd4: 0x10000062  b           . + 4 + (0x62 << 2)
label_494bd8:
    if (ctx->pc == 0x494BD8u) {
        ctx->pc = 0x494BDCu;
        goto label_494bdc;
    }
    ctx->pc = 0x494BD4u;
    {
        const bool branch_taken_0x494bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494bd4) {
            ctx->pc = 0x494D60u;
            goto label_494d60;
        }
    }
    ctx->pc = 0x494BDCu;
label_494bdc:
    // 0x494bdc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x494bdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494be0:
    // 0x494be0: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x494be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_494be4:
    // 0x494be4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_494be8:
    if (ctx->pc == 0x494BE8u) {
        ctx->pc = 0x494BECu;
        goto label_494bec;
    }
    ctx->pc = 0x494BE4u;
    {
        const bool branch_taken_0x494be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494be4) {
            ctx->pc = 0x494C30u;
            goto label_494c30;
        }
    }
    ctx->pc = 0x494BECu;
label_494bec:
    // 0x494bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x494becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494bf0:
    // 0x494bf0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x494bf0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_494bf4:
    // 0x494bf4: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x494bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_494bf8:
    // 0x494bf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x494bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_494bfc:
    // 0x494bfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x494bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_494c00:
    // 0x494c00: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_494c04:
    if (ctx->pc == 0x494C04u) {
        ctx->pc = 0x494C08u;
        goto label_494c08;
    }
    ctx->pc = 0x494C00u;
    {
        const bool branch_taken_0x494c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x494c00) {
            ctx->pc = 0x494C20u;
            goto label_494c20;
        }
    }
    ctx->pc = 0x494C08u;
label_494c08:
    // 0x494c08: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x494c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_494c0c:
    // 0x494c0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x494c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_494c10:
    // 0x494c10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x494c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_494c14:
    // 0x494c14: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_494c18:
    if (ctx->pc == 0x494C18u) {
        ctx->pc = 0x494C1Cu;
        goto label_494c1c;
    }
    ctx->pc = 0x494C14u;
    {
        const bool branch_taken_0x494c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x494c14) {
            ctx->pc = 0x494C20u;
            goto label_494c20;
        }
    }
    ctx->pc = 0x494C1Cu;
label_494c1c:
    // 0x494c1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x494c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494c20:
    // 0x494c20: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_494c24:
    if (ctx->pc == 0x494C24u) {
        ctx->pc = 0x494C28u;
        goto label_494c28;
    }
    ctx->pc = 0x494C20u;
    {
        const bool branch_taken_0x494c20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x494c20) {
            ctx->pc = 0x494C30u;
            goto label_494c30;
        }
    }
    ctx->pc = 0x494C28u;
label_494c28:
    // 0x494c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x494c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494c2c:
    // 0x494c2c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x494c2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_494c30:
    // 0x494c30: 0x325000ff  andi        $s0, $s2, 0xFF
    ctx->pc = 0x494c30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_494c34:
    // 0x494c34: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
label_494c38:
    if (ctx->pc == 0x494C38u) {
        ctx->pc = 0x494C3Cu;
        goto label_494c3c;
    }
    ctx->pc = 0x494C34u;
    {
        const bool branch_taken_0x494c34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x494c34) {
            ctx->pc = 0x494CE4u;
            goto label_494ce4;
        }
    }
    ctx->pc = 0x494C3Cu;
label_494c3c:
    // 0x494c3c: 0x8f82b744  lw          $v0, -0x48BC($gp)
    ctx->pc = 0x494c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948676)));
label_494c40:
    // 0x494c40: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_494c44:
    if (ctx->pc == 0x494C44u) {
        ctx->pc = 0x494C48u;
        goto label_494c48;
    }
    ctx->pc = 0x494C40u;
    {
        const bool branch_taken_0x494c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494c40) {
            ctx->pc = 0x494CE4u;
            goto label_494ce4;
        }
    }
    ctx->pc = 0x494C48u;
label_494c48:
    // 0x494c48: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x494c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_494c4c:
    // 0x494c4c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x494c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_494c50:
    // 0x494c50: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x494c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_494c54:
    // 0x494c54: 0xc115ee8  jal         func_457BA0
label_494c58:
    if (ctx->pc == 0x494C58u) {
        ctx->pc = 0x494C5Cu;
        goto label_494c5c;
    }
    ctx->pc = 0x494C54u;
    SET_GPR_U32(ctx, 31, 0x494C5Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x494C54u, 0x494C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494C5Cu;
label_494c5c:
    // 0x494c5c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_494c60:
    if (ctx->pc == 0x494C60u) {
        ctx->pc = 0x494C64u;
        goto label_494c64;
    }
    ctx->pc = 0x494C5Cu;
    {
        const bool branch_taken_0x494c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494c5c) {
            ctx->pc = 0x494CE4u;
            goto label_494ce4;
        }
    }
    ctx->pc = 0x494C64u;
label_494c64:
    // 0x494c64: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x494c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_494c68:
    // 0x494c68: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_494c6c:
    if (ctx->pc == 0x494C6Cu) {
        ctx->pc = 0x494C70u;
        goto label_494c70;
    }
    ctx->pc = 0x494C68u;
    {
        const bool branch_taken_0x494c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494c68) {
            ctx->pc = 0x494CE4u;
            goto label_494ce4;
        }
    }
    ctx->pc = 0x494C70u;
label_494c70:
    // 0x494c70: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x494c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_494c74:
    // 0x494c74: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x494c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_494c78:
    // 0x494c78: 0x8fa60284  lw          $a2, 0x284($sp)
    ctx->pc = 0x494c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_494c7c:
    // 0x494c7c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x494c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_494c80:
    // 0x494c80: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x494c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_494c84:
    // 0x494c84: 0x24080135  addiu       $t0, $zero, 0x135
    ctx->pc = 0x494c84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
label_494c88:
    // 0x494c88: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x494c88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_494c8c:
    // 0x494c8c: 0x25295300  addiu       $t1, $t1, 0x5300
    ctx->pc = 0x494c8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21248));
label_494c90:
    // 0x494c90: 0xc113940  jal         func_44E500
label_494c94:
    if (ctx->pc == 0x494C94u) {
        ctx->pc = 0x494C98u;
        goto label_494c98;
    }
    ctx->pc = 0x494C90u;
    SET_GPR_U32(ctx, 31, 0x494C98u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x494C90u, 0x494C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494C98u;
label_494c98:
    // 0x494c98: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x494c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_494c9c:
    // 0x494c9c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x494c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_494ca0:
    // 0x494ca0: 0x24a553d0  addiu       $a1, $a1, 0x53D0
    ctx->pc = 0x494ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21456));
label_494ca4:
    // 0x494ca4: 0xc115c24  jal         func_457090
label_494ca8:
    if (ctx->pc == 0x494CA8u) {
        ctx->pc = 0x494CACu;
        goto label_494cac;
    }
    ctx->pc = 0x494CA4u;
    SET_GPR_U32(ctx, 31, 0x494CACu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x494CA4u, 0x494CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494CACu;
label_494cac:
    // 0x494cac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x494cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_494cb0:
    // 0x494cb0: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x494cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_494cb4:
    // 0x494cb4: 0x40f809  jalr        $v0
label_494cb8:
    if (ctx->pc == 0x494CB8u) {
        ctx->pc = 0x494CBCu;
        goto label_494cbc;
    }
    ctx->pc = 0x494CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x494CBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494CB4u, 0x494CBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x494CBCu;
label_494cbc:
    // 0x494cbc: 0xaf82b744  sw          $v0, -0x48BC($gp)
    ctx->pc = 0x494cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948676), GPR_U32(ctx, 2));
label_494cc0:
    // 0x494cc0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x494cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_494cc4:
    // 0x494cc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_494cc8:
    if (ctx->pc == 0x494CC8u) {
        ctx->pc = 0x494CCCu;
        goto label_494ccc;
    }
    ctx->pc = 0x494CC4u;
    {
        const bool branch_taken_0x494cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494cc4) {
            ctx->pc = 0x494CD4u;
            goto label_494cd4;
        }
    }
    ctx->pc = 0x494CCCu;
label_494ccc:
    // 0x494ccc: 0xd  break       0
    ctx->pc = 0x494cccu;
    runtime->handleBreak(rdram, ctx);
label_494cd0:
    // 0x494cd0: 0x0  nop
    ctx->pc = 0x494cd0u;
    // NOP
label_494cd4:
    // 0x494cd4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x494cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_494cd8:
    // 0x494cd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x494cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_494cdc:
    // 0x494cdc: 0xc11392c  jal         func_44E4B0
label_494ce0:
    if (ctx->pc == 0x494CE0u) {
        ctx->pc = 0x494CE4u;
        goto label_494ce4;
    }
    ctx->pc = 0x494CDCu;
    SET_GPR_U32(ctx, 31, 0x494CE4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x494CDCu, 0x494CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494CE4u;
label_494ce4:
    // 0x494ce4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_494ce8:
    if (ctx->pc == 0x494CE8u) {
        ctx->pc = 0x494CECu;
        goto label_494cec;
    }
    ctx->pc = 0x494CE4u;
    {
        const bool branch_taken_0x494ce4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x494ce4) {
            ctx->pc = 0x494CF8u;
            goto label_494cf8;
        }
    }
    ctx->pc = 0x494CECu;
label_494cec:
    // 0x494cec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x494cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_494cf0:
    // 0x494cf0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_494cf4:
    if (ctx->pc == 0x494CF4u) {
        ctx->pc = 0x494CF8u;
        goto label_494cf8;
    }
    ctx->pc = 0x494CF0u;
    {
        const bool branch_taken_0x494cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494cf0) {
            ctx->pc = 0x494D60u;
            goto label_494d60;
        }
    }
    ctx->pc = 0x494CF8u;
label_494cf8:
    // 0x494cf8: 0xc125254  jal         func_494950
label_494cfc:
    if (ctx->pc == 0x494CFCu) {
        ctx->pc = 0x494D00u;
        goto label_494d00;
    }
    ctx->pc = 0x494CF8u;
    SET_GPR_U32(ctx, 31, 0x494D00u);
    ctx->pc = 0x494950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494950u, 0x494CF8u, 0x494D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494D00u;
label_494d00:
    // 0x494d00: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x494d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_494d04:
    // 0x494d04: 0x24847e70  addiu       $a0, $a0, 0x7E70
    ctx->pc = 0x494d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32368));
label_494d08:
    // 0x494d08: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x494d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_494d0c:
    // 0x494d0c: 0x24060324  addiu       $a2, $zero, 0x324
    ctx->pc = 0x494d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 804));
label_494d10:
    // 0x494d10: 0xc0bb778  jal         func_2EDDE0
label_494d14:
    if (ctx->pc == 0x494D14u) {
        ctx->pc = 0x494D18u;
        goto label_494d18;
    }
    ctx->pc = 0x494D10u;
    SET_GPR_U32(ctx, 31, 0x494D18u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x494D10u, 0x494D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494D18u;
label_494d18:
    // 0x494d18: 0xaf80c174  sw          $zero, -0x3E8C($gp)
    ctx->pc = 0x494d18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951284), GPR_U32(ctx, 0));
label_494d1c:
    // 0x494d1c: 0xaf80c178  sw          $zero, -0x3E88($gp)
    ctx->pc = 0x494d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951288), GPR_U32(ctx, 0));
label_494d20:
    // 0x494d20: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x494d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_494d24:
    // 0x494d24: 0x8c437e70  lw          $v1, 0x7E70($v0)
    ctx->pc = 0x494d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32368)));
label_494d28:
    // 0x494d28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x494d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_494d2c:
    // 0x494d2c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_494d30:
    if (ctx->pc == 0x494D30u) {
        ctx->pc = 0x494D34u;
        goto label_494d34;
    }
    ctx->pc = 0x494D2Cu;
    {
        const bool branch_taken_0x494d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x494d2c) {
            ctx->pc = 0x494D4Cu;
            goto label_494d4c;
        }
    }
    ctx->pc = 0x494D34u;
label_494d34:
    // 0x494d34: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x494d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_494d38:
    // 0x494d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x494d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494d3c:
    // 0x494d3c: 0xc125548  jal         func_495520
label_494d40:
    if (ctx->pc == 0x494D40u) {
        ctx->pc = 0x494D44u;
        goto label_494d44;
    }
    ctx->pc = 0x494D3Cu;
    SET_GPR_U32(ctx, 31, 0x494D44u);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x494D3Cu, 0x494D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494D44u;
label_494d44:
    // 0x494d44: 0x10000005  b           . + 4 + (0x5 << 2)
label_494d48:
    if (ctx->pc == 0x494D48u) {
        ctx->pc = 0x494D4Cu;
        goto label_494d4c;
    }
    ctx->pc = 0x494D44u;
    {
        const bool branch_taken_0x494d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494d44) {
            ctx->pc = 0x494D5Cu;
            goto label_494d5c;
        }
    }
    ctx->pc = 0x494D4Cu;
label_494d4c:
    // 0x494d4c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x494d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_494d50:
    // 0x494d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x494d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494d54:
    // 0x494d54: 0xc125548  jal         func_495520
label_494d58:
    if (ctx->pc == 0x494D58u) {
        ctx->pc = 0x494D5Cu;
        goto label_494d5c;
    }
    ctx->pc = 0x494D54u;
    SET_GPR_U32(ctx, 31, 0x494D5Cu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x494D54u, 0x494D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494D5Cu;
label_494d5c:
    // 0x494d5c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x494d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_494d60:
    // 0x494d60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x494d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_494d64:
    // 0x494d64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x494d64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_494d68:
    // 0x494d68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x494d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_494d6c:
    // 0x494d6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x494d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_494d70:
    // 0x494d70: 0x27bd02b0  addiu       $sp, $sp, 0x2B0
    ctx->pc = 0x494d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_494d74:
    // 0x494d74: 0x3e00008  jr          $ra
label_494d78:
    if (ctx->pc == 0x494D78u) {
        ctx->pc = 0x494D7Cu;
        goto label_494d7c;
    }
    ctx->pc = 0x494D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494D7Cu;
label_494d7c:
    // 0x494d7c: 0x0  nop
    ctx->pc = 0x494d7cu;
    // NOP
    ctx->pc = 0x494d80u;
}
