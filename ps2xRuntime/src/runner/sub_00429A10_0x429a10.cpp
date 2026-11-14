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

// Function: sub_00429A10
// Address: 0x429a10 - 0x429d08
void sub_00429A10_0x429a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429A10_0x429a10");
#endif

    switch (ctx->pc) {
        case 0x429a10u: goto label_429a10;
        case 0x429a14u: goto label_429a14;
        case 0x429a18u: goto label_429a18;
        case 0x429a1cu: goto label_429a1c;
        case 0x429a20u: goto label_429a20;
        case 0x429a24u: goto label_429a24;
        case 0x429a28u: goto label_429a28;
        case 0x429a2cu: goto label_429a2c;
        case 0x429a30u: goto label_429a30;
        case 0x429a34u: goto label_429a34;
        case 0x429a38u: goto label_429a38;
        case 0x429a3cu: goto label_429a3c;
        case 0x429a40u: goto label_429a40;
        case 0x429a44u: goto label_429a44;
        case 0x429a48u: goto label_429a48;
        case 0x429a4cu: goto label_429a4c;
        case 0x429a50u: goto label_429a50;
        case 0x429a54u: goto label_429a54;
        case 0x429a58u: goto label_429a58;
        case 0x429a5cu: goto label_429a5c;
        case 0x429a60u: goto label_429a60;
        case 0x429a64u: goto label_429a64;
        case 0x429a68u: goto label_429a68;
        case 0x429a6cu: goto label_429a6c;
        case 0x429a70u: goto label_429a70;
        case 0x429a74u: goto label_429a74;
        case 0x429a78u: goto label_429a78;
        case 0x429a7cu: goto label_429a7c;
        case 0x429a80u: goto label_429a80;
        case 0x429a84u: goto label_429a84;
        case 0x429a88u: goto label_429a88;
        case 0x429a8cu: goto label_429a8c;
        case 0x429a90u: goto label_429a90;
        case 0x429a94u: goto label_429a94;
        case 0x429a98u: goto label_429a98;
        case 0x429a9cu: goto label_429a9c;
        case 0x429aa0u: goto label_429aa0;
        case 0x429aa4u: goto label_429aa4;
        case 0x429aa8u: goto label_429aa8;
        case 0x429aacu: goto label_429aac;
        case 0x429ab0u: goto label_429ab0;
        case 0x429ab4u: goto label_429ab4;
        case 0x429ab8u: goto label_429ab8;
        case 0x429abcu: goto label_429abc;
        case 0x429ac0u: goto label_429ac0;
        case 0x429ac4u: goto label_429ac4;
        case 0x429ac8u: goto label_429ac8;
        case 0x429accu: goto label_429acc;
        case 0x429ad0u: goto label_429ad0;
        case 0x429ad4u: goto label_429ad4;
        case 0x429ad8u: goto label_429ad8;
        case 0x429adcu: goto label_429adc;
        case 0x429ae0u: goto label_429ae0;
        case 0x429ae4u: goto label_429ae4;
        case 0x429ae8u: goto label_429ae8;
        case 0x429aecu: goto label_429aec;
        case 0x429af0u: goto label_429af0;
        case 0x429af4u: goto label_429af4;
        case 0x429af8u: goto label_429af8;
        case 0x429afcu: goto label_429afc;
        case 0x429b00u: goto label_429b00;
        case 0x429b04u: goto label_429b04;
        case 0x429b08u: goto label_429b08;
        case 0x429b0cu: goto label_429b0c;
        case 0x429b10u: goto label_429b10;
        case 0x429b14u: goto label_429b14;
        case 0x429b18u: goto label_429b18;
        case 0x429b1cu: goto label_429b1c;
        case 0x429b20u: goto label_429b20;
        case 0x429b24u: goto label_429b24;
        case 0x429b28u: goto label_429b28;
        case 0x429b2cu: goto label_429b2c;
        case 0x429b30u: goto label_429b30;
        case 0x429b34u: goto label_429b34;
        case 0x429b38u: goto label_429b38;
        case 0x429b3cu: goto label_429b3c;
        case 0x429b40u: goto label_429b40;
        case 0x429b44u: goto label_429b44;
        case 0x429b48u: goto label_429b48;
        case 0x429b4cu: goto label_429b4c;
        case 0x429b50u: goto label_429b50;
        case 0x429b54u: goto label_429b54;
        case 0x429b58u: goto label_429b58;
        case 0x429b5cu: goto label_429b5c;
        case 0x429b60u: goto label_429b60;
        case 0x429b64u: goto label_429b64;
        case 0x429b68u: goto label_429b68;
        case 0x429b6cu: goto label_429b6c;
        case 0x429b70u: goto label_429b70;
        case 0x429b74u: goto label_429b74;
        case 0x429b78u: goto label_429b78;
        case 0x429b7cu: goto label_429b7c;
        case 0x429b80u: goto label_429b80;
        case 0x429b84u: goto label_429b84;
        case 0x429b88u: goto label_429b88;
        case 0x429b8cu: goto label_429b8c;
        case 0x429b90u: goto label_429b90;
        case 0x429b94u: goto label_429b94;
        case 0x429b98u: goto label_429b98;
        case 0x429b9cu: goto label_429b9c;
        case 0x429ba0u: goto label_429ba0;
        case 0x429ba4u: goto label_429ba4;
        case 0x429ba8u: goto label_429ba8;
        case 0x429bacu: goto label_429bac;
        case 0x429bb0u: goto label_429bb0;
        case 0x429bb4u: goto label_429bb4;
        case 0x429bb8u: goto label_429bb8;
        case 0x429bbcu: goto label_429bbc;
        case 0x429bc0u: goto label_429bc0;
        case 0x429bc4u: goto label_429bc4;
        case 0x429bc8u: goto label_429bc8;
        case 0x429bccu: goto label_429bcc;
        case 0x429bd0u: goto label_429bd0;
        case 0x429bd4u: goto label_429bd4;
        case 0x429bd8u: goto label_429bd8;
        case 0x429bdcu: goto label_429bdc;
        case 0x429be0u: goto label_429be0;
        case 0x429be4u: goto label_429be4;
        case 0x429be8u: goto label_429be8;
        case 0x429becu: goto label_429bec;
        case 0x429bf0u: goto label_429bf0;
        case 0x429bf4u: goto label_429bf4;
        case 0x429bf8u: goto label_429bf8;
        case 0x429bfcu: goto label_429bfc;
        case 0x429c00u: goto label_429c00;
        case 0x429c04u: goto label_429c04;
        case 0x429c08u: goto label_429c08;
        case 0x429c0cu: goto label_429c0c;
        case 0x429c10u: goto label_429c10;
        case 0x429c14u: goto label_429c14;
        case 0x429c18u: goto label_429c18;
        case 0x429c1cu: goto label_429c1c;
        case 0x429c20u: goto label_429c20;
        case 0x429c24u: goto label_429c24;
        case 0x429c28u: goto label_429c28;
        case 0x429c2cu: goto label_429c2c;
        case 0x429c30u: goto label_429c30;
        case 0x429c34u: goto label_429c34;
        case 0x429c38u: goto label_429c38;
        case 0x429c3cu: goto label_429c3c;
        case 0x429c40u: goto label_429c40;
        case 0x429c44u: goto label_429c44;
        case 0x429c48u: goto label_429c48;
        case 0x429c4cu: goto label_429c4c;
        case 0x429c50u: goto label_429c50;
        case 0x429c54u: goto label_429c54;
        case 0x429c58u: goto label_429c58;
        case 0x429c5cu: goto label_429c5c;
        case 0x429c60u: goto label_429c60;
        case 0x429c64u: goto label_429c64;
        case 0x429c68u: goto label_429c68;
        case 0x429c6cu: goto label_429c6c;
        case 0x429c70u: goto label_429c70;
        case 0x429c74u: goto label_429c74;
        case 0x429c78u: goto label_429c78;
        case 0x429c7cu: goto label_429c7c;
        case 0x429c80u: goto label_429c80;
        case 0x429c84u: goto label_429c84;
        case 0x429c88u: goto label_429c88;
        case 0x429c8cu: goto label_429c8c;
        case 0x429c90u: goto label_429c90;
        case 0x429c94u: goto label_429c94;
        case 0x429c98u: goto label_429c98;
        case 0x429c9cu: goto label_429c9c;
        case 0x429ca0u: goto label_429ca0;
        case 0x429ca4u: goto label_429ca4;
        case 0x429ca8u: goto label_429ca8;
        case 0x429cacu: goto label_429cac;
        case 0x429cb0u: goto label_429cb0;
        case 0x429cb4u: goto label_429cb4;
        case 0x429cb8u: goto label_429cb8;
        case 0x429cbcu: goto label_429cbc;
        case 0x429cc0u: goto label_429cc0;
        case 0x429cc4u: goto label_429cc4;
        case 0x429cc8u: goto label_429cc8;
        case 0x429cccu: goto label_429ccc;
        case 0x429cd0u: goto label_429cd0;
        case 0x429cd4u: goto label_429cd4;
        case 0x429cd8u: goto label_429cd8;
        case 0x429cdcu: goto label_429cdc;
        case 0x429ce0u: goto label_429ce0;
        case 0x429ce4u: goto label_429ce4;
        case 0x429ce8u: goto label_429ce8;
        case 0x429cecu: goto label_429cec;
        case 0x429cf0u: goto label_429cf0;
        case 0x429cf4u: goto label_429cf4;
        case 0x429cf8u: goto label_429cf8;
        case 0x429cfcu: goto label_429cfc;
        case 0x429d00u: goto label_429d00;
        case 0x429d04u: goto label_429d04;
        default: break;
    }

    ctx->pc = 0x429a10u;

label_429a10:
    // 0x429a10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x429a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_429a14:
    // 0x429a14: 0x8f82adec  lw          $v0, -0x5214($gp)
    ctx->pc = 0x429a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946284)));
label_429a18:
    // 0x429a18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x429a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_429a1c:
    // 0x429a1c: 0x3c120010  lui         $s2, 0x10
    ctx->pc = 0x429a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16 << 16));
label_429a20:
    // 0x429a20: 0x8f83ade8  lw          $v1, -0x5218($gp)
    ctx->pc = 0x429a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946280)));
label_429a24:
    // 0x429a24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x429a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_429a28:
    // 0x429a28: 0x42900b  movn        $s2, $v0, $v0
    ctx->pc = 0x429a28u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_429a2c:
    // 0x429a2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x429a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_429a30:
    // 0x429a30: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_429a34:
    if (ctx->pc == 0x429A34u) {
        ctx->pc = 0x429A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A30u;
        // 0x429a34: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429A38u;
        goto label_429a38;
    }
    ctx->pc = 0x429A30u;
    {
        const bool branch_taken_0x429a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x429A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A30u;
        // 0x429a34: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429a30) {
            ctx->pc = 0x429A64u;
            goto label_429a64;
        }
    }
    ctx->pc = 0x429A38u;
label_429a38:
    // 0x429a38: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x429a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_429a3c:
    // 0x429a3c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x429a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_429a40:
    // 0x429a40: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x429a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_429a44:
    // 0x429a44: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x429a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_429a48:
    // 0x429a48: 0x40f809  jalr        $v0
label_429a4c:
    if (ctx->pc == 0x429A4Cu) {
        ctx->pc = 0x429A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A48u;
        // 0x429a4c: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x429A50u;
        goto label_429a50;
    }
    ctx->pc = 0x429A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x429A50u);
        ctx->pc = 0x429A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A48u;
        // 0x429a4c: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429A48u, 0x429A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x429A50u;
label_429a50:
    // 0x429a50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_429a54:
    if (ctx->pc == 0x429A54u) {
        ctx->pc = 0x429A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A50u;
        // 0x429a54: 0xaf82ade8  sw          $v0, -0x5218($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429A58u;
        goto label_429a58;
    }
    ctx->pc = 0x429A50u;
    {
        const bool branch_taken_0x429a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A50u;
        // 0x429a54: 0xaf82ade8  sw          $v0, -0x5218($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429a50) {
            ctx->pc = 0x429A60u;
            goto label_429a60;
        }
    }
    ctx->pc = 0x429A58u;
label_429a58:
    // 0x429a58: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_429a5c:
    if (ctx->pc == 0x429A5Cu) {
        ctx->pc = 0x429A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A58u;
        // 0x429a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429A60u;
        goto label_429a60;
    }
    ctx->pc = 0x429A58u;
    {
        const bool branch_taken_0x429a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A58u;
        // 0x429a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429a58) {
            ctx->pc = 0x429CE8u;
            goto label_429ce8;
        }
    }
    ctx->pc = 0x429A60u;
label_429a60:
    // 0x429a60: 0xaf80adec  sw          $zero, -0x5214($gp)
    ctx->pc = 0x429a60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946284), GPR_U32(ctx, 0));
label_429a64:
    // 0x429a64: 0x8f82ade8  lw          $v0, -0x5218($gp)
    ctx->pc = 0x429a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946280)));
label_429a68:
    // 0x429a68: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x429a68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_429a6c:
    // 0x429a6c: 0x3631ff80  ori         $s1, $s1, 0xFF80
    ctx->pc = 0x429a6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65408);
label_429a70:
    // 0x429a70: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x429a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_429a74:
    // 0x429a74: 0xc10a5c0  jal         func_429700
label_429a78:
    if (ctx->pc == 0x429A78u) {
        ctx->pc = 0x429A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A74u;
        // 0x429a78: 0x518024  and         $s0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429A7Cu;
        goto label_429a7c;
    }
    ctx->pc = 0x429A74u;
    SET_GPR_U32(ctx, 31, 0x429A7Cu);
    ctx->pc = 0x429A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429A74u;
    // 0x429a78: 0x518024  and         $s0, $v0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429700u, 0x429A74u, 0x429A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429A7Cu;
label_429a7c:
    // 0x429a7c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_429a80:
    if (ctx->pc == 0x429A80u) {
        ctx->pc = 0x429A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A7Cu;
        // 0x429a80: 0x9782ade6  lhu         $v0, -0x521A($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294946278)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429A84u;
        goto label_429a84;
    }
    ctx->pc = 0x429A7Cu;
    {
        const bool branch_taken_0x429a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A7Cu;
        // 0x429a80: 0x9782ade6  lhu         $v0, -0x521A($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294946278)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429a7c) {
            ctx->pc = 0x429AA8u;
            goto label_429aa8;
        }
    }
    ctx->pc = 0x429A84u;
label_429a84:
    // 0x429a84: 0x8f82adec  lw          $v0, -0x5214($gp)
    ctx->pc = 0x429a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946284)));
label_429a88:
    // 0x429a88: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
label_429a8c:
    if (ctx->pc == 0x429A8Cu) {
        ctx->pc = 0x429A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A88u;
        // 0x429a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429A90u;
        goto label_429a90;
    }
    ctx->pc = 0x429A88u;
    {
        const bool branch_taken_0x429a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x429A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A88u;
        // 0x429a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429a88) {
            ctx->pc = 0x429CE8u;
            goto label_429ce8;
        }
    }
    ctx->pc = 0x429A90u;
label_429a90:
    // 0x429a90: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x429a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_429a94:
    // 0x429a94: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x429a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_429a98:
    // 0x429a98: 0x40f809  jalr        $v0
label_429a9c:
    if (ctx->pc == 0x429A9Cu) {
        ctx->pc = 0x429A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A98u;
        // 0x429a9c: 0x8f84ade8  lw          $a0, -0x5218($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429AA0u;
        goto label_429aa0;
    }
    ctx->pc = 0x429A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x429AA0u);
        ctx->pc = 0x429A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A98u;
        // 0x429a9c: 0x8f84ade8  lw          $a0, -0x5218($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946280)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429A98u, 0x429AA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x429AA0u;
label_429aa0:
    // 0x429aa0: 0x10000091  b           . + 4 + (0x91 << 2)
label_429aa4:
    if (ctx->pc == 0x429AA4u) {
        ctx->pc = 0x429AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429AA0u;
        // 0x429aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429AA8u;
        goto label_429aa8;
    }
    ctx->pc = 0x429AA0u;
    {
        const bool branch_taken_0x429aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x429AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429AA0u;
        // 0x429aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429aa0) {
            ctx->pc = 0x429CE8u;
            goto label_429ce8;
        }
    }
    ctx->pc = 0x429AA8u;
label_429aa8:
    // 0x429aa8: 0x2643f800  addiu       $v1, $s2, -0x800
    ctx->pc = 0x429aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965248));
label_429aac:
    // 0x429aac: 0xaf90addc  sw          $s0, -0x5224($gp)
    ctx->pc = 0x429aacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946268), GPR_U32(ctx, 16));
label_429ab0:
    // 0x429ab0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x429ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_429ab4:
    // 0x429ab4: 0x26100800  addiu       $s0, $s0, 0x800
    ctx->pc = 0x429ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
label_429ab8:
    // 0x429ab8: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x429ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_429abc:
    // 0x429abc: 0xaf90be58  sw          $s0, -0x41A8($gp)
    ctx->pc = 0x429abcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950488), GPR_U32(ctx, 16));
label_429ac0:
    // 0x429ac0: 0x121042  srl         $v0, $s2, 1
    ctx->pc = 0x429ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_429ac4:
    // 0x429ac4: 0xa380be64  sb          $zero, -0x419C($gp)
    ctx->pc = 0x429ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950500), (uint8_t)GPR_U32(ctx, 0));
label_429ac8:
    // 0x429ac8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x429ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_429acc:
    // 0x429acc: 0xa780bea8  sh          $zero, -0x4158($gp)
    ctx->pc = 0x429accu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294950568), (uint16_t)GPR_U32(ctx, 0));
label_429ad0:
    // 0x429ad0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x429ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_429ad4:
    // 0x429ad4: 0xaf82be60  sw          $v0, -0x41A0($gp)
    ctx->pc = 0x429ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950496), GPR_U32(ctx, 2));
label_429ad8:
    // 0x429ad8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x429ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_429adc:
    // 0x429adc: 0xaf84be5c  sw          $a0, -0x41A4($gp)
    ctx->pc = 0x429adcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950492), GPR_U32(ctx, 4));
label_429ae0:
    // 0x429ae0: 0xaf82bea4  sw          $v0, -0x415C($gp)
    ctx->pc = 0x429ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950564), GPR_U32(ctx, 2));
label_429ae4:
    // 0x429ae4: 0xa780beaa  sh          $zero, -0x4156($gp)
    ctx->pc = 0x429ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294950570), (uint16_t)GPR_U32(ctx, 0));
label_429ae8:
    // 0x429ae8: 0xaf90be7c  sw          $s0, -0x4184($gp)
    ctx->pc = 0x429ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950524), GPR_U32(ctx, 16));
label_429aec:
    // 0x429aec: 0xaf80be20  sw          $zero, -0x41E0($gp)
    ctx->pc = 0x429aecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 0));
label_429af0:
    // 0x429af0: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x429af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_429af4:
    // 0x429af4: 0x26020078  addiu       $v0, $s0, 0x78
    ctx->pc = 0x429af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_429af8:
    // 0x429af8: 0xaf82be78  sw          $v0, -0x4188($gp)
    ctx->pc = 0x429af8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950520), GPR_U32(ctx, 2));
label_429afc:
    // 0x429afc: 0xaf83be74  sw          $v1, -0x418C($gp)
    ctx->pc = 0x429afcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950516), GPR_U32(ctx, 3));
label_429b00:
    // 0x429b00: 0xaf84be68  sw          $a0, -0x4198($gp)
    ctx->pc = 0x429b00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950504), GPR_U32(ctx, 4));
label_429b04:
    // 0x429b04: 0xaf84be70  sw          $a0, -0x4190($gp)
    ctx->pc = 0x429b04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950512), GPR_U32(ctx, 4));
label_429b08:
    // 0x429b08: 0xaf80be24  sw          $zero, -0x41DC($gp)
    ctx->pc = 0x429b08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950436), GPR_U32(ctx, 0));
label_429b0c:
    // 0x429b0c: 0xaf80be80  sw          $zero, -0x4180($gp)
    ctx->pc = 0x429b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950528), GPR_U32(ctx, 0));
label_429b10:
    // 0x429b10: 0x8f83addc  lw          $v1, -0x5224($gp)
    ctx->pc = 0x429b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946268)));
label_429b14:
    // 0x429b14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x429b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429b18:
    // 0x429b18: 0xaf80be88  sw          $zero, -0x4178($gp)
    ctx->pc = 0x429b18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950536), GPR_U32(ctx, 0));
label_429b1c:
    // 0x429b1c: 0x70424389  pcpyld      $t0, $v0, $v0
    ctx->pc = 0x429b1cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_429b20:
    // 0x429b20: 0xaf80be8c  sw          $zero, -0x4174($gp)
    ctx->pc = 0x429b20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950540), GPR_U32(ctx, 0));
label_429b24:
    // 0x429b24: 0x246307f0  addiu       $v1, $v1, 0x7F0
    ctx->pc = 0x429b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2032));
label_429b28:
    // 0x429b28: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x429b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_429b2c:
    // 0x429b2c: 0x0  nop
    ctx->pc = 0x429b2cu;
    // NOP
label_429b30:
    // 0x429b30: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x429b30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
label_429b34:
    // 0x429b34: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x429b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_429b38:
    // 0x429b38: 0x7c68fff0  sq          $t0, -0x10($v1)
    ctx->pc = 0x429b38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_VEC(ctx, 8));
label_429b3c:
    // 0x429b3c: 0x7c68ffe0  sq          $t0, -0x20($v1)
    ctx->pc = 0x429b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967264), GPR_VEC(ctx, 8));
label_429b40:
    // 0x429b40: 0x7c68ffd0  sq          $t0, -0x30($v1)
    ctx->pc = 0x429b40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967248), GPR_VEC(ctx, 8));
label_429b44:
    // 0x429b44: 0x7c68ffc0  sq          $t0, -0x40($v1)
    ctx->pc = 0x429b44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967232), GPR_VEC(ctx, 8));
label_429b48:
    // 0x429b48: 0x7c68ffb0  sq          $t0, -0x50($v1)
    ctx->pc = 0x429b48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967216), GPR_VEC(ctx, 8));
label_429b4c:
    // 0x429b4c: 0x7c68ffa0  sq          $t0, -0x60($v1)
    ctx->pc = 0x429b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967200), GPR_VEC(ctx, 8));
label_429b50:
    // 0x429b50: 0x7c68ff90  sq          $t0, -0x70($v1)
    ctx->pc = 0x429b50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967184), GPR_VEC(ctx, 8));
label_429b54:
    // 0x429b54: 0x7c68ff80  sq          $t0, -0x80($v1)
    ctx->pc = 0x429b54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967168), GPR_VEC(ctx, 8));
label_429b58:
    // 0x429b58: 0x7c68ff70  sq          $t0, -0x90($v1)
    ctx->pc = 0x429b58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967152), GPR_VEC(ctx, 8));
label_429b5c:
    // 0x429b5c: 0x7c68ff60  sq          $t0, -0xA0($v1)
    ctx->pc = 0x429b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967136), GPR_VEC(ctx, 8));
label_429b60:
    // 0x429b60: 0x7c68ff50  sq          $t0, -0xB0($v1)
    ctx->pc = 0x429b60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967120), GPR_VEC(ctx, 8));
label_429b64:
    // 0x429b64: 0x7c68ff40  sq          $t0, -0xC0($v1)
    ctx->pc = 0x429b64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967104), GPR_VEC(ctx, 8));
label_429b68:
    // 0x429b68: 0x7c68ff30  sq          $t0, -0xD0($v1)
    ctx->pc = 0x429b68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967088), GPR_VEC(ctx, 8));
label_429b6c:
    // 0x429b6c: 0x7c68ff20  sq          $t0, -0xE0($v1)
    ctx->pc = 0x429b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967072), GPR_VEC(ctx, 8));
label_429b70:
    // 0x429b70: 0x7c68ff10  sq          $t0, -0xF0($v1)
    ctx->pc = 0x429b70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294967056), GPR_VEC(ctx, 8));
label_429b74:
    // 0x429b74: 0x4e1ffee  bgez        $a3, . + 4 + (-0x12 << 2)
label_429b78:
    if (ctx->pc == 0x429B78u) {
        ctx->pc = 0x429B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429B74u;
        // 0x429b78: 0x2463ff00  addiu       $v1, $v1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429B7Cu;
        goto label_429b7c;
    }
    ctx->pc = 0x429B74u;
    {
        const bool branch_taken_0x429b74 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x429B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429B74u;
        // 0x429b78: 0x2463ff00  addiu       $v1, $v1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429b74) {
            ctx->pc = 0x429B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_429b30;
        }
    }
    ctx->pc = 0x429B7Cu;
label_429b7c:
    // 0x429b7c: 0x8f83addc  lw          $v1, -0x5224($gp)
    ctx->pc = 0x429b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946268)));
label_429b80:
    // 0x429b80: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x429b80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
label_429b84:
    // 0x429b84: 0x422fc  dsll32      $a0, $a0, 11
    ctx->pc = 0x429b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 11));
label_429b88:
    // 0x429b88: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x429b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
label_429b8c:
    // 0x429b8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x429b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429b90:
    // 0x429b90: 0x70824389  pcpyld      $t0, $a0, $v0
    ctx->pc = 0x429b90u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_429b94:
    // 0x429b94: 0x3c050600  lui         $a1, 0x600
    ctx->pc = 0x429b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1536 << 16));
label_429b98:
    // 0x429b98: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x429b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_429b9c:
    // 0x429b9c: 0x7c680070  sq          $t0, 0x70($v1)
    ctx->pc = 0x429b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), GPR_VEC(ctx, 8));
label_429ba0:
    // 0x429ba0: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x429ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
label_429ba4:
    // 0x429ba4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x429ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_429ba8:
    // 0x429ba8: 0x34421100  ori         $v0, $v0, 0x1100
    ctx->pc = 0x429ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
label_429bac:
    // 0x429bac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x429bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_429bb0:
    // 0x429bb0: 0x70c54389  pcpyld      $t0, $a2, $a1
    ctx->pc = 0x429bb0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
label_429bb4:
    // 0x429bb4: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x429bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
label_429bb8:
    // 0x429bb8: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x429bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
label_429bbc:
    // 0x429bbc: 0x7c680200  sq          $t0, 0x200($v1)
    ctx->pc = 0x429bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 512), GPR_VEC(ctx, 8));
label_429bc0:
    // 0x429bc0: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x429bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_429bc4:
    // 0x429bc4: 0x70424389  pcpyld      $t0, $v0, $v0
    ctx->pc = 0x429bc4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_429bc8:
    // 0x429bc8: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x429bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_429bcc:
    // 0x429bcc: 0x7c680210  sq          $t0, 0x210($v1)
    ctx->pc = 0x429bccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 528), GPR_VEC(ctx, 8));
label_429bd0:
    // 0x429bd0: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x429bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
label_429bd4:
    // 0x429bd4: 0x70c44389  pcpyld      $t0, $a2, $a0
    ctx->pc = 0x429bd4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
label_429bd8:
    // 0x429bd8: 0x7c6803f0  sq          $t0, 0x3F0($v1)
    ctx->pc = 0x429bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 1008), GPR_VEC(ctx, 8));
label_429bdc:
    // 0x429bdc: 0x70a64389  pcpyld      $t0, $a1, $a2
    ctx->pc = 0x429bdcu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
label_429be0:
    // 0x429be0: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x429be0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
label_429be4:
    // 0x429be4: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x429be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_429be8:
    // 0x429be8: 0x7c480010  sq          $t0, 0x10($v0)
    ctx->pc = 0x429be8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 8));
label_429bec:
    // 0x429bec: 0x7c480020  sq          $t0, 0x20($v0)
    ctx->pc = 0x429becu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 8));
label_429bf0:
    // 0x429bf0: 0x7c480030  sq          $t0, 0x30($v0)
    ctx->pc = 0x429bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 8));
label_429bf4:
    // 0x429bf4: 0x7c480040  sq          $t0, 0x40($v0)
    ctx->pc = 0x429bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 8));
label_429bf8:
    // 0x429bf8: 0x7c480050  sq          $t0, 0x50($v0)
    ctx->pc = 0x429bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), GPR_VEC(ctx, 8));
label_429bfc:
    // 0x429bfc: 0x7c480060  sq          $t0, 0x60($v0)
    ctx->pc = 0x429bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), GPR_VEC(ctx, 8));
label_429c00:
    // 0x429c00: 0x7c480070  sq          $t0, 0x70($v0)
    ctx->pc = 0x429c00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 8));
label_429c04:
    // 0x429c04: 0x7c480080  sq          $t0, 0x80($v0)
    ctx->pc = 0x429c04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 128), GPR_VEC(ctx, 8));
label_429c08:
    // 0x429c08: 0x7c480090  sq          $t0, 0x90($v0)
    ctx->pc = 0x429c08u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 144), GPR_VEC(ctx, 8));
label_429c0c:
    // 0x429c0c: 0x7c4800a0  sq          $t0, 0xA0($v0)
    ctx->pc = 0x429c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 160), GPR_VEC(ctx, 8));
label_429c10:
    // 0x429c10: 0x7c4800b0  sq          $t0, 0xB0($v0)
    ctx->pc = 0x429c10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 176), GPR_VEC(ctx, 8));
label_429c14:
    // 0x429c14: 0x7c4800c0  sq          $t0, 0xC0($v0)
    ctx->pc = 0x429c14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), GPR_VEC(ctx, 8));
label_429c18:
    // 0x429c18: 0x7c4800d0  sq          $t0, 0xD0($v0)
    ctx->pc = 0x429c18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 208), GPR_VEC(ctx, 8));
label_429c1c:
    // 0x429c1c: 0x7c4800e0  sq          $t0, 0xE0($v0)
    ctx->pc = 0x429c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 224), GPR_VEC(ctx, 8));
label_429c20:
    // 0x429c20: 0x7c4800f0  sq          $t0, 0xF0($v0)
    ctx->pc = 0x429c20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 240), GPR_VEC(ctx, 8));
label_429c24:
    // 0x429c24: 0x4e1ffee  bgez        $a3, . + 4 + (-0x12 << 2)
label_429c28:
    if (ctx->pc == 0x429C28u) {
        ctx->pc = 0x429C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429C24u;
        // 0x429c28: 0x24420100  addiu       $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429C2Cu;
        goto label_429c2c;
    }
    ctx->pc = 0x429C24u;
    {
        const bool branch_taken_0x429c24 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x429C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429C24u;
        // 0x429c28: 0x24420100  addiu       $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429c24) {
            ctx->pc = 0x429BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_429be0;
        }
    }
    ctx->pc = 0x429C2Cu;
label_429c2c:
    // 0x429c2c: 0x9f82addc  lwu         $v0, -0x5224($gp)
    ctx->pc = 0x429c2cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946268)));
label_429c30:
    // 0x429c30: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x429c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_429c34:
    // 0x429c34: 0x34840021  ori         $a0, $a0, 0x21
    ctx->pc = 0x429c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33);
label_429c38:
    // 0x429c38: 0x3c061300  lui         $a2, 0x1300
    ctx->pc = 0x429c38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4864 << 16));
label_429c3c:
    // 0x429c3c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x429c3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_429c40:
    // 0x429c40: 0x34c61100  ori         $a2, $a2, 0x1100
    ctx->pc = 0x429c40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4352);
label_429c44:
    // 0x429c44: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x429c44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_429c48:
    // 0x429c48: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x429c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_429c4c:
    // 0x429c4c: 0x34630022  ori         $v1, $v1, 0x22
    ctx->pc = 0x429c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34);
label_429c50:
    // 0x429c50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x429c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_429c54:
    // 0x429c54: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x429c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_429c58:
    // 0x429c58: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x429c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_429c5c:
    // 0x429c5c: 0x24a53540  addiu       $a1, $a1, 0x3540
    ctx->pc = 0x429c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13632));
label_429c60:
    // 0x429c60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x429c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_429c64:
    // 0x429c64: 0x70c44389  pcpyld      $t0, $a2, $a0
    ctx->pc = 0x429c64u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
label_429c68:
    // 0x429c68: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x429c68u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
label_429c6c:
    // 0x429c6c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x429c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_429c70:
    // 0x429c70: 0x70c24389  pcpyld      $t0, $a2, $v0
    ctx->pc = 0x429c70u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
label_429c74:
    // 0x429c74: 0x24633560  addiu       $v1, $v1, 0x3560
    ctx->pc = 0x429c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13664));
label_429c78:
    // 0x429c78: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x429c78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
label_429c7c:
    // 0x429c7c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x429c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_429c80:
    // 0x429c80: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x429c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_429c84:
    // 0x429c84: 0x70c74389  pcpyld      $t0, $a2, $a3
    ctx->pc = 0x429c84u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
label_429c88:
    // 0x429c88: 0x24423550  addiu       $v0, $v0, 0x3550
    ctx->pc = 0x429c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13648));
label_429c8c:
    // 0x429c8c: 0x8f85be60  lw          $a1, -0x41A0($gp)
    ctx->pc = 0x429c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950496)));
label_429c90:
    // 0x429c90: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x429c90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
label_429c94:
    // 0x429c94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x429c94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_429c98:
    // 0x429c98: 0x8f84addc  lw          $a0, -0x5224($gp)
    ctx->pc = 0x429c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946268)));
label_429c9c:
    // 0x429c9c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x429c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_429ca0:
    // 0x429ca0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x429ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_429ca4:
    // 0x429ca4: 0x70674389  pcpyld      $t0, $v1, $a3
    ctx->pc = 0x429ca4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
label_429ca8:
    // 0x429ca8: 0x24423570  addiu       $v0, $v0, 0x3570
    ctx->pc = 0x429ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13680));
label_429cac:
    // 0x429cac: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x429cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_429cb0:
    // 0x429cb0: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x429cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
label_429cb4:
    // 0x429cb4: 0xc0bf916  jal         func_2FE458
label_429cb8:
    if (ctx->pc == 0x429CB8u) {
        ctx->pc = 0x429CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429CB4u;
        // 0x429cb8: 0x24a507ff  addiu       $a1, $a1, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429CBCu;
        goto label_429cbc;
    }
    ctx->pc = 0x429CB4u;
    SET_GPR_U32(ctx, 31, 0x429CBCu);
    ctx->pc = 0x429CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429CB4u;
    // 0x429cb8: 0x24a507ff  addiu       $a1, $a1, 0x7FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x429CB4u, 0x429CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429CBCu;
label_429cbc:
    // 0x429cbc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x429cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_429cc0:
    // 0x429cc0: 0xa380be90  sb          $zero, -0x4170($gp)
    ctx->pc = 0x429cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950544), (uint8_t)GPR_U32(ctx, 0));
label_429cc4:
    // 0x429cc4: 0xaf82be3c  sw          $v0, -0x41C4($gp)
    ctx->pc = 0x429cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950460), GPR_U32(ctx, 2));
label_429cc8:
    // 0x429cc8: 0xaf80be40  sw          $zero, -0x41C0($gp)
    ctx->pc = 0x429cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950464), GPR_U32(ctx, 0));
label_429ccc:
    // 0x429ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x429cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_429cd0:
    // 0x429cd0: 0xaf80be44  sw          $zero, -0x41BC($gp)
    ctx->pc = 0x429cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950468), GPR_U32(ctx, 0));
label_429cd4:
    // 0x429cd4: 0xaf80be48  sw          $zero, -0x41B8($gp)
    ctx->pc = 0x429cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950472), GPR_U32(ctx, 0));
label_429cd8:
    // 0x429cd8: 0xaf80be4c  sw          $zero, -0x41B4($gp)
    ctx->pc = 0x429cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950476), GPR_U32(ctx, 0));
label_429cdc:
    // 0x429cdc: 0xa380be2f  sb          $zero, -0x41D1($gp)
    ctx->pc = 0x429cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950447), (uint8_t)GPR_U32(ctx, 0));
label_429ce0:
    // 0x429ce0: 0xaf80be28  sw          $zero, -0x41D8($gp)
    ctx->pc = 0x429ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950440), GPR_U32(ctx, 0));
label_429ce4:
    // 0x429ce4: 0xa380bea0  sb          $zero, -0x4160($gp)
    ctx->pc = 0x429ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950560), (uint8_t)GPR_U32(ctx, 0));
label_429ce8:
    // 0x429ce8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x429ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_429cec:
    // 0x429cec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x429cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_429cf0:
    // 0x429cf0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x429cf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_429cf4:
    // 0x429cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x429cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_429cf8:
    // 0x429cf8: 0x3e00008  jr          $ra
label_429cfc:
    if (ctx->pc == 0x429CFCu) {
        ctx->pc = 0x429CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429CF8u;
        // 0x429cfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429D00u;
        goto label_429d00;
    }
    ctx->pc = 0x429CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429CF8u;
        // 0x429cfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429D00u;
label_429d00:
    // 0x429d00: 0x3e00008  jr          $ra
label_429d04:
    if (ctx->pc == 0x429D04u) {
        ctx->pc = 0x429D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429D00u;
        // 0x429d04: 0xaf84ade0  sw          $a0, -0x5220($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429D08u;
        goto label_fallthrough_0x429d00;
    }
    ctx->pc = 0x429D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429D00u;
        // 0x429d04: 0xaf84ade0  sw          $a0, -0x5220($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x429d00:
    ctx->pc = 0x429D08u;
}
