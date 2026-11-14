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

// Function: sub_00410B10
// Address: 0x410b10 - 0x410e20
void sub_00410B10_0x410b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00410B10_0x410b10");
#endif

    switch (ctx->pc) {
        case 0x410b10u: goto label_410b10;
        case 0x410b14u: goto label_410b14;
        case 0x410b18u: goto label_410b18;
        case 0x410b1cu: goto label_410b1c;
        case 0x410b20u: goto label_410b20;
        case 0x410b24u: goto label_410b24;
        case 0x410b28u: goto label_410b28;
        case 0x410b2cu: goto label_410b2c;
        case 0x410b30u: goto label_410b30;
        case 0x410b34u: goto label_410b34;
        case 0x410b38u: goto label_410b38;
        case 0x410b3cu: goto label_410b3c;
        case 0x410b40u: goto label_410b40;
        case 0x410b44u: goto label_410b44;
        case 0x410b48u: goto label_410b48;
        case 0x410b4cu: goto label_410b4c;
        case 0x410b50u: goto label_410b50;
        case 0x410b54u: goto label_410b54;
        case 0x410b58u: goto label_410b58;
        case 0x410b5cu: goto label_410b5c;
        case 0x410b60u: goto label_410b60;
        case 0x410b64u: goto label_410b64;
        case 0x410b68u: goto label_410b68;
        case 0x410b6cu: goto label_410b6c;
        case 0x410b70u: goto label_410b70;
        case 0x410b74u: goto label_410b74;
        case 0x410b78u: goto label_410b78;
        case 0x410b7cu: goto label_410b7c;
        case 0x410b80u: goto label_410b80;
        case 0x410b84u: goto label_410b84;
        case 0x410b88u: goto label_410b88;
        case 0x410b8cu: goto label_410b8c;
        case 0x410b90u: goto label_410b90;
        case 0x410b94u: goto label_410b94;
        case 0x410b98u: goto label_410b98;
        case 0x410b9cu: goto label_410b9c;
        case 0x410ba0u: goto label_410ba0;
        case 0x410ba4u: goto label_410ba4;
        case 0x410ba8u: goto label_410ba8;
        case 0x410bacu: goto label_410bac;
        case 0x410bb0u: goto label_410bb0;
        case 0x410bb4u: goto label_410bb4;
        case 0x410bb8u: goto label_410bb8;
        case 0x410bbcu: goto label_410bbc;
        case 0x410bc0u: goto label_410bc0;
        case 0x410bc4u: goto label_410bc4;
        case 0x410bc8u: goto label_410bc8;
        case 0x410bccu: goto label_410bcc;
        case 0x410bd0u: goto label_410bd0;
        case 0x410bd4u: goto label_410bd4;
        case 0x410bd8u: goto label_410bd8;
        case 0x410bdcu: goto label_410bdc;
        case 0x410be0u: goto label_410be0;
        case 0x410be4u: goto label_410be4;
        case 0x410be8u: goto label_410be8;
        case 0x410becu: goto label_410bec;
        case 0x410bf0u: goto label_410bf0;
        case 0x410bf4u: goto label_410bf4;
        case 0x410bf8u: goto label_410bf8;
        case 0x410bfcu: goto label_410bfc;
        case 0x410c00u: goto label_410c00;
        case 0x410c04u: goto label_410c04;
        case 0x410c08u: goto label_410c08;
        case 0x410c0cu: goto label_410c0c;
        case 0x410c10u: goto label_410c10;
        case 0x410c14u: goto label_410c14;
        case 0x410c18u: goto label_410c18;
        case 0x410c1cu: goto label_410c1c;
        case 0x410c20u: goto label_410c20;
        case 0x410c24u: goto label_410c24;
        case 0x410c28u: goto label_410c28;
        case 0x410c2cu: goto label_410c2c;
        case 0x410c30u: goto label_410c30;
        case 0x410c34u: goto label_410c34;
        case 0x410c38u: goto label_410c38;
        case 0x410c3cu: goto label_410c3c;
        case 0x410c40u: goto label_410c40;
        case 0x410c44u: goto label_410c44;
        case 0x410c48u: goto label_410c48;
        case 0x410c4cu: goto label_410c4c;
        case 0x410c50u: goto label_410c50;
        case 0x410c54u: goto label_410c54;
        case 0x410c58u: goto label_410c58;
        case 0x410c5cu: goto label_410c5c;
        case 0x410c60u: goto label_410c60;
        case 0x410c64u: goto label_410c64;
        case 0x410c68u: goto label_410c68;
        case 0x410c6cu: goto label_410c6c;
        case 0x410c70u: goto label_410c70;
        case 0x410c74u: goto label_410c74;
        case 0x410c78u: goto label_410c78;
        case 0x410c7cu: goto label_410c7c;
        case 0x410c80u: goto label_410c80;
        case 0x410c84u: goto label_410c84;
        case 0x410c88u: goto label_410c88;
        case 0x410c8cu: goto label_410c8c;
        case 0x410c90u: goto label_410c90;
        case 0x410c94u: goto label_410c94;
        case 0x410c98u: goto label_410c98;
        case 0x410c9cu: goto label_410c9c;
        case 0x410ca0u: goto label_410ca0;
        case 0x410ca4u: goto label_410ca4;
        case 0x410ca8u: goto label_410ca8;
        case 0x410cacu: goto label_410cac;
        case 0x410cb0u: goto label_410cb0;
        case 0x410cb4u: goto label_410cb4;
        case 0x410cb8u: goto label_410cb8;
        case 0x410cbcu: goto label_410cbc;
        case 0x410cc0u: goto label_410cc0;
        case 0x410cc4u: goto label_410cc4;
        case 0x410cc8u: goto label_410cc8;
        case 0x410cccu: goto label_410ccc;
        case 0x410cd0u: goto label_410cd0;
        case 0x410cd4u: goto label_410cd4;
        case 0x410cd8u: goto label_410cd8;
        case 0x410cdcu: goto label_410cdc;
        case 0x410ce0u: goto label_410ce0;
        case 0x410ce4u: goto label_410ce4;
        case 0x410ce8u: goto label_410ce8;
        case 0x410cecu: goto label_410cec;
        case 0x410cf0u: goto label_410cf0;
        case 0x410cf4u: goto label_410cf4;
        case 0x410cf8u: goto label_410cf8;
        case 0x410cfcu: goto label_410cfc;
        case 0x410d00u: goto label_410d00;
        case 0x410d04u: goto label_410d04;
        case 0x410d08u: goto label_410d08;
        case 0x410d0cu: goto label_410d0c;
        case 0x410d10u: goto label_410d10;
        case 0x410d14u: goto label_410d14;
        case 0x410d18u: goto label_410d18;
        case 0x410d1cu: goto label_410d1c;
        case 0x410d20u: goto label_410d20;
        case 0x410d24u: goto label_410d24;
        case 0x410d28u: goto label_410d28;
        case 0x410d2cu: goto label_410d2c;
        case 0x410d30u: goto label_410d30;
        case 0x410d34u: goto label_410d34;
        case 0x410d38u: goto label_410d38;
        case 0x410d3cu: goto label_410d3c;
        case 0x410d40u: goto label_410d40;
        case 0x410d44u: goto label_410d44;
        case 0x410d48u: goto label_410d48;
        case 0x410d4cu: goto label_410d4c;
        case 0x410d50u: goto label_410d50;
        case 0x410d54u: goto label_410d54;
        case 0x410d58u: goto label_410d58;
        case 0x410d5cu: goto label_410d5c;
        case 0x410d60u: goto label_410d60;
        case 0x410d64u: goto label_410d64;
        case 0x410d68u: goto label_410d68;
        case 0x410d6cu: goto label_410d6c;
        case 0x410d70u: goto label_410d70;
        case 0x410d74u: goto label_410d74;
        case 0x410d78u: goto label_410d78;
        case 0x410d7cu: goto label_410d7c;
        case 0x410d80u: goto label_410d80;
        case 0x410d84u: goto label_410d84;
        case 0x410d88u: goto label_410d88;
        case 0x410d8cu: goto label_410d8c;
        case 0x410d90u: goto label_410d90;
        case 0x410d94u: goto label_410d94;
        case 0x410d98u: goto label_410d98;
        case 0x410d9cu: goto label_410d9c;
        case 0x410da0u: goto label_410da0;
        case 0x410da4u: goto label_410da4;
        case 0x410da8u: goto label_410da8;
        case 0x410dacu: goto label_410dac;
        case 0x410db0u: goto label_410db0;
        case 0x410db4u: goto label_410db4;
        case 0x410db8u: goto label_410db8;
        case 0x410dbcu: goto label_410dbc;
        case 0x410dc0u: goto label_410dc0;
        case 0x410dc4u: goto label_410dc4;
        case 0x410dc8u: goto label_410dc8;
        case 0x410dccu: goto label_410dcc;
        case 0x410dd0u: goto label_410dd0;
        case 0x410dd4u: goto label_410dd4;
        case 0x410dd8u: goto label_410dd8;
        case 0x410ddcu: goto label_410ddc;
        case 0x410de0u: goto label_410de0;
        case 0x410de4u: goto label_410de4;
        case 0x410de8u: goto label_410de8;
        case 0x410decu: goto label_410dec;
        case 0x410df0u: goto label_410df0;
        case 0x410df4u: goto label_410df4;
        case 0x410df8u: goto label_410df8;
        case 0x410dfcu: goto label_410dfc;
        case 0x410e00u: goto label_410e00;
        case 0x410e04u: goto label_410e04;
        case 0x410e08u: goto label_410e08;
        case 0x410e0cu: goto label_410e0c;
        case 0x410e10u: goto label_410e10;
        case 0x410e14u: goto label_410e14;
        case 0x410e18u: goto label_410e18;
        case 0x410e1cu: goto label_410e1c;
        default: break;
    }

    ctx->pc = 0x410b10u;

label_410b10:
    // 0x410b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x410b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_410b14:
    // 0x410b14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x410b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_410b18:
    // 0x410b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x410b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_410b1c:
    // 0x410b1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x410b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410b20:
    // 0x410b20: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x410b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_410b24:
    // 0x410b24: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x410b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_410b28:
    // 0x410b28: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x410b28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_410b2c:
    // 0x410b2c: 0x11060059  beq         $t0, $a2, . + 4 + (0x59 << 2)
label_410b30:
    if (ctx->pc == 0x410B30u) {
        ctx->pc = 0x410B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410B2Cu;
        // 0x410b30: 0x8e0a0008  lw          $t2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410B34u;
        goto label_410b34;
    }
    ctx->pc = 0x410B2Cu;
    {
        const bool branch_taken_0x410b2c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x410B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410B2Cu;
        // 0x410b30: 0x8e0a0008  lw          $t2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410b2c) {
            ctx->pc = 0x410C94u;
            goto label_410c94;
        }
    }
    ctx->pc = 0x410B34u;
label_410b34:
    // 0x410b34: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x410b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_410b38:
    // 0x410b38: 0x25470008  addiu       $a3, $t2, 0x8
    ctx->pc = 0x410b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_410b3c:
    // 0x410b3c: 0x244be880  addiu       $t3, $v0, -0x1780
    ctx->pc = 0x410b3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_410b40:
    // 0x410b40: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x410b40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_410b44:
    // 0x410b44: 0x1072821  addu        $a1, $t0, $a3
    ctx->pc = 0x410b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_410b48:
    // 0x410b48: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x410b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_410b4c:
    // 0x410b4c: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_410b50:
    if (ctx->pc == 0x410B50u) {
        ctx->pc = 0x410B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410B4Cu;
        // 0x410b50: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410B54u;
        goto label_410b54;
    }
    ctx->pc = 0x410B4Cu;
    {
        const bool branch_taken_0x410b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x410b4c) {
            ctx->pc = 0x410B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410B4Cu;
            // 0x410b50: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410C8Cu;
            goto label_410c8c;
        }
    }
    ctx->pc = 0x410B54u;
label_410b54:
    // 0x410b54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x410b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_410b58:
    // 0x410b58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x410b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_410b5c:
    // 0x410b5c: 0x436018  mult        $t4, $v0, $v1
    ctx->pc = 0x410b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_410b60:
    // 0x410b60: 0x1851021  addu        $v0, $t4, $a1
    ctx->pc = 0x410b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
label_410b64:
    // 0x410b64: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x410b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_410b68:
    // 0x410b68: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
label_410b6c:
    if (ctx->pc == 0x410B6Cu) {
        ctx->pc = 0x410B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410B68u;
        // 0x410b6c: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410B70u;
        goto label_410b70;
    }
    ctx->pc = 0x410B68u;
    {
        const bool branch_taken_0x410b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x410b68) {
            ctx->pc = 0x410B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410B68u;
            // 0x410b6c: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410C8Cu;
            goto label_410c8c;
        }
    }
    ctx->pc = 0x410B70u;
label_410b70:
    // 0x410b70: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x410b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_410b74:
    // 0x410b74: 0x25070008  addiu       $a3, $t0, 0x8
    ctx->pc = 0x410b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_410b78:
    // 0x410b78: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x410b78u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_410b7c:
    // 0x410b7c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_410b80:
    if (ctx->pc == 0x410B80u) {
        ctx->pc = 0x410B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410B7Cu;
        // 0x410b80: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x410B84u;
        goto label_410b84;
    }
    ctx->pc = 0x410B7Cu;
    {
        const bool branch_taken_0x410b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x410b7c) {
            ctx->pc = 0x410B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410B7Cu;
            // 0x410b80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x410B84u;
            goto label_410b84;
        }
    }
    ctx->pc = 0x410B84u;
label_410b84:
    // 0x410b84: 0x1012  mflo        $v0
    ctx->pc = 0x410b84u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_410b88:
    // 0x410b88: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x410b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_410b8c:
    // 0x410b8c: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x410b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_410b90:
    // 0x410b90: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x410b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_410b94:
    // 0x410b94: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x410b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_410b98:
    // 0x410b98: 0x491007  srav        $v0, $t1, $v0
    ctx->pc = 0x410b98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
label_410b9c:
    // 0x410b9c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x410b9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_410ba0:
    // 0x410ba0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x410ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_410ba4:
    // 0x410ba4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x410ba4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_410ba8:
    // 0x410ba8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x410ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_410bac:
    // 0x410bac: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x410bacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_410bb0:
    // 0x410bb0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x410bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_410bb4:
    // 0x410bb4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x410bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_410bb8:
    // 0x410bb8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_410bbc:
    if (ctx->pc == 0x410BBCu) {
        ctx->pc = 0x410BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BB8u;
        // 0x410bbc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410BC0u;
        goto label_410bc0;
    }
    ctx->pc = 0x410BB8u;
    {
        const bool branch_taken_0x410bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x410BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BB8u;
        // 0x410bbc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410bb8) {
            ctx->pc = 0x410C84u;
            goto label_410c84;
        }
    }
    ctx->pc = 0x410BC0u;
label_410bc0:
    // 0x410bc0: 0x11400025  beqz        $t2, . + 4 + (0x25 << 2)
label_410bc4:
    if (ctx->pc == 0x410BC4u) {
        ctx->pc = 0x410BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BC0u;
        // 0x410bc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410BC8u;
        goto label_410bc8;
    }
    ctx->pc = 0x410BC0u;
    {
        const bool branch_taken_0x410bc0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x410BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BC0u;
        // 0x410bc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410bc0) {
            ctx->pc = 0x410C58u;
            goto label_410c58;
        }
    }
    ctx->pc = 0x410BC8u;
label_410bc8:
    // 0x410bc8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x410bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_410bcc:
    // 0x410bcc: 0x1940000f  blez        $t2, . + 4 + (0xF << 2)
label_410bd0:
    if (ctx->pc == 0x410BD0u) {
        ctx->pc = 0x410BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BCCu;
        // 0x410bd0: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x410BD4u;
        goto label_410bd4;
    }
    ctx->pc = 0x410BCCu;
    {
        const bool branch_taken_0x410bcc = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x410BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BCCu;
        // 0x410bd0: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x410bcc) {
            ctx->pc = 0x410C0Cu;
            goto label_410c0c;
        }
    }
    ctx->pc = 0x410BD4u;
label_410bd4:
    // 0x410bd4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_410bd8:
    if (ctx->pc == 0x410BD8u) {
        ctx->pc = 0x410BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BD4u;
        // 0x410bd8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x410BDCu;
        goto label_410bdc;
    }
    ctx->pc = 0x410BD4u;
    {
        const bool branch_taken_0x410bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x410BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BD4u;
        // 0x410bd8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x410bd4) {
            ctx->pc = 0x410C24u;
            goto label_410c24;
        }
    }
    ctx->pc = 0x410BDCu;
label_410bdc:
    // 0x410bdc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_410be0:
    if (ctx->pc == 0x410BE0u) {
        ctx->pc = 0x410BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BDCu;
        // 0x410be0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410BE4u;
        goto label_410be4;
    }
    ctx->pc = 0x410BDCu;
    {
        const bool branch_taken_0x410bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x410bdc) {
            ctx->pc = 0x410BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410BDCu;
            // 0x410be0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410C10u;
            goto label_410c10;
        }
    }
    ctx->pc = 0x410BE4u;
label_410be4:
    // 0x410be4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x410be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_410be8:
    // 0x410be8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_410bec:
    if (ctx->pc == 0x410BECu) {
        ctx->pc = 0x410BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410BE8u;
        // 0x410bec: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410BF0u;
        goto label_410bf0;
    }
    ctx->pc = 0x410BE8u;
    {
        const bool branch_taken_0x410be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x410be8) {
            ctx->pc = 0x410BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410BE8u;
            // 0x410bec: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410C00u;
            goto label_410c00;
        }
    }
    ctx->pc = 0x410BF0u;
label_410bf0:
    // 0x410bf0: 0x91060008  lbu         $a2, 0x8($t0)
    ctx->pc = 0x410bf0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
label_410bf4:
    // 0x410bf4: 0x25040009  addiu       $a0, $t0, 0x9
    ctx->pc = 0x410bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 9));
label_410bf8:
    // 0x410bf8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x410bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_410bfc:
    // 0x410bfc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x410bfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_410c00:
    // 0x410c00: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x410c00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_410c04:
    // 0x410c04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x410c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_410c08:
    // 0x410c08: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x410c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_410c0c:
    // 0x410c0c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x410c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_410c10:
    // 0x410c10: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x410c10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_410c14:
    // 0x410c14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x410c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_410c18:
    // 0x410c18: 0x12a382b  sltu        $a3, $t1, $t2
    ctx->pc = 0x410c18u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_410c1c:
    // 0x410c1c: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
label_410c20:
    if (ctx->pc == 0x410C20u) {
        ctx->pc = 0x410C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C1Cu;
        // 0x410c20: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410C24u;
        goto label_410c24;
    }
    ctx->pc = 0x410C1Cu;
    {
        const bool branch_taken_0x410c1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x410C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C1Cu;
        // 0x410c20: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410c1c) {
            ctx->pc = 0x410C58u;
            goto label_410c58;
        }
    }
    ctx->pc = 0x410C24u;
label_410c24:
    // 0x410c24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x410c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410c28:
    // 0x410c28: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x410c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_410c2c:
    // 0x410c2c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x410c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_410c30:
    // 0x410c30: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x410c30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_410c34:
    // 0x410c34: 0x12a382b  sltu        $a3, $t1, $t2
    ctx->pc = 0x410c34u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_410c38:
    // 0x410c38: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x410c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_410c3c:
    // 0x410c3c: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x410c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_410c40:
    // 0x410c40: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x410c40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_410c44:
    // 0x410c44: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x410c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_410c48:
    // 0x410c48: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x410c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_410c4c:
    // 0x410c4c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x410c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_410c50:
    // 0x410c50: 0x14e0fff5  bnez        $a3, . + 4 + (-0xB << 2)
label_410c54:
    if (ctx->pc == 0x410C54u) {
        ctx->pc = 0x410C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C50u;
        // 0x410c54: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410C58u;
        goto label_410c58;
    }
    ctx->pc = 0x410C50u;
    {
        const bool branch_taken_0x410c50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x410C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C50u;
        // 0x410c54: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410c50) {
            ctx->pc = 0x410C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410c28;
        }
    }
    ctx->pc = 0x410C58u;
label_410c58:
    // 0x410c58: 0x54c0000f  bnel        $a2, $zero, . + 4 + (0xF << 2)
label_410c5c:
    if (ctx->pc == 0x410C5Cu) {
        ctx->pc = 0x410C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C58u;
        // 0x410c5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410C60u;
        goto label_410c60;
    }
    ctx->pc = 0x410C58u;
    {
        const bool branch_taken_0x410c58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x410c58) {
            ctx->pc = 0x410C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410C58u;
            // 0x410c5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410C98u;
            goto label_410c98;
        }
    }
    ctx->pc = 0x410C60u;
label_410c60:
    // 0x410c60: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x410c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_410c64:
    // 0x410c64: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x410c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_410c68:
    // 0x410c68: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x410c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_410c6c:
    // 0x410c6c: 0x8d66010c  lw          $a2, 0x10C($t3)
    ctx->pc = 0x410c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 268)));
label_410c70:
    // 0x410c70: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x410c70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_410c74:
    // 0x410c74: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x410c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_410c78:
    // 0x410c78: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x410c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_410c7c:
    // 0x410c7c: 0xc0f809  jalr        $a2
label_410c80:
    if (ctx->pc == 0x410C80u) {
        ctx->pc = 0x410C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C7Cu;
        // 0x410c80: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410C84u;
        goto label_410c84;
    }
    ctx->pc = 0x410C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x410C84u);
        ctx->pc = 0x410C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C7Cu;
        // 0x410c80: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410C7Cu, 0x410C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410C84u;
label_410c84:
    // 0x410c84: 0x10000004  b           . + 4 + (0x4 << 2)
label_410c88:
    if (ctx->pc == 0x410C88u) {
        ctx->pc = 0x410C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C84u;
        // 0x410c88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410C8Cu;
        goto label_410c8c;
    }
    ctx->pc = 0x410C84u;
    {
        const bool branch_taken_0x410c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x410C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C84u;
        // 0x410c88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410c84) {
            ctx->pc = 0x410C98u;
            goto label_410c98;
        }
    }
    ctx->pc = 0x410C8Cu;
label_410c8c:
    // 0x410c8c: 0x1506ffae  bne         $t0, $a2, . + 4 + (-0x52 << 2)
label_410c90:
    if (ctx->pc == 0x410C90u) {
        ctx->pc = 0x410C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C8Cu;
        // 0x410c90: 0x1072821  addu        $a1, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410C94u;
        goto label_410c94;
    }
    ctx->pc = 0x410C8Cu;
    {
        const bool branch_taken_0x410c8c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x410C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410C8Cu;
        // 0x410c90: 0x1072821  addu        $a1, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410c8c) {
            ctx->pc = 0x410B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410b48;
        }
    }
    ctx->pc = 0x410C94u;
label_410c94:
    // 0x410c94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x410c94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410c98:
    // 0x410c98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x410c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_410c9c:
    // 0x410c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x410c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_410ca0:
    // 0x410ca0: 0x3e00008  jr          $ra
label_410ca4:
    if (ctx->pc == 0x410CA4u) {
        ctx->pc = 0x410CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410CA0u;
        // 0x410ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410CA8u;
        goto label_410ca8;
    }
    ctx->pc = 0x410CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410CA0u;
        // 0x410ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x410CA8u;
label_410ca8:
    // 0x410ca8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x410ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_410cac:
    // 0x410cac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x410cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_410cb0:
    // 0x410cb0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x410cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_410cb4:
    // 0x410cb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x410cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410cb8:
    // 0x410cb8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x410cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_410cbc:
    // 0x410cbc: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x410cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_410cc0:
    // 0x410cc0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x410cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_410cc4:
    // 0x410cc4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x410cc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410cc8:
    // 0x410cc8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x410cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_410ccc:
    // 0x410ccc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x410cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_410cd0:
    // 0x410cd0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x410cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_410cd4:
    // 0x410cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x410cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_410cd8:
    // 0x410cd8: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x410cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_410cdc:
    // 0x410cdc: 0x10f30044  beq         $a3, $s3, . + 4 + (0x44 << 2)
label_410ce0:
    if (ctx->pc == 0x410CE0u) {
        ctx->pc = 0x410CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410CDCu;
        // 0x410ce0: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410CE4u;
        goto label_410ce4;
    }
    ctx->pc = 0x410CDCu;
    {
        const bool branch_taken_0x410cdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 19));
        ctx->pc = 0x410CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410CDCu;
        // 0x410ce0: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410cdc) {
            ctx->pc = 0x410DF0u;
            goto label_410df0;
        }
    }
    ctx->pc = 0x410CE4u;
label_410ce4:
    // 0x410ce4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x410ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_410ce8:
    // 0x410ce8: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x410ce8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_410cec:
    // 0x410cec: 0x2456e880  addiu       $s6, $v0, -0x1780
    ctx->pc = 0x410cecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_410cf0:
    // 0x410cf0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x410cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_410cf4:
    // 0x410cf4: 0x0  nop
    ctx->pc = 0x410cf4u;
    // NOP
label_410cf8:
    // 0x410cf8: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x410cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_410cfc:
    // 0x410cfc: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x410cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_410d00:
    // 0x410d00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x410d00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410d04:
    // 0x410d04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x410d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410d08:
    // 0x410d08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x410d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_410d0c:
    // 0x410d0c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x410d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_410d10:
    // 0x410d10: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x410d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_410d14:
    // 0x410d14: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x410d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_410d18:
    // 0x410d18: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
label_410d1c:
    if (ctx->pc == 0x410D1Cu) {
        ctx->pc = 0x410D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D18u;
        // 0x410d1c: 0x8cf20000  lw          $s2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410D20u;
        goto label_410d20;
    }
    ctx->pc = 0x410D18u;
    {
        const bool branch_taken_0x410d18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x410D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D18u;
        // 0x410d1c: 0x8cf20000  lw          $s2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410d18) {
            ctx->pc = 0x410DB0u;
            goto label_410db0;
        }
    }
    ctx->pc = 0x410D20u;
label_410d20:
    // 0x410d20: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x410d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_410d24:
    // 0x410d24: 0x1a00000f  blez        $s0, . + 4 + (0xF << 2)
label_410d28:
    if (ctx->pc == 0x410D28u) {
        ctx->pc = 0x410D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D24u;
        // 0x410d28: 0x32030003  andi        $v1, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x410D2Cu;
        goto label_410d2c;
    }
    ctx->pc = 0x410D24u;
    {
        const bool branch_taken_0x410d24 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x410D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D24u;
        // 0x410d28: 0x32030003  andi        $v1, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x410d24) {
            ctx->pc = 0x410D64u;
            goto label_410d64;
        }
    }
    ctx->pc = 0x410D2Cu;
label_410d2c:
    // 0x410d2c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_410d30:
    if (ctx->pc == 0x410D30u) {
        ctx->pc = 0x410D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D2Cu;
        // 0x410d30: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x410D34u;
        goto label_410d34;
    }
    ctx->pc = 0x410D2Cu;
    {
        const bool branch_taken_0x410d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x410D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D2Cu;
        // 0x410d30: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x410d2c) {
            ctx->pc = 0x410D7Cu;
            goto label_410d7c;
        }
    }
    ctx->pc = 0x410D34u;
label_410d34:
    // 0x410d34: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_410d38:
    if (ctx->pc == 0x410D38u) {
        ctx->pc = 0x410D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D34u;
        // 0x410d38: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410D3Cu;
        goto label_410d3c;
    }
    ctx->pc = 0x410D34u;
    {
        const bool branch_taken_0x410d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x410d34) {
            ctx->pc = 0x410D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410D34u;
            // 0x410d38: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410D68u;
            goto label_410d68;
        }
    }
    ctx->pc = 0x410D3Cu;
label_410d3c:
    // 0x410d3c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x410d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_410d40:
    // 0x410d40: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_410d44:
    if (ctx->pc == 0x410D44u) {
        ctx->pc = 0x410D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D40u;
        // 0x410d44: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410D48u;
        goto label_410d48;
    }
    ctx->pc = 0x410D40u;
    {
        const bool branch_taken_0x410d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x410d40) {
            ctx->pc = 0x410D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410D40u;
            // 0x410d44: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410D58u;
            goto label_410d58;
        }
    }
    ctx->pc = 0x410D48u;
label_410d48:
    // 0x410d48: 0x90e60008  lbu         $a2, 0x8($a3)
    ctx->pc = 0x410d48u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_410d4c:
    // 0x410d4c: 0x24e40009  addiu       $a0, $a3, 0x9
    ctx->pc = 0x410d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 9));
label_410d50:
    // 0x410d50: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x410d50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_410d54:
    // 0x410d54: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x410d54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_410d58:
    // 0x410d58: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x410d58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_410d5c:
    // 0x410d5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x410d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_410d60:
    // 0x410d60: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x410d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_410d64:
    // 0x410d64: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x410d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_410d68:
    // 0x410d68: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x410d68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_410d6c:
    // 0x410d6c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x410d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_410d70:
    // 0x410d70: 0x130402b  sltu        $t0, $t1, $s0
    ctx->pc = 0x410d70u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_410d74:
    // 0x410d74: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
label_410d78:
    if (ctx->pc == 0x410D78u) {
        ctx->pc = 0x410D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D74u;
        // 0x410d78: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410D7Cu;
        goto label_410d7c;
    }
    ctx->pc = 0x410D74u;
    {
        const bool branch_taken_0x410d74 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x410D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410D74u;
        // 0x410d78: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410d74) {
            ctx->pc = 0x410DB0u;
            goto label_410db0;
        }
    }
    ctx->pc = 0x410D7Cu;
label_410d7c:
    // 0x410d7c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x410d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410d80:
    // 0x410d80: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x410d80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_410d84:
    // 0x410d84: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x410d84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_410d88:
    // 0x410d88: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x410d88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_410d8c:
    // 0x410d8c: 0x130402b  sltu        $t0, $t1, $s0
    ctx->pc = 0x410d8cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_410d90:
    // 0x410d90: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x410d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_410d94:
    // 0x410d94: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x410d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_410d98:
    // 0x410d98: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x410d98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_410d9c:
    // 0x410d9c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x410d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_410da0:
    // 0x410da0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x410da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_410da4:
    // 0x410da4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x410da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_410da8:
    // 0x410da8: 0x1500fff5  bnez        $t0, . + 4 + (-0xB << 2)
label_410dac:
    if (ctx->pc == 0x410DACu) {
        ctx->pc = 0x410DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410DA8u;
        // 0x410dac: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410DB0u;
        goto label_410db0;
    }
    ctx->pc = 0x410DA8u;
    {
        const bool branch_taken_0x410da8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x410DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410DA8u;
        // 0x410dac: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410da8) {
            ctx->pc = 0x410D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410d80;
        }
    }
    ctx->pc = 0x410DB0u;
label_410db0:
    // 0x410db0: 0x54c00007  bnel        $a2, $zero, . + 4 + (0x7 << 2)
label_410db4:
    if (ctx->pc == 0x410DB4u) {
        ctx->pc = 0x410DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410DB0u;
        // 0x410db4: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410DB8u;
        goto label_410db8;
    }
    ctx->pc = 0x410DB0u;
    {
        const bool branch_taken_0x410db0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x410db0) {
            ctx->pc = 0x410DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410DB0u;
            // 0x410db4: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410DD0u;
            goto label_410dd0;
        }
    }
    ctx->pc = 0x410DB8u;
label_410db8:
    // 0x410db8: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x410db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_410dbc:
    // 0x410dbc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x410dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_410dc0:
    // 0x410dc0: 0x40f809  jalr        $v0
label_410dc4:
    if (ctx->pc == 0x410DC4u) {
        ctx->pc = 0x410DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410DC0u;
        // 0x410dc4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410DC8u;
        goto label_410dc8;
    }
    ctx->pc = 0x410DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410DC8u);
        ctx->pc = 0x410DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410DC0u;
        // 0x410dc4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410DC0u, 0x410DC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410DC8u;
label_410dc8:
    // 0x410dc8: 0x10000007  b           . + 4 + (0x7 << 2)
label_410dcc:
    if (ctx->pc == 0x410DCCu) {
        ctx->pc = 0x410DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410DC8u;
        // 0x410dcc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410DD0u;
        goto label_410dd0;
    }
    ctx->pc = 0x410DC8u;
    {
        const bool branch_taken_0x410dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x410DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410DC8u;
        // 0x410dcc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410dc8) {
            ctx->pc = 0x410DE8u;
            goto label_410de8;
        }
    }
    ctx->pc = 0x410DD0u;
label_410dd0:
    // 0x410dd0: 0xacf50004  sw          $s5, 0x4($a3)
    ctx->pc = 0x410dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 21));
label_410dd4:
    // 0x410dd4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x410dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_410dd8:
    // 0x410dd8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x410dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_410ddc:
    // 0x410ddc: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x410ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_410de0:
    // 0x410de0: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x410de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
label_410de4:
    // 0x410de4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x410de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_410de8:
    // 0x410de8: 0x54f3ffc3  bnel        $a3, $s3, . + 4 + (-0x3D << 2)
label_410dec:
    if (ctx->pc == 0x410DECu) {
        ctx->pc = 0x410DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410DE8u;
        // 0x410dec: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410DF0u;
        goto label_410df0;
    }
    ctx->pc = 0x410DE8u;
    {
        const bool branch_taken_0x410de8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 19));
        if (branch_taken_0x410de8) {
            ctx->pc = 0x410DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410DE8u;
            // 0x410dec: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410cf8;
        }
    }
    ctx->pc = 0x410DF0u;
label_410df0:
    // 0x410df0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x410df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_410df4:
    // 0x410df4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x410df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_410df8:
    // 0x410df8: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x410df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_410dfc:
    // 0x410dfc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x410dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_410e00:
    // 0x410e00: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x410e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_410e04:
    // 0x410e04: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x410e04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_410e08:
    // 0x410e08: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x410e08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_410e0c:
    // 0x410e0c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x410e0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_410e10:
    // 0x410e10: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x410e10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_410e14:
    // 0x410e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x410e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_410e18:
    // 0x410e18: 0x3e00008  jr          $ra
label_410e1c:
    if (ctx->pc == 0x410E1Cu) {
        ctx->pc = 0x410E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E18u;
        // 0x410e1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410E20u;
        goto label_fallthrough_0x410e18;
    }
    ctx->pc = 0x410E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410E18u;
        // 0x410e1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x410e18:
    ctx->pc = 0x410E20u;
}
