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

// Function: sub_003A9A58
// Address: 0x3a9a58 - 0x3a9da8
void sub_003A9A58_0x3a9a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9A58_0x3a9a58");
#endif

    switch (ctx->pc) {
        case 0x3a9a58u: goto label_3a9a58;
        case 0x3a9a5cu: goto label_3a9a5c;
        case 0x3a9a60u: goto label_3a9a60;
        case 0x3a9a64u: goto label_3a9a64;
        case 0x3a9a68u: goto label_3a9a68;
        case 0x3a9a6cu: goto label_3a9a6c;
        case 0x3a9a70u: goto label_3a9a70;
        case 0x3a9a74u: goto label_3a9a74;
        case 0x3a9a78u: goto label_3a9a78;
        case 0x3a9a7cu: goto label_3a9a7c;
        case 0x3a9a80u: goto label_3a9a80;
        case 0x3a9a84u: goto label_3a9a84;
        case 0x3a9a88u: goto label_3a9a88;
        case 0x3a9a8cu: goto label_3a9a8c;
        case 0x3a9a90u: goto label_3a9a90;
        case 0x3a9a94u: goto label_3a9a94;
        case 0x3a9a98u: goto label_3a9a98;
        case 0x3a9a9cu: goto label_3a9a9c;
        case 0x3a9aa0u: goto label_3a9aa0;
        case 0x3a9aa4u: goto label_3a9aa4;
        case 0x3a9aa8u: goto label_3a9aa8;
        case 0x3a9aacu: goto label_3a9aac;
        case 0x3a9ab0u: goto label_3a9ab0;
        case 0x3a9ab4u: goto label_3a9ab4;
        case 0x3a9ab8u: goto label_3a9ab8;
        case 0x3a9abcu: goto label_3a9abc;
        case 0x3a9ac0u: goto label_3a9ac0;
        case 0x3a9ac4u: goto label_3a9ac4;
        case 0x3a9ac8u: goto label_3a9ac8;
        case 0x3a9accu: goto label_3a9acc;
        case 0x3a9ad0u: goto label_3a9ad0;
        case 0x3a9ad4u: goto label_3a9ad4;
        case 0x3a9ad8u: goto label_3a9ad8;
        case 0x3a9adcu: goto label_3a9adc;
        case 0x3a9ae0u: goto label_3a9ae0;
        case 0x3a9ae4u: goto label_3a9ae4;
        case 0x3a9ae8u: goto label_3a9ae8;
        case 0x3a9aecu: goto label_3a9aec;
        case 0x3a9af0u: goto label_3a9af0;
        case 0x3a9af4u: goto label_3a9af4;
        case 0x3a9af8u: goto label_3a9af8;
        case 0x3a9afcu: goto label_3a9afc;
        case 0x3a9b00u: goto label_3a9b00;
        case 0x3a9b04u: goto label_3a9b04;
        case 0x3a9b08u: goto label_3a9b08;
        case 0x3a9b0cu: goto label_3a9b0c;
        case 0x3a9b10u: goto label_3a9b10;
        case 0x3a9b14u: goto label_3a9b14;
        case 0x3a9b18u: goto label_3a9b18;
        case 0x3a9b1cu: goto label_3a9b1c;
        case 0x3a9b20u: goto label_3a9b20;
        case 0x3a9b24u: goto label_3a9b24;
        case 0x3a9b28u: goto label_3a9b28;
        case 0x3a9b2cu: goto label_3a9b2c;
        case 0x3a9b30u: goto label_3a9b30;
        case 0x3a9b34u: goto label_3a9b34;
        case 0x3a9b38u: goto label_3a9b38;
        case 0x3a9b3cu: goto label_3a9b3c;
        case 0x3a9b40u: goto label_3a9b40;
        case 0x3a9b44u: goto label_3a9b44;
        case 0x3a9b48u: goto label_3a9b48;
        case 0x3a9b4cu: goto label_3a9b4c;
        case 0x3a9b50u: goto label_3a9b50;
        case 0x3a9b54u: goto label_3a9b54;
        case 0x3a9b58u: goto label_3a9b58;
        case 0x3a9b5cu: goto label_3a9b5c;
        case 0x3a9b60u: goto label_3a9b60;
        case 0x3a9b64u: goto label_3a9b64;
        case 0x3a9b68u: goto label_3a9b68;
        case 0x3a9b6cu: goto label_3a9b6c;
        case 0x3a9b70u: goto label_3a9b70;
        case 0x3a9b74u: goto label_3a9b74;
        case 0x3a9b78u: goto label_3a9b78;
        case 0x3a9b7cu: goto label_3a9b7c;
        case 0x3a9b80u: goto label_3a9b80;
        case 0x3a9b84u: goto label_3a9b84;
        case 0x3a9b88u: goto label_3a9b88;
        case 0x3a9b8cu: goto label_3a9b8c;
        case 0x3a9b90u: goto label_3a9b90;
        case 0x3a9b94u: goto label_3a9b94;
        case 0x3a9b98u: goto label_3a9b98;
        case 0x3a9b9cu: goto label_3a9b9c;
        case 0x3a9ba0u: goto label_3a9ba0;
        case 0x3a9ba4u: goto label_3a9ba4;
        case 0x3a9ba8u: goto label_3a9ba8;
        case 0x3a9bacu: goto label_3a9bac;
        case 0x3a9bb0u: goto label_3a9bb0;
        case 0x3a9bb4u: goto label_3a9bb4;
        case 0x3a9bb8u: goto label_3a9bb8;
        case 0x3a9bbcu: goto label_3a9bbc;
        case 0x3a9bc0u: goto label_3a9bc0;
        case 0x3a9bc4u: goto label_3a9bc4;
        case 0x3a9bc8u: goto label_3a9bc8;
        case 0x3a9bccu: goto label_3a9bcc;
        case 0x3a9bd0u: goto label_3a9bd0;
        case 0x3a9bd4u: goto label_3a9bd4;
        case 0x3a9bd8u: goto label_3a9bd8;
        case 0x3a9bdcu: goto label_3a9bdc;
        case 0x3a9be0u: goto label_3a9be0;
        case 0x3a9be4u: goto label_3a9be4;
        case 0x3a9be8u: goto label_3a9be8;
        case 0x3a9becu: goto label_3a9bec;
        case 0x3a9bf0u: goto label_3a9bf0;
        case 0x3a9bf4u: goto label_3a9bf4;
        case 0x3a9bf8u: goto label_3a9bf8;
        case 0x3a9bfcu: goto label_3a9bfc;
        case 0x3a9c00u: goto label_3a9c00;
        case 0x3a9c04u: goto label_3a9c04;
        case 0x3a9c08u: goto label_3a9c08;
        case 0x3a9c0cu: goto label_3a9c0c;
        case 0x3a9c10u: goto label_3a9c10;
        case 0x3a9c14u: goto label_3a9c14;
        case 0x3a9c18u: goto label_3a9c18;
        case 0x3a9c1cu: goto label_3a9c1c;
        case 0x3a9c20u: goto label_3a9c20;
        case 0x3a9c24u: goto label_3a9c24;
        case 0x3a9c28u: goto label_3a9c28;
        case 0x3a9c2cu: goto label_3a9c2c;
        case 0x3a9c30u: goto label_3a9c30;
        case 0x3a9c34u: goto label_3a9c34;
        case 0x3a9c38u: goto label_3a9c38;
        case 0x3a9c3cu: goto label_3a9c3c;
        case 0x3a9c40u: goto label_3a9c40;
        case 0x3a9c44u: goto label_3a9c44;
        case 0x3a9c48u: goto label_3a9c48;
        case 0x3a9c4cu: goto label_3a9c4c;
        case 0x3a9c50u: goto label_3a9c50;
        case 0x3a9c54u: goto label_3a9c54;
        case 0x3a9c58u: goto label_3a9c58;
        case 0x3a9c5cu: goto label_3a9c5c;
        case 0x3a9c60u: goto label_3a9c60;
        case 0x3a9c64u: goto label_3a9c64;
        case 0x3a9c68u: goto label_3a9c68;
        case 0x3a9c6cu: goto label_3a9c6c;
        case 0x3a9c70u: goto label_3a9c70;
        case 0x3a9c74u: goto label_3a9c74;
        case 0x3a9c78u: goto label_3a9c78;
        case 0x3a9c7cu: goto label_3a9c7c;
        case 0x3a9c80u: goto label_3a9c80;
        case 0x3a9c84u: goto label_3a9c84;
        case 0x3a9c88u: goto label_3a9c88;
        case 0x3a9c8cu: goto label_3a9c8c;
        case 0x3a9c90u: goto label_3a9c90;
        case 0x3a9c94u: goto label_3a9c94;
        case 0x3a9c98u: goto label_3a9c98;
        case 0x3a9c9cu: goto label_3a9c9c;
        case 0x3a9ca0u: goto label_3a9ca0;
        case 0x3a9ca4u: goto label_3a9ca4;
        case 0x3a9ca8u: goto label_3a9ca8;
        case 0x3a9cacu: goto label_3a9cac;
        case 0x3a9cb0u: goto label_3a9cb0;
        case 0x3a9cb4u: goto label_3a9cb4;
        case 0x3a9cb8u: goto label_3a9cb8;
        case 0x3a9cbcu: goto label_3a9cbc;
        case 0x3a9cc0u: goto label_3a9cc0;
        case 0x3a9cc4u: goto label_3a9cc4;
        case 0x3a9cc8u: goto label_3a9cc8;
        case 0x3a9cccu: goto label_3a9ccc;
        case 0x3a9cd0u: goto label_3a9cd0;
        case 0x3a9cd4u: goto label_3a9cd4;
        case 0x3a9cd8u: goto label_3a9cd8;
        case 0x3a9cdcu: goto label_3a9cdc;
        case 0x3a9ce0u: goto label_3a9ce0;
        case 0x3a9ce4u: goto label_3a9ce4;
        case 0x3a9ce8u: goto label_3a9ce8;
        case 0x3a9cecu: goto label_3a9cec;
        case 0x3a9cf0u: goto label_3a9cf0;
        case 0x3a9cf4u: goto label_3a9cf4;
        case 0x3a9cf8u: goto label_3a9cf8;
        case 0x3a9cfcu: goto label_3a9cfc;
        case 0x3a9d00u: goto label_3a9d00;
        case 0x3a9d04u: goto label_3a9d04;
        case 0x3a9d08u: goto label_3a9d08;
        case 0x3a9d0cu: goto label_3a9d0c;
        case 0x3a9d10u: goto label_3a9d10;
        case 0x3a9d14u: goto label_3a9d14;
        case 0x3a9d18u: goto label_3a9d18;
        case 0x3a9d1cu: goto label_3a9d1c;
        case 0x3a9d20u: goto label_3a9d20;
        case 0x3a9d24u: goto label_3a9d24;
        case 0x3a9d28u: goto label_3a9d28;
        case 0x3a9d2cu: goto label_3a9d2c;
        case 0x3a9d30u: goto label_3a9d30;
        case 0x3a9d34u: goto label_3a9d34;
        case 0x3a9d38u: goto label_3a9d38;
        case 0x3a9d3cu: goto label_3a9d3c;
        case 0x3a9d40u: goto label_3a9d40;
        case 0x3a9d44u: goto label_3a9d44;
        case 0x3a9d48u: goto label_3a9d48;
        case 0x3a9d4cu: goto label_3a9d4c;
        case 0x3a9d50u: goto label_3a9d50;
        case 0x3a9d54u: goto label_3a9d54;
        case 0x3a9d58u: goto label_3a9d58;
        case 0x3a9d5cu: goto label_3a9d5c;
        case 0x3a9d60u: goto label_3a9d60;
        case 0x3a9d64u: goto label_3a9d64;
        case 0x3a9d68u: goto label_3a9d68;
        case 0x3a9d6cu: goto label_3a9d6c;
        case 0x3a9d70u: goto label_3a9d70;
        case 0x3a9d74u: goto label_3a9d74;
        case 0x3a9d78u: goto label_3a9d78;
        case 0x3a9d7cu: goto label_3a9d7c;
        case 0x3a9d80u: goto label_3a9d80;
        case 0x3a9d84u: goto label_3a9d84;
        case 0x3a9d88u: goto label_3a9d88;
        case 0x3a9d8cu: goto label_3a9d8c;
        case 0x3a9d90u: goto label_3a9d90;
        case 0x3a9d94u: goto label_3a9d94;
        case 0x3a9d98u: goto label_3a9d98;
        case 0x3a9d9cu: goto label_3a9d9c;
        case 0x3a9da0u: goto label_3a9da0;
        case 0x3a9da4u: goto label_3a9da4;
        default: break;
    }

    ctx->pc = 0x3a9a58u;

label_3a9a58:
    // 0x3a9a58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a9a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3a9a5c:
    // 0x3a9a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a9a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9a60:
    // 0x3a9a60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a9a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3a9a64:
    // 0x3a9a64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a9a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a9a68:
    // 0x3a9a68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a9a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9a6c:
    // 0x3a9a6c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a9a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3a9a70:
    // 0x3a9a70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a9a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3a9a74:
    // 0x3a9a74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a9a74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a9a78:
    // 0x3a9a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a9a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a9a7c:
    // 0x3a9a7c: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x3a9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_3a9a80:
    // 0x3a9a80: 0x18400048  blez        $v0, . + 4 + (0x48 << 2)
label_3a9a84:
    if (ctx->pc == 0x3A9A84u) {
        ctx->pc = 0x3A9A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A80u;
        // 0x3a9a84: 0x3412ffff  ori         $s2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9A88u;
        goto label_3a9a88;
    }
    ctx->pc = 0x3A9A80u;
    {
        const bool branch_taken_0x3a9a80 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3A9A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A80u;
        // 0x3a9a84: 0x3412ffff  ori         $s2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9a80) {
            ctx->pc = 0x3A9BA4u;
            goto label_3a9ba4;
        }
    }
    ctx->pc = 0x3A9A88u;
label_3a9a88:
    // 0x3a9a88: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a9a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a9a8c:
    // 0x3a9a8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a9a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9a90:
    // 0x3a9a90: 0x8c67dbf4  lw          $a3, -0x240C($v1)
    ctx->pc = 0x3a9a90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958068)));
label_3a9a94:
    // 0x3a9a94: 0x41023  negu        $v0, $a0
    ctx->pc = 0x3a9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_3a9a98:
    // 0x3a9a98: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3a9a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3a9a9c:
    // 0x3a9a9c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_3a9aa0:
    if (ctx->pc == 0x3A9AA0u) {
        ctx->pc = 0x3A9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A9Cu;
        // 0x3a9aa0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9AA4u;
        goto label_3a9aa4;
    }
    ctx->pc = 0x3A9A9Cu;
    {
        const bool branch_taken_0x3a9a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A9Cu;
        // 0x3a9aa0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9a9c) {
            ctx->pc = 0x3A9B28u;
            goto label_3a9b28;
        }
    }
    ctx->pc = 0x3A9AA4u;
label_3a9aa4:
    // 0x3a9aa4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3a9aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3a9aa8:
    // 0x3a9aa8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3a9aac:
    if (ctx->pc == 0x3A9AACu) {
        ctx->pc = 0x3A9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AA8u;
        // 0x3a9aac: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9AB0u;
        goto label_3a9ab0;
    }
    ctx->pc = 0x3A9AA8u;
    {
        const bool branch_taken_0x3a9aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AA8u;
        // 0x3a9aac: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9aa8) {
            ctx->pc = 0x3A9B00u;
            goto label_3a9b00;
        }
    }
    ctx->pc = 0x3A9AB0u;
label_3a9ab0:
    // 0x3a9ab0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3a9ab4:
    if (ctx->pc == 0x3A9AB4u) {
        ctx->pc = 0x3A9AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AB0u;
        // 0x3a9ab4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9AB8u;
        goto label_3a9ab8;
    }
    ctx->pc = 0x3A9AB0u;
    {
        const bool branch_taken_0x3a9ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9ab0) {
            ctx->pc = 0x3A9AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9AB0u;
            // 0x3a9ab4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9AE0u;
            goto label_3a9ae0;
        }
    }
    ctx->pc = 0x3A9AB8u;
label_3a9ab8:
    // 0x3a9ab8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3a9ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3a9abc:
    // 0x3a9abc: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_3a9ac0:
    if (ctx->pc == 0x3A9AC0u) {
        ctx->pc = 0x3A9AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9ABCu;
        // 0x3a9ac0: 0xa3102a  slt         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9AC4u;
        goto label_3a9ac4;
    }
    ctx->pc = 0x3A9ABCu;
    {
        const bool branch_taken_0x3a9abc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A9AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9ABCu;
        // 0x3a9ac0: 0xa3102a  slt         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9abc) {
            ctx->pc = 0x3A9AD4u;
            goto label_3a9ad4;
        }
    }
    ctx->pc = 0x3A9AC4u;
label_3a9ac4:
    // 0x3a9ac4: 0x72282a  slt         $a1, $v1, $s2
    ctx->pc = 0x3a9ac4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3a9ac8:
    // 0x3a9ac8: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3a9ac8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3a9acc:
    // 0x3a9acc: 0x65900b  movn        $s2, $v1, $a1
    ctx->pc = 0x3a9accu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3a9ad0:
    // 0x3a9ad0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a9ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9ad4:
    // 0x3a9ad4: 0x24e60004  addiu       $a2, $a3, 0x4
    ctx->pc = 0x3a9ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3a9ad8:
    // 0x3a9ad8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3a9ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3a9adc:
    // 0x3a9adc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3a9adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a9ae0:
    // 0x3a9ae0: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_3a9ae4:
    if (ctx->pc == 0x3A9AE4u) {
        ctx->pc = 0x3A9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AE0u;
        // 0x3a9ae4: 0x203102a  slt         $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9AE8u;
        goto label_3a9ae8;
    }
    ctx->pc = 0x3A9AE0u;
    {
        const bool branch_taken_0x3a9ae0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AE0u;
        // 0x3a9ae4: 0x203102a  slt         $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ae0) {
            ctx->pc = 0x3A9AF8u;
            goto label_3a9af8;
        }
    }
    ctx->pc = 0x3A9AE8u;
label_3a9ae8:
    // 0x3a9ae8: 0x72282a  slt         $a1, $v1, $s2
    ctx->pc = 0x3a9ae8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3a9aec:
    // 0x3a9aec: 0x65900b  movn        $s2, $v1, $a1
    ctx->pc = 0x3a9aecu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3a9af0:
    // 0x3a9af0: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3a9af0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3a9af4:
    // 0x3a9af4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a9af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9af8:
    // 0x3a9af8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3a9af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3a9afc:
    // 0x3a9afc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3a9afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3a9b00:
    // 0x3a9b00: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3a9b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a9b04:
    // 0x3a9b04: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_3a9b08:
    if (ctx->pc == 0x3A9B08u) {
        ctx->pc = 0x3A9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B04u;
        // 0x3a9b08: 0x203102a  slt         $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9B0Cu;
        goto label_3a9b0c;
    }
    ctx->pc = 0x3A9B04u;
    {
        const bool branch_taken_0x3a9b04 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B04u;
        // 0x3a9b08: 0x203102a  slt         $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b04) {
            ctx->pc = 0x3A9B1Cu;
            goto label_3a9b1c;
        }
    }
    ctx->pc = 0x3A9B0Cu;
label_3a9b0c:
    // 0x3a9b0c: 0x72282a  slt         $a1, $v1, $s2
    ctx->pc = 0x3a9b0cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3a9b10:
    // 0x3a9b10: 0x65900b  movn        $s2, $v1, $a1
    ctx->pc = 0x3a9b10u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3a9b14:
    // 0x3a9b14: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3a9b14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3a9b18:
    // 0x3a9b18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a9b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9b1c:
    // 0x3a9b1c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3a9b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3a9b20:
    // 0x3a9b20: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_3a9b24:
    if (ctx->pc == 0x3A9B24u) {
        ctx->pc = 0x3A9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B20u;
        // 0x3a9b24: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9B28u;
        goto label_3a9b28;
    }
    ctx->pc = 0x3A9B20u;
    {
        const bool branch_taken_0x3a9b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B20u;
        // 0x3a9b24: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b20) {
            ctx->pc = 0x3A9BA4u;
            goto label_3a9ba4;
        }
    }
    ctx->pc = 0x3A9B28u;
label_3a9b28:
    // 0x3a9b28: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3a9b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a9b2c:
    // 0x3a9b2c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_3a9b30:
    if (ctx->pc == 0x3A9B30u) {
        ctx->pc = 0x3A9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B2Cu;
        // 0x3a9b30: 0x203102a  slt         $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9B34u;
        goto label_3a9b34;
    }
    ctx->pc = 0x3A9B2Cu;
    {
        const bool branch_taken_0x3a9b2c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A9B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B2Cu;
        // 0x3a9b30: 0x203102a  slt         $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b2c) {
            ctx->pc = 0x3A9B44u;
            goto label_3a9b44;
        }
    }
    ctx->pc = 0x3A9B34u;
label_3a9b34:
    // 0x3a9b34: 0x72282a  slt         $a1, $v1, $s2
    ctx->pc = 0x3a9b34u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3a9b38:
    // 0x3a9b38: 0x65900b  movn        $s2, $v1, $a1
    ctx->pc = 0x3a9b38u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3a9b3c:
    // 0x3a9b3c: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3a9b3cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3a9b40:
    // 0x3a9b40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a9b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9b44:
    // 0x3a9b44: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3a9b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3a9b48:
    // 0x3a9b48: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_3a9b4c:
    if (ctx->pc == 0x3A9B4Cu) {
        ctx->pc = 0x3A9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B48u;
        // 0x3a9b4c: 0x203102a  slt         $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9B50u;
        goto label_3a9b50;
    }
    ctx->pc = 0x3A9B48u;
    {
        const bool branch_taken_0x3a9b48 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B48u;
        // 0x3a9b4c: 0x203102a  slt         $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b48) {
            ctx->pc = 0x3A9B60u;
            goto label_3a9b60;
        }
    }
    ctx->pc = 0x3A9B50u;
label_3a9b50:
    // 0x3a9b50: 0x72282a  slt         $a1, $v1, $s2
    ctx->pc = 0x3a9b50u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3a9b54:
    // 0x3a9b54: 0x65900b  movn        $s2, $v1, $a1
    ctx->pc = 0x3a9b54u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3a9b58:
    // 0x3a9b58: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3a9b58u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3a9b5c:
    // 0x3a9b5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a9b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9b60:
    // 0x3a9b60: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3a9b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3a9b64:
    // 0x3a9b64: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_3a9b68:
    if (ctx->pc == 0x3A9B68u) {
        ctx->pc = 0x3A9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B64u;
        // 0x3a9b68: 0x203102a  slt         $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9B6Cu;
        goto label_3a9b6c;
    }
    ctx->pc = 0x3A9B64u;
    {
        const bool branch_taken_0x3a9b64 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B64u;
        // 0x3a9b68: 0x203102a  slt         $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b64) {
            ctx->pc = 0x3A9B7Cu;
            goto label_3a9b7c;
        }
    }
    ctx->pc = 0x3A9B6Cu;
label_3a9b6c:
    // 0x3a9b6c: 0x72282a  slt         $a1, $v1, $s2
    ctx->pc = 0x3a9b6cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3a9b70:
    // 0x3a9b70: 0x65900b  movn        $s2, $v1, $a1
    ctx->pc = 0x3a9b70u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3a9b74:
    // 0x3a9b74: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3a9b74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3a9b78:
    // 0x3a9b78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a9b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9b7c:
    // 0x3a9b7c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x3a9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3a9b80:
    // 0x3a9b80: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_3a9b84:
    if (ctx->pc == 0x3A9B84u) {
        ctx->pc = 0x3A9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B80u;
        // 0x3a9b84: 0x203102a  slt         $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9B88u;
        goto label_3a9b88;
    }
    ctx->pc = 0x3A9B80u;
    {
        const bool branch_taken_0x3a9b80 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A9B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B80u;
        // 0x3a9b84: 0x203102a  slt         $v0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b80) {
            ctx->pc = 0x3A9B98u;
            goto label_3a9b98;
        }
    }
    ctx->pc = 0x3A9B88u;
label_3a9b88:
    // 0x3a9b88: 0x72282a  slt         $a1, $v1, $s2
    ctx->pc = 0x3a9b88u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_3a9b8c:
    // 0x3a9b8c: 0x65900b  movn        $s2, $v1, $a1
    ctx->pc = 0x3a9b8cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_3a9b90:
    // 0x3a9b90: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3a9b90u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3a9b94:
    // 0x3a9b94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a9b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9b98:
    // 0x3a9b98: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3a9b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_3a9b9c:
    // 0x3a9b9c: 0x1480ffe2  bnez        $a0, . + 4 + (-0x1E << 2)
label_3a9ba0:
    if (ctx->pc == 0x3A9BA0u) {
        ctx->pc = 0x3A9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B9Cu;
        // 0x3a9ba0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9BA4u;
        goto label_3a9ba4;
    }
    ctx->pc = 0x3A9B9Cu;
    {
        const bool branch_taken_0x3a9b9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B9Cu;
        // 0x3a9ba0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b9c) {
            ctx->pc = 0x3A9B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9b28;
        }
    }
    ctx->pc = 0x3A9BA4u;
label_3a9ba4:
    // 0x3a9ba4: 0x18a00077  blez        $a1, . + 4 + (0x77 << 2)
label_3a9ba8:
    if (ctx->pc == 0x3A9BA8u) {
        ctx->pc = 0x3A9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BA4u;
        // 0x3a9ba8: 0x2128023  subu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9BACu;
        goto label_3a9bac;
    }
    ctx->pc = 0x3A9BA4u;
    {
        const bool branch_taken_0x3a9ba4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3A9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BA4u;
        // 0x3a9ba8: 0x2128023  subu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ba4) {
            ctx->pc = 0x3A9D84u;
            goto label_3a9d84;
        }
    }
    ctx->pc = 0x3A9BACu;
label_3a9bac:
    // 0x3a9bac: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a9bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a9bb0:
    // 0x3a9bb0: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x3a9bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3a9bb4:
    // 0x3a9bb4: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3a9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3a9bb8:
    // 0x3a9bb8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3a9bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3a9bbc:
    // 0x3a9bbc: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x3a9bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_3a9bc0:
    // 0x3a9bc0: 0x40f809  jalr        $v0
label_3a9bc4:
    if (ctx->pc == 0x3A9BC4u) {
        ctx->pc = 0x3A9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BC0u;
        // 0x3a9bc4: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9BC8u;
        goto label_3a9bc8;
    }
    ctx->pc = 0x3A9BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9BC8u);
        ctx->pc = 0x3A9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BC0u;
        // 0x3a9bc4: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9BC0u, 0x3A9BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9BC8u;
label_3a9bc8:
    // 0x3a9bc8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3a9bc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9bcc:
    // 0x3a9bcc: 0x10e0006e  beqz        $a3, . + 4 + (0x6E << 2)
label_3a9bd0:
    if (ctx->pc == 0x3A9BD0u) {
        ctx->pc = 0x3A9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BCCu;
        // 0x3a9bd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9BD4u;
        goto label_3a9bd4;
    }
    ctx->pc = 0x3A9BCCu;
    {
        const bool branch_taken_0x3a9bcc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BCCu;
        // 0x3a9bd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9bcc) {
            ctx->pc = 0x3A9D88u;
            goto label_3a9d88;
        }
    }
    ctx->pc = 0x3A9BD4u;
label_3a9bd4:
    // 0x3a9bd4: 0x1a20001d  blez        $s1, . + 4 + (0x1D << 2)
label_3a9bd8:
    if (ctx->pc == 0x3A9BD8u) {
        ctx->pc = 0x3A9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BD4u;
        // 0x3a9bd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9BDCu;
        goto label_3a9bdc;
    }
    ctx->pc = 0x3A9BD4u;
    {
        const bool branch_taken_0x3a9bd4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3A9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BD4u;
        // 0x3a9bd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9bd4) {
            ctx->pc = 0x3A9C4Cu;
            goto label_3a9c4c;
        }
    }
    ctx->pc = 0x3A9BDCu;
label_3a9bdc:
    // 0x3a9bdc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a9bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a9be0:
    // 0x3a9be0: 0x41023  negu        $v0, $a0
    ctx->pc = 0x3a9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_3a9be4:
    // 0x3a9be4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3a9be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3a9be8:
    // 0x3a9be8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_3a9bec:
    if (ctx->pc == 0x3A9BECu) {
        ctx->pc = 0x3A9BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BE8u;
        // 0x3a9bec: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9BF0u;
        goto label_3a9bf0;
    }
    ctx->pc = 0x3A9BE8u;
    {
        const bool branch_taken_0x3a9be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BE8u;
        // 0x3a9bec: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9be8) {
            ctx->pc = 0x3A9C2Cu;
            goto label_3a9c2c;
        }
    }
    ctx->pc = 0x3A9BF0u;
label_3a9bf0:
    // 0x3a9bf0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3a9bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3a9bf4:
    // 0x3a9bf4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3a9bf8:
    if (ctx->pc == 0x3A9BF8u) {
        ctx->pc = 0x3A9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BF4u;
        // 0x3a9bf8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9BFCu;
        goto label_3a9bfc;
    }
    ctx->pc = 0x3A9BF4u;
    {
        const bool branch_taken_0x3a9bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BF4u;
        // 0x3a9bf8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9bf4) {
            ctx->pc = 0x3A9C1Cu;
            goto label_3a9c1c;
        }
    }
    ctx->pc = 0x3A9BFCu;
label_3a9bfc:
    // 0x3a9bfc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a9c00:
    if (ctx->pc == 0x3A9C00u) {
        ctx->pc = 0x3A9C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BFCu;
        // 0x3a9c00: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C04u;
        goto label_3a9c04;
    }
    ctx->pc = 0x3A9BFCu;
    {
        const bool branch_taken_0x3a9bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9bfc) {
            ctx->pc = 0x3A9C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9BFCu;
            // 0x3a9c00: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9C14u;
            goto label_3a9c14;
        }
    }
    ctx->pc = 0x3A9C04u;
label_3a9c04:
    // 0x3a9c04: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x3a9c04u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
label_3a9c08:
    // 0x3a9c08: 0x24e50002  addiu       $a1, $a3, 0x2
    ctx->pc = 0x3a9c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3a9c0c:
    // 0x3a9c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9c10:
    // 0x3a9c10: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x3a9c10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
label_3a9c14:
    // 0x3a9c14: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3a9c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3a9c18:
    // 0x3a9c18: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a9c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_3a9c1c:
    // 0x3a9c1c: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x3a9c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
label_3a9c20:
    // 0x3a9c20: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3a9c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3a9c24:
    // 0x3a9c24: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_3a9c28:
    if (ctx->pc == 0x3A9C28u) {
        ctx->pc = 0x3A9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C24u;
        // 0x3a9c28: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C2Cu;
        goto label_3a9c2c;
    }
    ctx->pc = 0x3A9C24u;
    {
        const bool branch_taken_0x3a9c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C24u;
        // 0x3a9c28: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9c24) {
            ctx->pc = 0x3A9C4Cu;
            goto label_3a9c4c;
        }
    }
    ctx->pc = 0x3A9C2Cu;
label_3a9c2c:
    // 0x3a9c2c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a9c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a9c30:
    // 0x3a9c30: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x3a9c30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
label_3a9c34:
    // 0x3a9c34: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3a9c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_3a9c38:
    // 0x3a9c38: 0xa4460002  sh          $a2, 0x2($v0)
    ctx->pc = 0x3a9c38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 6));
label_3a9c3c:
    // 0x3a9c3c: 0xa4460004  sh          $a2, 0x4($v0)
    ctx->pc = 0x3a9c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 6));
label_3a9c40:
    // 0x3a9c40: 0xa4460006  sh          $a2, 0x6($v0)
    ctx->pc = 0x3a9c40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 6));
label_3a9c44:
    // 0x3a9c44: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_3a9c48:
    if (ctx->pc == 0x3A9C48u) {
        ctx->pc = 0x3A9C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C44u;
        // 0x3a9c48: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C4Cu;
        goto label_3a9c4c;
    }
    ctx->pc = 0x3A9C44u;
    {
        const bool branch_taken_0x3a9c44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C44u;
        // 0x3a9c48: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9c44) {
            ctx->pc = 0x3A9C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9c30;
        }
    }
    ctx->pc = 0x3A9C4Cu;
label_3a9c4c:
    // 0x3a9c4c: 0x8e630130  lw          $v1, 0x130($s3)
    ctx->pc = 0x3a9c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_3a9c50:
    // 0x3a9c50: 0x18600048  blez        $v1, . + 4 + (0x48 << 2)
label_3a9c54:
    if (ctx->pc == 0x3A9C54u) {
        ctx->pc = 0x3A9C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C50u;
        // 0x3a9c54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C58u;
        goto label_3a9c58;
    }
    ctx->pc = 0x3A9C50u;
    {
        const bool branch_taken_0x3a9c50 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A9C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C50u;
        // 0x3a9c54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9c50) {
            ctx->pc = 0x3A9D74u;
            goto label_3a9d74;
        }
    }
    ctx->pc = 0x3A9C58u;
label_3a9c58:
    // 0x3a9c58: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a9c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3a9c5c:
    // 0x3a9c5c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x3a9c5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a9c60:
    // 0x3a9c60: 0x8c48dbf4  lw          $t0, -0x240C($v0)
    ctx->pc = 0x3a9c60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958068)));
label_3a9c64:
    // 0x3a9c64: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x3a9c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_3a9c68:
    // 0x3a9c68: 0x19200019  blez        $t1, . + 4 + (0x19 << 2)
label_3a9c6c:
    if (ctx->pc == 0x3A9C6Cu) {
        ctx->pc = 0x3A9C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C68u;
        // 0x3a9c6c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C70u;
        goto label_3a9c70;
    }
    ctx->pc = 0x3A9C68u;
    {
        const bool branch_taken_0x3a9c68 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3A9C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C68u;
        // 0x3a9c6c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9c68) {
            ctx->pc = 0x3A9CD0u;
            goto label_3a9cd0;
        }
    }
    ctx->pc = 0x3A9C70u;
label_3a9c70:
    // 0x3a9c70: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
label_3a9c74:
    if (ctx->pc == 0x3A9C74u) {
        ctx->pc = 0x3A9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C70u;
        // 0x3a9c74: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C78u;
        goto label_3a9c78;
    }
    ctx->pc = 0x3A9C70u;
    {
        const bool branch_taken_0x3a9c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9c70) {
            ctx->pc = 0x3A9C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9C70u;
            // 0x3a9c74: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9CFCu;
            goto label_3a9cfc;
        }
    }
    ctx->pc = 0x3A9C78u;
label_3a9c78:
    // 0x3a9c78: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3a9c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3a9c7c:
    // 0x3a9c7c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_3a9c80:
    if (ctx->pc == 0x3A9C80u) {
        ctx->pc = 0x3A9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C7Cu;
        // 0x3a9c80: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C84u;
        goto label_3a9c84;
    }
    ctx->pc = 0x3A9C7Cu;
    {
        const bool branch_taken_0x3a9c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9c7c) {
            ctx->pc = 0x3A9C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9C7Cu;
            // 0x3a9c80: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9CD4u;
            goto label_3a9cd4;
        }
    }
    ctx->pc = 0x3A9C84u;
label_3a9c84:
    // 0x3a9c84: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3a9c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3a9c88:
    // 0x3a9c88: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3a9c8c:
    if (ctx->pc == 0x3A9C8Cu) {
        ctx->pc = 0x3A9C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C88u;
        // 0x3a9c8c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C90u;
        goto label_3a9c90;
    }
    ctx->pc = 0x3A9C88u;
    {
        const bool branch_taken_0x3a9c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9c88) {
            ctx->pc = 0x3A9C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9C88u;
            // 0x3a9c8c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9CB4u;
            goto label_3a9cb4;
        }
    }
    ctx->pc = 0x3A9C90u;
label_3a9c90:
    // 0x3a9c90: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3a9c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3a9c94:
    // 0x3a9c94: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
label_3a9c98:
    if (ctx->pc == 0x3A9C98u) {
        ctx->pc = 0x3A9C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C94u;
        // 0x3a9c98: 0xb21023  subu        $v0, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9C9Cu;
        goto label_3a9c9c;
    }
    ctx->pc = 0x3A9C94u;
    {
        const bool branch_taken_0x3a9c94 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3A9C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C94u;
        // 0x3a9c98: 0xb21023  subu        $v0, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9c94) {
            ctx->pc = 0x3A9CA8u;
            goto label_3a9ca8;
        }
    }
    ctx->pc = 0x3A9C9Cu;
label_3a9c9c:
    // 0x3a9c9c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a9c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3a9ca0:
    // 0x3a9ca0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3a9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3a9ca4:
    // 0x3a9ca4: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x3a9ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_3a9ca8:
    // 0x3a9ca8: 0x25060004  addiu       $a2, $t0, 0x4
    ctx->pc = 0x3a9ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_3a9cac:
    // 0x3a9cac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a9cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9cb0:
    // 0x3a9cb0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3a9cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a9cb4:
    // 0x3a9cb4: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
label_3a9cb8:
    if (ctx->pc == 0x3A9CB8u) {
        ctx->pc = 0x3A9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CB4u;
        // 0x3a9cb8: 0xb21023  subu        $v0, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9CBCu;
        goto label_3a9cbc;
    }
    ctx->pc = 0x3A9CB4u;
    {
        const bool branch_taken_0x3a9cb4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3A9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CB4u;
        // 0x3a9cb8: 0xb21023  subu        $v0, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9cb4) {
            ctx->pc = 0x3A9CC8u;
            goto label_3a9cc8;
        }
    }
    ctx->pc = 0x3A9CBCu;
label_3a9cbc:
    // 0x3a9cbc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a9cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3a9cc0:
    // 0x3a9cc0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3a9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3a9cc4:
    // 0x3a9cc4: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x3a9cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_3a9cc8:
    // 0x3a9cc8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3a9cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3a9ccc:
    // 0x3a9ccc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a9cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3a9cd0:
    // 0x3a9cd0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3a9cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a9cd4:
    // 0x3a9cd4: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
label_3a9cd8:
    if (ctx->pc == 0x3A9CD8u) {
        ctx->pc = 0x3A9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CD4u;
        // 0x3a9cd8: 0xb21023  subu        $v0, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9CDCu;
        goto label_3a9cdc;
    }
    ctx->pc = 0x3A9CD4u;
    {
        const bool branch_taken_0x3a9cd4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3A9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CD4u;
        // 0x3a9cd8: 0xb21023  subu        $v0, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9cd4) {
            ctx->pc = 0x3A9CE8u;
            goto label_3a9ce8;
        }
    }
    ctx->pc = 0x3A9CDCu;
label_3a9cdc:
    // 0x3a9cdc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a9cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3a9ce0:
    // 0x3a9ce0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3a9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3a9ce4:
    // 0x3a9ce4: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x3a9ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_3a9ce8:
    // 0x3a9ce8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a9ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3a9cec:
    // 0x3a9cec: 0x89102a  slt         $v0, $a0, $t1
    ctx->pc = 0x3a9cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3a9cf0:
    // 0x3a9cf0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_3a9cf4:
    if (ctx->pc == 0x3A9CF4u) {
        ctx->pc = 0x3A9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CF0u;
        // 0x3a9cf4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9CF8u;
        goto label_3a9cf8;
    }
    ctx->pc = 0x3A9CF0u;
    {
        const bool branch_taken_0x3a9cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CF0u;
        // 0x3a9cf4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9cf0) {
            ctx->pc = 0x3A9D74u;
            goto label_3a9d74;
        }
    }
    ctx->pc = 0x3A9CF8u;
label_3a9cf8:
    // 0x3a9cf8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3a9cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a9cfc:
    // 0x3a9cfc: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
label_3a9d00:
    if (ctx->pc == 0x3A9D00u) {
        ctx->pc = 0x3A9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CFCu;
        // 0x3a9d00: 0xb21023  subu        $v0, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D04u;
        goto label_3a9d04;
    }
    ctx->pc = 0x3A9CFCu;
    {
        const bool branch_taken_0x3a9cfc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3A9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CFCu;
        // 0x3a9d00: 0xb21023  subu        $v0, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9cfc) {
            ctx->pc = 0x3A9D10u;
            goto label_3a9d10;
        }
    }
    ctx->pc = 0x3A9D04u;
label_3a9d04:
    // 0x3a9d04: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3a9d08:
    // 0x3a9d08: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3a9d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3a9d0c:
    // 0x3a9d0c: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x3a9d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_3a9d10:
    // 0x3a9d10: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x3a9d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3a9d14:
    // 0x3a9d14: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
label_3a9d18:
    if (ctx->pc == 0x3A9D18u) {
        ctx->pc = 0x3A9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D14u;
        // 0x3a9d18: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D1Cu;
        goto label_3a9d1c;
    }
    ctx->pc = 0x3A9D14u;
    {
        const bool branch_taken_0x3a9d14 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3A9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D14u;
        // 0x3a9d18: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9d14) {
            ctx->pc = 0x3A9D2Cu;
            goto label_3a9d2c;
        }
    }
    ctx->pc = 0x3A9D1Cu;
label_3a9d1c:
    // 0x3a9d1c: 0xb21023  subu        $v0, $a1, $s2
    ctx->pc = 0x3a9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_3a9d20:
    // 0x3a9d20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3a9d24:
    // 0x3a9d24: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3a9d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3a9d28:
    // 0x3a9d28: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3a9d28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_3a9d2c:
    // 0x3a9d2c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x3a9d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3a9d30:
    // 0x3a9d30: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
label_3a9d34:
    if (ctx->pc == 0x3A9D34u) {
        ctx->pc = 0x3A9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D30u;
        // 0x3a9d34: 0x24830002  addiu       $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D38u;
        goto label_3a9d38;
    }
    ctx->pc = 0x3A9D30u;
    {
        const bool branch_taken_0x3a9d30 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3A9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D30u;
        // 0x3a9d34: 0x24830002  addiu       $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9d30) {
            ctx->pc = 0x3A9D48u;
            goto label_3a9d48;
        }
    }
    ctx->pc = 0x3A9D38u;
label_3a9d38:
    // 0x3a9d38: 0xb21023  subu        $v0, $a1, $s2
    ctx->pc = 0x3a9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_3a9d3c:
    // 0x3a9d3c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a9d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3a9d40:
    // 0x3a9d40: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3a9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3a9d44:
    // 0x3a9d44: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3a9d44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_3a9d48:
    // 0x3a9d48: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x3a9d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3a9d4c:
    // 0x3a9d4c: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
label_3a9d50:
    if (ctx->pc == 0x3A9D50u) {
        ctx->pc = 0x3A9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D4Cu;
        // 0x3a9d50: 0x24830003  addiu       $v1, $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D54u;
        goto label_3a9d54;
    }
    ctx->pc = 0x3A9D4Cu;
    {
        const bool branch_taken_0x3a9d4c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3A9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D4Cu;
        // 0x3a9d50: 0x24830003  addiu       $v1, $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9d4c) {
            ctx->pc = 0x3A9D64u;
            goto label_3a9d64;
        }
    }
    ctx->pc = 0x3A9D54u;
label_3a9d54:
    // 0x3a9d54: 0xb21023  subu        $v0, $a1, $s2
    ctx->pc = 0x3a9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_3a9d58:
    // 0x3a9d58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3a9d5c:
    // 0x3a9d5c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3a9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3a9d60:
    // 0x3a9d60: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3a9d60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_3a9d64:
    // 0x3a9d64: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3a9d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3a9d68:
    // 0x3a9d68: 0x89102a  slt         $v0, $a0, $t1
    ctx->pc = 0x3a9d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_3a9d6c:
    // 0x3a9d6c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_3a9d70:
    if (ctx->pc == 0x3A9D70u) {
        ctx->pc = 0x3A9D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D6Cu;
        // 0x3a9d70: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9D74u;
        goto label_3a9d74;
    }
    ctx->pc = 0x3A9D6Cu;
    {
        const bool branch_taken_0x3a9d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D6Cu;
        // 0x3a9d70: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9d6c) {
            ctx->pc = 0x3A9CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9cf8;
        }
    }
    ctx->pc = 0x3A9D74u;
label_3a9d74:
    // 0x3a9d74: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x3a9d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3a9d78:
    // 0x3a9d78: 0xae720124  sw          $s2, 0x124($s3)
    ctx->pc = 0x3a9d78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 18));
label_3a9d7c:
    // 0x3a9d7c: 0xae620128  sw          $v0, 0x128($s3)
    ctx->pc = 0x3a9d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 296), GPR_U32(ctx, 2));
label_3a9d80:
    // 0x3a9d80: 0xae67012c  sw          $a3, 0x12C($s3)
    ctx->pc = 0x3a9d80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 300), GPR_U32(ctx, 7));
label_3a9d84:
    // 0x3a9d84: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3a9d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a9d88:
    // 0x3a9d88: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a9d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a9d8c:
    // 0x3a9d8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a9d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a9d90:
    // 0x3a9d90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a9d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9d94:
    // 0x3a9d94: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a9d94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a9d98:
    // 0x3a9d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a9d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a9d9c:
    // 0x3a9d9c: 0x3e00008  jr          $ra
label_3a9da0:
    if (ctx->pc == 0x3A9DA0u) {
        ctx->pc = 0x3A9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D9Cu;
        // 0x3a9da0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9DA4u;
        goto label_3a9da4;
    }
    ctx->pc = 0x3A9D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D9Cu;
        // 0x3a9da0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9DA4u;
label_3a9da4:
    // 0x3a9da4: 0x0  nop
    ctx->pc = 0x3a9da4u;
    // NOP
    ctx->pc = 0x3a9da8u;
}
