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

// Function: sub_00463A60
// Address: 0x463a60 - 0x463d20
void sub_00463A60_0x463a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463A60_0x463a60");
#endif

    switch (ctx->pc) {
        case 0x463a60u: goto label_463a60;
        case 0x463a64u: goto label_463a64;
        case 0x463a68u: goto label_463a68;
        case 0x463a6cu: goto label_463a6c;
        case 0x463a70u: goto label_463a70;
        case 0x463a74u: goto label_463a74;
        case 0x463a78u: goto label_463a78;
        case 0x463a7cu: goto label_463a7c;
        case 0x463a80u: goto label_463a80;
        case 0x463a84u: goto label_463a84;
        case 0x463a88u: goto label_463a88;
        case 0x463a8cu: goto label_463a8c;
        case 0x463a90u: goto label_463a90;
        case 0x463a94u: goto label_463a94;
        case 0x463a98u: goto label_463a98;
        case 0x463a9cu: goto label_463a9c;
        case 0x463aa0u: goto label_463aa0;
        case 0x463aa4u: goto label_463aa4;
        case 0x463aa8u: goto label_463aa8;
        case 0x463aacu: goto label_463aac;
        case 0x463ab0u: goto label_463ab0;
        case 0x463ab4u: goto label_463ab4;
        case 0x463ab8u: goto label_463ab8;
        case 0x463abcu: goto label_463abc;
        case 0x463ac0u: goto label_463ac0;
        case 0x463ac4u: goto label_463ac4;
        case 0x463ac8u: goto label_463ac8;
        case 0x463accu: goto label_463acc;
        case 0x463ad0u: goto label_463ad0;
        case 0x463ad4u: goto label_463ad4;
        case 0x463ad8u: goto label_463ad8;
        case 0x463adcu: goto label_463adc;
        case 0x463ae0u: goto label_463ae0;
        case 0x463ae4u: goto label_463ae4;
        case 0x463ae8u: goto label_463ae8;
        case 0x463aecu: goto label_463aec;
        case 0x463af0u: goto label_463af0;
        case 0x463af4u: goto label_463af4;
        case 0x463af8u: goto label_463af8;
        case 0x463afcu: goto label_463afc;
        case 0x463b00u: goto label_463b00;
        case 0x463b04u: goto label_463b04;
        case 0x463b08u: goto label_463b08;
        case 0x463b0cu: goto label_463b0c;
        case 0x463b10u: goto label_463b10;
        case 0x463b14u: goto label_463b14;
        case 0x463b18u: goto label_463b18;
        case 0x463b1cu: goto label_463b1c;
        case 0x463b20u: goto label_463b20;
        case 0x463b24u: goto label_463b24;
        case 0x463b28u: goto label_463b28;
        case 0x463b2cu: goto label_463b2c;
        case 0x463b30u: goto label_463b30;
        case 0x463b34u: goto label_463b34;
        case 0x463b38u: goto label_463b38;
        case 0x463b3cu: goto label_463b3c;
        case 0x463b40u: goto label_463b40;
        case 0x463b44u: goto label_463b44;
        case 0x463b48u: goto label_463b48;
        case 0x463b4cu: goto label_463b4c;
        case 0x463b50u: goto label_463b50;
        case 0x463b54u: goto label_463b54;
        case 0x463b58u: goto label_463b58;
        case 0x463b5cu: goto label_463b5c;
        case 0x463b60u: goto label_463b60;
        case 0x463b64u: goto label_463b64;
        case 0x463b68u: goto label_463b68;
        case 0x463b6cu: goto label_463b6c;
        case 0x463b70u: goto label_463b70;
        case 0x463b74u: goto label_463b74;
        case 0x463b78u: goto label_463b78;
        case 0x463b7cu: goto label_463b7c;
        case 0x463b80u: goto label_463b80;
        case 0x463b84u: goto label_463b84;
        case 0x463b88u: goto label_463b88;
        case 0x463b8cu: goto label_463b8c;
        case 0x463b90u: goto label_463b90;
        case 0x463b94u: goto label_463b94;
        case 0x463b98u: goto label_463b98;
        case 0x463b9cu: goto label_463b9c;
        case 0x463ba0u: goto label_463ba0;
        case 0x463ba4u: goto label_463ba4;
        case 0x463ba8u: goto label_463ba8;
        case 0x463bacu: goto label_463bac;
        case 0x463bb0u: goto label_463bb0;
        case 0x463bb4u: goto label_463bb4;
        case 0x463bb8u: goto label_463bb8;
        case 0x463bbcu: goto label_463bbc;
        case 0x463bc0u: goto label_463bc0;
        case 0x463bc4u: goto label_463bc4;
        case 0x463bc8u: goto label_463bc8;
        case 0x463bccu: goto label_463bcc;
        case 0x463bd0u: goto label_463bd0;
        case 0x463bd4u: goto label_463bd4;
        case 0x463bd8u: goto label_463bd8;
        case 0x463bdcu: goto label_463bdc;
        case 0x463be0u: goto label_463be0;
        case 0x463be4u: goto label_463be4;
        case 0x463be8u: goto label_463be8;
        case 0x463becu: goto label_463bec;
        case 0x463bf0u: goto label_463bf0;
        case 0x463bf4u: goto label_463bf4;
        case 0x463bf8u: goto label_463bf8;
        case 0x463bfcu: goto label_463bfc;
        case 0x463c00u: goto label_463c00;
        case 0x463c04u: goto label_463c04;
        case 0x463c08u: goto label_463c08;
        case 0x463c0cu: goto label_463c0c;
        case 0x463c10u: goto label_463c10;
        case 0x463c14u: goto label_463c14;
        case 0x463c18u: goto label_463c18;
        case 0x463c1cu: goto label_463c1c;
        case 0x463c20u: goto label_463c20;
        case 0x463c24u: goto label_463c24;
        case 0x463c28u: goto label_463c28;
        case 0x463c2cu: goto label_463c2c;
        case 0x463c30u: goto label_463c30;
        case 0x463c34u: goto label_463c34;
        case 0x463c38u: goto label_463c38;
        case 0x463c3cu: goto label_463c3c;
        case 0x463c40u: goto label_463c40;
        case 0x463c44u: goto label_463c44;
        case 0x463c48u: goto label_463c48;
        case 0x463c4cu: goto label_463c4c;
        case 0x463c50u: goto label_463c50;
        case 0x463c54u: goto label_463c54;
        case 0x463c58u: goto label_463c58;
        case 0x463c5cu: goto label_463c5c;
        case 0x463c60u: goto label_463c60;
        case 0x463c64u: goto label_463c64;
        case 0x463c68u: goto label_463c68;
        case 0x463c6cu: goto label_463c6c;
        case 0x463c70u: goto label_463c70;
        case 0x463c74u: goto label_463c74;
        case 0x463c78u: goto label_463c78;
        case 0x463c7cu: goto label_463c7c;
        case 0x463c80u: goto label_463c80;
        case 0x463c84u: goto label_463c84;
        case 0x463c88u: goto label_463c88;
        case 0x463c8cu: goto label_463c8c;
        case 0x463c90u: goto label_463c90;
        case 0x463c94u: goto label_463c94;
        case 0x463c98u: goto label_463c98;
        case 0x463c9cu: goto label_463c9c;
        case 0x463ca0u: goto label_463ca0;
        case 0x463ca4u: goto label_463ca4;
        case 0x463ca8u: goto label_463ca8;
        case 0x463cacu: goto label_463cac;
        case 0x463cb0u: goto label_463cb0;
        case 0x463cb4u: goto label_463cb4;
        case 0x463cb8u: goto label_463cb8;
        case 0x463cbcu: goto label_463cbc;
        case 0x463cc0u: goto label_463cc0;
        case 0x463cc4u: goto label_463cc4;
        case 0x463cc8u: goto label_463cc8;
        case 0x463cccu: goto label_463ccc;
        case 0x463cd0u: goto label_463cd0;
        case 0x463cd4u: goto label_463cd4;
        case 0x463cd8u: goto label_463cd8;
        case 0x463cdcu: goto label_463cdc;
        case 0x463ce0u: goto label_463ce0;
        case 0x463ce4u: goto label_463ce4;
        case 0x463ce8u: goto label_463ce8;
        case 0x463cecu: goto label_463cec;
        case 0x463cf0u: goto label_463cf0;
        case 0x463cf4u: goto label_463cf4;
        case 0x463cf8u: goto label_463cf8;
        case 0x463cfcu: goto label_463cfc;
        case 0x463d00u: goto label_463d00;
        case 0x463d04u: goto label_463d04;
        case 0x463d08u: goto label_463d08;
        case 0x463d0cu: goto label_463d0c;
        case 0x463d10u: goto label_463d10;
        case 0x463d14u: goto label_463d14;
        case 0x463d18u: goto label_463d18;
        case 0x463d1cu: goto label_463d1c;
        default: break;
    }

    ctx->pc = 0x463a60u;

label_463a60:
    // 0x463a60: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x463a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_463a64:
    // 0x463a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x463a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_463a68:
    // 0x463a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x463a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_463a6c:
    // 0x463a6c: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x463a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
label_463a70:
    // 0x463a70: 0xafa501a0  sw          $a1, 0x1A0($sp)
    ctx->pc = 0x463a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 5));
label_463a74:
    // 0x463a74: 0xafa601b0  sw          $a2, 0x1B0($sp)
    ctx->pc = 0x463a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
label_463a78:
    // 0x463a78: 0x8f84bfb0  lw          $a0, -0x4050($gp)
    ctx->pc = 0x463a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_463a7c:
    // 0x463a7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x463a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_463a80:
    // 0x463a80: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
label_463a84:
    if (ctx->pc == 0x463A84u) {
        ctx->pc = 0x463A88u;
        goto label_463a88;
    }
    ctx->pc = 0x463A80u;
    {
        const bool branch_taken_0x463a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x463a80) {
            ctx->pc = 0x463BECu;
            goto label_463bec;
        }
    }
    ctx->pc = 0x463A88u;
label_463a88:
    // 0x463a88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_463a8c:
    if (ctx->pc == 0x463A8Cu) {
        ctx->pc = 0x463A90u;
        goto label_463a90;
    }
    ctx->pc = 0x463A88u;
    {
        const bool branch_taken_0x463a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x463a88) {
            ctx->pc = 0x463A98u;
            goto label_463a98;
        }
    }
    ctx->pc = 0x463A90u;
label_463a90:
    // 0x463a90: 0x10000074  b           . + 4 + (0x74 << 2)
label_463a94:
    if (ctx->pc == 0x463A94u) {
        ctx->pc = 0x463A98u;
        goto label_463a98;
    }
    ctx->pc = 0x463A90u;
    {
        const bool branch_taken_0x463a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463a90) {
            ctx->pc = 0x463C64u;
            goto label_463c64;
        }
    }
    ctx->pc = 0x463A98u;
label_463a98:
    // 0x463a98: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x463a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_463a9c:
    // 0x463a9c: 0x2785b1d0  addiu       $a1, $gp, -0x4E30
    ctx->pc = 0x463a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947280));
label_463aa0:
    // 0x463aa0: 0x2786bfb8  addiu       $a2, $gp, -0x4048
    ctx->pc = 0x463aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950840));
label_463aa4:
    // 0x463aa4: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x463aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_463aa8:
    // 0x463aa8: 0x24e74de8  addiu       $a3, $a3, 0x4DE8
    ctx->pc = 0x463aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19944));
label_463aac:
    // 0x463aac: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x463aacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_463ab0:
    // 0x463ab0: 0x25084e3c  addiu       $t0, $t0, 0x4E3C
    ctx->pc = 0x463ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20028));
label_463ab4:
    // 0x463ab4: 0xc0bc3e2  jal         func_2F0F88
label_463ab8:
    if (ctx->pc == 0x463AB8u) {
        ctx->pc = 0x463ABCu;
        goto label_463abc;
    }
    ctx->pc = 0x463AB4u;
    SET_GPR_U32(ctx, 31, 0x463ABCu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x463AB4u, 0x463ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463ABCu;
label_463abc:
    // 0x463abc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x463abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_463ac0:
    // 0x463ac0: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x463ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_463ac4:
    // 0x463ac4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x463ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_463ac8:
    // 0x463ac8: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x463ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_463acc:
    // 0x463acc: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x463accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_463ad0:
    // 0x463ad0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x463ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463ad4:
    // 0x463ad4: 0xc0c3dca  jal         func_30F728
label_463ad8:
    if (ctx->pc == 0x463AD8u) {
        ctx->pc = 0x463ADCu;
        goto label_463adc;
    }
    ctx->pc = 0x463AD4u;
    SET_GPR_U32(ctx, 31, 0x463ADCu);
    ctx->pc = 0x30F728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F728u, 0x463AD4u, 0x463ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463ADCu;
label_463adc:
    // 0x463adc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x463adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463ae0:
    // 0x463ae0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463ae4:
    // 0x463ae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x463ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463ae8:
    // 0x463ae8: 0x2786bfb4  addiu       $a2, $gp, -0x404C
    ctx->pc = 0x463ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950836));
label_463aec:
    // 0x463aec: 0xc0c3c8e  jal         func_30F238
label_463af0:
    if (ctx->pc == 0x463AF0u) {
        ctx->pc = 0x463AF4u;
        goto label_463af4;
    }
    ctx->pc = 0x463AECu;
    SET_GPR_U32(ctx, 31, 0x463AF4u);
    ctx->pc = 0x30F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F238u, 0x463AECu, 0x463AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463AF4u;
label_463af4:
    // 0x463af4: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_463af8:
    if (ctx->pc == 0x463AF8u) {
        ctx->pc = 0x463AFCu;
        goto label_463afc;
    }
    ctx->pc = 0x463AF4u;
    {
        const bool branch_taken_0x463af4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x463af4) {
            ctx->pc = 0x463B08u;
            goto label_463b08;
        }
    }
    ctx->pc = 0x463AFCu;
label_463afc:
    // 0x463afc: 0x8f82bfb4  lw          $v0, -0x404C($gp)
    ctx->pc = 0x463afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_463b00:
    // 0x463b00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_463b04:
    if (ctx->pc == 0x463B04u) {
        ctx->pc = 0x463B08u;
        goto label_463b08;
    }
    ctx->pc = 0x463B00u;
    {
        const bool branch_taken_0x463b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x463b00) {
            ctx->pc = 0x463B20u;
            goto label_463b20;
        }
    }
    ctx->pc = 0x463B08u;
label_463b08:
    // 0x463b08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463b0c:
    // 0x463b0c: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x463b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_463b10:
    // 0x463b10: 0xc1181ac  jal         func_4606B0
label_463b14:
    if (ctx->pc == 0x463B14u) {
        ctx->pc = 0x463B18u;
        goto label_463b18;
    }
    ctx->pc = 0x463B10u;
    SET_GPR_U32(ctx, 31, 0x463B18u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x463B10u, 0x463B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463B18u;
label_463b18:
    // 0x463b18: 0x1000007b  b           . + 4 + (0x7B << 2)
label_463b1c:
    if (ctx->pc == 0x463B1Cu) {
        ctx->pc = 0x463B20u;
        goto label_463b20;
    }
    ctx->pc = 0x463B18u;
    {
        const bool branch_taken_0x463b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463b18) {
            ctx->pc = 0x463D08u;
            goto label_463d08;
        }
    }
    ctx->pc = 0x463B20u;
label_463b20:
    // 0x463b20: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x463b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_463b24:
    // 0x463b24: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x463b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_463b28:
    // 0x463b28: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x463b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_463b2c:
    // 0x463b2c: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x463b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_463b30:
    // 0x463b30: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x463b30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_463b34:
    // 0x463b34: 0x24c64e5c  addiu       $a2, $a2, 0x4E5C
    ctx->pc = 0x463b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20060));
label_463b38:
    // 0x463b38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x463b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_463b3c:
    // 0x463b3c: 0xc0c3afe  jal         func_30EBF8
label_463b40:
    if (ctx->pc == 0x463B40u) {
        ctx->pc = 0x463B44u;
        goto label_463b44;
    }
    ctx->pc = 0x463B3Cu;
    SET_GPR_U32(ctx, 31, 0x463B44u);
    ctx->pc = 0x30EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EBF8u, 0x463B3Cu, 0x463B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463B44u;
label_463b44:
    // 0x463b44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x463b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463b48:
    // 0x463b48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463b4c:
    // 0x463b4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x463b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463b50:
    // 0x463b50: 0x2786b190  addiu       $a2, $gp, -0x4E70
    ctx->pc = 0x463b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947216));
label_463b54:
    // 0x463b54: 0xc0c3c8e  jal         func_30F238
label_463b58:
    if (ctx->pc == 0x463B58u) {
        ctx->pc = 0x463B5Cu;
        goto label_463b5c;
    }
    ctx->pc = 0x463B54u;
    SET_GPR_U32(ctx, 31, 0x463B5Cu);
    ctx->pc = 0x30F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F238u, 0x463B54u, 0x463B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463B5Cu;
label_463b5c:
    // 0x463b5c: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_463b60:
    if (ctx->pc == 0x463B60u) {
        ctx->pc = 0x463B64u;
        goto label_463b64;
    }
    ctx->pc = 0x463B5Cu;
    {
        const bool branch_taken_0x463b5c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x463b5c) {
            ctx->pc = 0x463B70u;
            goto label_463b70;
        }
    }
    ctx->pc = 0x463B64u;
label_463b64:
    // 0x463b64: 0x8f82b190  lw          $v0, -0x4E70($gp)
    ctx->pc = 0x463b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947216)));
label_463b68:
    // 0x463b68: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_463b6c:
    if (ctx->pc == 0x463B6Cu) {
        ctx->pc = 0x463B70u;
        goto label_463b70;
    }
    ctx->pc = 0x463B68u;
    {
        const bool branch_taken_0x463b68 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x463b68) {
            ctx->pc = 0x463B90u;
            goto label_463b90;
        }
    }
    ctx->pc = 0x463B70u;
label_463b70:
    // 0x463b70: 0x8f82b190  lw          $v0, -0x4E70($gp)
    ctx->pc = 0x463b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947216)));
label_463b74:
    // 0x463b74: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x463b74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_463b78:
    // 0x463b78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463b7c:
    // 0x463b7c: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x463b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_463b80:
    // 0x463b80: 0xc1181ac  jal         func_4606B0
label_463b84:
    if (ctx->pc == 0x463B84u) {
        ctx->pc = 0x463B88u;
        goto label_463b88;
    }
    ctx->pc = 0x463B80u;
    SET_GPR_U32(ctx, 31, 0x463B88u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x463B80u, 0x463B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463B88u;
label_463b88:
    // 0x463b88: 0x1000005f  b           . + 4 + (0x5F << 2)
label_463b8c:
    if (ctx->pc == 0x463B8Cu) {
        ctx->pc = 0x463B90u;
        goto label_463b90;
    }
    ctx->pc = 0x463B88u;
    {
        const bool branch_taken_0x463b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463b88) {
            ctx->pc = 0x463D08u;
            goto label_463d08;
        }
    }
    ctx->pc = 0x463B90u;
label_463b90:
    // 0x463b90: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x463b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_463b94:
    // 0x463b94: 0x8c464e38  lw          $a2, 0x4E38($v0)
    ctx->pc = 0x463b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20024)));
label_463b98:
    // 0x463b98: 0x8f84b190  lw          $a0, -0x4E70($gp)
    ctx->pc = 0x463b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947216)));
label_463b9c:
    // 0x463b9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x463b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_463ba0:
    // 0x463ba0: 0x8c454e24  lw          $a1, 0x4E24($v0)
    ctx->pc = 0x463ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20004)));
label_463ba4:
    // 0x463ba4: 0xc0c3bea  jal         func_30EFA8
label_463ba8:
    if (ctx->pc == 0x463BA8u) {
        ctx->pc = 0x463BACu;
        goto label_463bac;
    }
    ctx->pc = 0x463BA4u;
    SET_GPR_U32(ctx, 31, 0x463BACu);
    ctx->pc = 0x30EFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EFA8u, 0x463BA4u, 0x463BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463BACu;
label_463bac:
    // 0x463bac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x463bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463bb0:
    // 0x463bb0: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
label_463bb4:
    if (ctx->pc == 0x463BB4u) {
        ctx->pc = 0x463BB8u;
        goto label_463bb8;
    }
    ctx->pc = 0x463BB0u;
    {
        const bool branch_taken_0x463bb0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x463bb0) {
            ctx->pc = 0x463BD8u;
            goto label_463bd8;
        }
    }
    ctx->pc = 0x463BB8u;
label_463bb8:
    // 0x463bb8: 0x8f82b190  lw          $v0, -0x4E70($gp)
    ctx->pc = 0x463bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947216)));
label_463bbc:
    // 0x463bbc: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x463bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_463bc0:
    // 0x463bc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463bc4:
    // 0x463bc4: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x463bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_463bc8:
    // 0x463bc8: 0xc1181ac  jal         func_4606B0
label_463bcc:
    if (ctx->pc == 0x463BCCu) {
        ctx->pc = 0x463BD0u;
        goto label_463bd0;
    }
    ctx->pc = 0x463BC8u;
    SET_GPR_U32(ctx, 31, 0x463BD0u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x463BC8u, 0x463BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463BD0u;
label_463bd0:
    // 0x463bd0: 0x1000004d  b           . + 4 + (0x4D << 2)
label_463bd4:
    if (ctx->pc == 0x463BD4u) {
        ctx->pc = 0x463BD8u;
        goto label_463bd8;
    }
    ctx->pc = 0x463BD0u;
    {
        const bool branch_taken_0x463bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463bd0) {
            ctx->pc = 0x463D08u;
            goto label_463d08;
        }
    }
    ctx->pc = 0x463BD8u;
label_463bd8:
    // 0x463bd8: 0x8f83bfb0  lw          $v1, -0x4050($gp)
    ctx->pc = 0x463bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_463bdc:
    // 0x463bdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x463bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_463be0:
    // 0x463be0: 0xaf83bfb0  sw          $v1, -0x4050($gp)
    ctx->pc = 0x463be0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 3));
label_463be4:
    // 0x463be4: 0x10000048  b           . + 4 + (0x48 << 2)
label_463be8:
    if (ctx->pc == 0x463BE8u) {
        ctx->pc = 0x463BECu;
        goto label_463bec;
    }
    ctx->pc = 0x463BE4u;
    {
        const bool branch_taken_0x463be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463be4) {
            ctx->pc = 0x463D08u;
            goto label_463d08;
        }
    }
    ctx->pc = 0x463BECu;
label_463bec:
    // 0x463bec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463bf0:
    // 0x463bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x463bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463bf4:
    // 0x463bf4: 0x2786bfb4  addiu       $a2, $gp, -0x404C
    ctx->pc = 0x463bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950836));
label_463bf8:
    // 0x463bf8: 0xc0c3c8e  jal         func_30F238
label_463bfc:
    if (ctx->pc == 0x463BFCu) {
        ctx->pc = 0x463C00u;
        goto label_463c00;
    }
    ctx->pc = 0x463BF8u;
    SET_GPR_U32(ctx, 31, 0x463C00u);
    ctx->pc = 0x30F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F238u, 0x463BF8u, 0x463C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463C00u;
label_463c00:
    // 0x463c00: 0x8f82bfb4  lw          $v0, -0x404C($gp)
    ctx->pc = 0x463c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_463c04:
    // 0x463c04: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_463c08:
    if (ctx->pc == 0x463C08u) {
        ctx->pc = 0x463C0Cu;
        goto label_463c0c;
    }
    ctx->pc = 0x463C04u;
    {
        const bool branch_taken_0x463c04 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x463c04) {
            ctx->pc = 0x463C24u;
            goto label_463c24;
        }
    }
    ctx->pc = 0x463C0Cu;
label_463c0c:
    // 0x463c0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463c10:
    // 0x463c10: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x463c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_463c14:
    // 0x463c14: 0xc1181ac  jal         func_4606B0
label_463c18:
    if (ctx->pc == 0x463C18u) {
        ctx->pc = 0x463C1Cu;
        goto label_463c1c;
    }
    ctx->pc = 0x463C14u;
    SET_GPR_U32(ctx, 31, 0x463C1Cu);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x463C14u, 0x463C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463C1Cu;
label_463c1c:
    // 0x463c1c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_463c20:
    if (ctx->pc == 0x463C20u) {
        ctx->pc = 0x463C24u;
        goto label_463c24;
    }
    ctx->pc = 0x463C1Cu;
    {
        const bool branch_taken_0x463c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463c1c) {
            ctx->pc = 0x463D08u;
            goto label_463d08;
        }
    }
    ctx->pc = 0x463C24u;
label_463c24:
    // 0x463c24: 0x8f84b190  lw          $a0, -0x4E70($gp)
    ctx->pc = 0x463c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947216)));
label_463c28:
    // 0x463c28: 0xc0c3b56  jal         func_30ED58
label_463c2c:
    if (ctx->pc == 0x463C2Cu) {
        ctx->pc = 0x463C30u;
        goto label_463c30;
    }
    ctx->pc = 0x463C28u;
    SET_GPR_U32(ctx, 31, 0x463C30u);
    ctx->pc = 0x30ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ED58u, 0x463C28u, 0x463C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463C30u;
label_463c30:
    // 0x463c30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463c34:
    // 0x463c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x463c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463c38:
    // 0x463c38: 0x2786bfb4  addiu       $a2, $gp, -0x404C
    ctx->pc = 0x463c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950836));
label_463c3c:
    // 0x463c3c: 0xc0c3c8e  jal         func_30F238
label_463c40:
    if (ctx->pc == 0x463C40u) {
        ctx->pc = 0x463C44u;
        goto label_463c44;
    }
    ctx->pc = 0x463C3Cu;
    SET_GPR_U32(ctx, 31, 0x463C44u);
    ctx->pc = 0x30F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F238u, 0x463C3Cu, 0x463C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463C44u;
label_463c44:
    // 0x463c44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x463c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_463c48:
    // 0x463c48: 0xaf82b190  sw          $v0, -0x4E70($gp)
    ctx->pc = 0x463c48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947216), GPR_U32(ctx, 2));
label_463c4c:
    // 0x463c4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x463c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_463c50:
    // 0x463c50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x463c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463c54:
    // 0x463c54: 0xc1181ac  jal         func_4606B0
label_463c58:
    if (ctx->pc == 0x463C58u) {
        ctx->pc = 0x463C5Cu;
        goto label_463c5c;
    }
    ctx->pc = 0x463C54u;
    SET_GPR_U32(ctx, 31, 0x463C5Cu);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x463C54u, 0x463C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463C5Cu;
label_463c5c:
    // 0x463c5c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_463c60:
    if (ctx->pc == 0x463C60u) {
        ctx->pc = 0x463C64u;
        goto label_463c64;
    }
    ctx->pc = 0x463C5Cu;
    {
        const bool branch_taken_0x463c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463c5c) {
            ctx->pc = 0x463D08u;
            goto label_463d08;
        }
    }
    ctx->pc = 0x463C64u;
label_463c64:
    // 0x463c64: 0x8f83b284  lw          $v1, -0x4D7C($gp)
    ctx->pc = 0x463c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947460)));
label_463c68:
    // 0x463c68: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_463c6c:
    if (ctx->pc == 0x463C6Cu) {
        ctx->pc = 0x463C70u;
        goto label_463c70;
    }
    ctx->pc = 0x463C68u;
    {
        const bool branch_taken_0x463c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x463c68) {
            ctx->pc = 0x463D08u;
            goto label_463d08;
        }
    }
    ctx->pc = 0x463C70u;
label_463c70:
    // 0x463c70: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x463c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_463c74:
    // 0x463c74: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x463c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_463c78:
    // 0x463c78: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x463c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_463c7c:
    // 0x463c7c: 0xc115ee8  jal         func_457BA0
label_463c80:
    if (ctx->pc == 0x463C80u) {
        ctx->pc = 0x463C84u;
        goto label_463c84;
    }
    ctx->pc = 0x463C7Cu;
    SET_GPR_U32(ctx, 31, 0x463C84u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x463C7Cu, 0x463C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463C84u;
label_463c84:
    // 0x463c84: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_463c88:
    if (ctx->pc == 0x463C88u) {
        ctx->pc = 0x463C8Cu;
        goto label_463c8c;
    }
    ctx->pc = 0x463C84u;
    {
        const bool branch_taken_0x463c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x463c84) {
            ctx->pc = 0x463D08u;
            goto label_463d08;
        }
    }
    ctx->pc = 0x463C8Cu;
label_463c8c:
    // 0x463c8c: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x463c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_463c90:
    // 0x463c90: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_463c94:
    if (ctx->pc == 0x463C94u) {
        ctx->pc = 0x463C98u;
        goto label_463c98;
    }
    ctx->pc = 0x463C90u;
    {
        const bool branch_taken_0x463c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x463c90) {
            ctx->pc = 0x463D08u;
            goto label_463d08;
        }
    }
    ctx->pc = 0x463C98u;
label_463c98:
    // 0x463c98: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x463c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_463c9c:
    // 0x463c9c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x463c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_463ca0:
    // 0x463ca0: 0x8fa60184  lw          $a2, 0x184($sp)
    ctx->pc = 0x463ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_463ca4:
    // 0x463ca4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x463ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_463ca8:
    // 0x463ca8: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x463ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_463cac:
    // 0x463cac: 0x240809b0  addiu       $t0, $zero, 0x9B0
    ctx->pc = 0x463cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2480));
label_463cb0:
    // 0x463cb0: 0x2789b1cc  addiu       $t1, $gp, -0x4E34
    ctx->pc = 0x463cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947276));
label_463cb4:
    // 0x463cb4: 0xc113940  jal         func_44E500
label_463cb8:
    if (ctx->pc == 0x463CB8u) {
        ctx->pc = 0x463CBCu;
        goto label_463cbc;
    }
    ctx->pc = 0x463CB4u;
    SET_GPR_U32(ctx, 31, 0x463CBCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x463CB4u, 0x463CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463CBCu;
label_463cbc:
    // 0x463cbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x463cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_463cc0:
    // 0x463cc0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x463cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_463cc4:
    // 0x463cc4: 0x24a5efd0  addiu       $a1, $a1, -0x1030
    ctx->pc = 0x463cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
label_463cc8:
    // 0x463cc8: 0xc115c24  jal         func_457090
label_463ccc:
    if (ctx->pc == 0x463CCCu) {
        ctx->pc = 0x463CD0u;
        goto label_463cd0;
    }
    ctx->pc = 0x463CC8u;
    SET_GPR_U32(ctx, 31, 0x463CD0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x463CC8u, 0x463CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463CD0u;
label_463cd0:
    // 0x463cd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x463cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_463cd4:
    // 0x463cd4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x463cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_463cd8:
    // 0x463cd8: 0x40f809  jalr        $v0
label_463cdc:
    if (ctx->pc == 0x463CDCu) {
        ctx->pc = 0x463CE0u;
        goto label_463ce0;
    }
    ctx->pc = 0x463CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x463CE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463CD8u, 0x463CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x463CE0u;
label_463ce0:
    // 0x463ce0: 0xaf82b284  sw          $v0, -0x4D7C($gp)
    ctx->pc = 0x463ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947460), GPR_U32(ctx, 2));
label_463ce4:
    // 0x463ce4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x463ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_463ce8:
    // 0x463ce8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_463cec:
    if (ctx->pc == 0x463CECu) {
        ctx->pc = 0x463CF0u;
        goto label_463cf0;
    }
    ctx->pc = 0x463CE8u;
    {
        const bool branch_taken_0x463ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x463ce8) {
            ctx->pc = 0x463CF8u;
            goto label_463cf8;
        }
    }
    ctx->pc = 0x463CF0u;
label_463cf0:
    // 0x463cf0: 0xd  break       0
    ctx->pc = 0x463cf0u;
    runtime->handleBreak(rdram, ctx);
label_463cf4:
    // 0x463cf4: 0x0  nop
    ctx->pc = 0x463cf4u;
    // NOP
label_463cf8:
    // 0x463cf8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x463cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_463cfc:
    // 0x463cfc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x463cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_463d00:
    // 0x463d00: 0xc11392c  jal         func_44E4B0
label_463d04:
    if (ctx->pc == 0x463D04u) {
        ctx->pc = 0x463D08u;
        goto label_463d08;
    }
    ctx->pc = 0x463D00u;
    SET_GPR_U32(ctx, 31, 0x463D08u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x463D00u, 0x463D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463D08u;
label_463d08:
    // 0x463d08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x463d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_463d0c:
    // 0x463d0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x463d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_463d10:
    // 0x463d10: 0x27bd01c0  addiu       $sp, $sp, 0x1C0
    ctx->pc = 0x463d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_463d14:
    // 0x463d14: 0x3e00008  jr          $ra
label_463d18:
    if (ctx->pc == 0x463D18u) {
        ctx->pc = 0x463D1Cu;
        goto label_463d1c;
    }
    ctx->pc = 0x463D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x463D1Cu;
label_463d1c:
    // 0x463d1c: 0x0  nop
    ctx->pc = 0x463d1cu;
    // NOP
    ctx->pc = 0x463d20u;
}
