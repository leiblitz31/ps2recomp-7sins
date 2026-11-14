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

// Function: sub_003D6C38
// Address: 0x3d6c38 - 0x3d6e50
void sub_003D6C38_0x3d6c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6C38_0x3d6c38");
#endif

    switch (ctx->pc) {
        case 0x3d6c38u: goto label_3d6c38;
        case 0x3d6c3cu: goto label_3d6c3c;
        case 0x3d6c40u: goto label_3d6c40;
        case 0x3d6c44u: goto label_3d6c44;
        case 0x3d6c48u: goto label_3d6c48;
        case 0x3d6c4cu: goto label_3d6c4c;
        case 0x3d6c50u: goto label_3d6c50;
        case 0x3d6c54u: goto label_3d6c54;
        case 0x3d6c58u: goto label_3d6c58;
        case 0x3d6c5cu: goto label_3d6c5c;
        case 0x3d6c60u: goto label_3d6c60;
        case 0x3d6c64u: goto label_3d6c64;
        case 0x3d6c68u: goto label_3d6c68;
        case 0x3d6c6cu: goto label_3d6c6c;
        case 0x3d6c70u: goto label_3d6c70;
        case 0x3d6c74u: goto label_3d6c74;
        case 0x3d6c78u: goto label_3d6c78;
        case 0x3d6c7cu: goto label_3d6c7c;
        case 0x3d6c80u: goto label_3d6c80;
        case 0x3d6c84u: goto label_3d6c84;
        case 0x3d6c88u: goto label_3d6c88;
        case 0x3d6c8cu: goto label_3d6c8c;
        case 0x3d6c90u: goto label_3d6c90;
        case 0x3d6c94u: goto label_3d6c94;
        case 0x3d6c98u: goto label_3d6c98;
        case 0x3d6c9cu: goto label_3d6c9c;
        case 0x3d6ca0u: goto label_3d6ca0;
        case 0x3d6ca4u: goto label_3d6ca4;
        case 0x3d6ca8u: goto label_3d6ca8;
        case 0x3d6cacu: goto label_3d6cac;
        case 0x3d6cb0u: goto label_3d6cb0;
        case 0x3d6cb4u: goto label_3d6cb4;
        case 0x3d6cb8u: goto label_3d6cb8;
        case 0x3d6cbcu: goto label_3d6cbc;
        case 0x3d6cc0u: goto label_3d6cc0;
        case 0x3d6cc4u: goto label_3d6cc4;
        case 0x3d6cc8u: goto label_3d6cc8;
        case 0x3d6cccu: goto label_3d6ccc;
        case 0x3d6cd0u: goto label_3d6cd0;
        case 0x3d6cd4u: goto label_3d6cd4;
        case 0x3d6cd8u: goto label_3d6cd8;
        case 0x3d6cdcu: goto label_3d6cdc;
        case 0x3d6ce0u: goto label_3d6ce0;
        case 0x3d6ce4u: goto label_3d6ce4;
        case 0x3d6ce8u: goto label_3d6ce8;
        case 0x3d6cecu: goto label_3d6cec;
        case 0x3d6cf0u: goto label_3d6cf0;
        case 0x3d6cf4u: goto label_3d6cf4;
        case 0x3d6cf8u: goto label_3d6cf8;
        case 0x3d6cfcu: goto label_3d6cfc;
        case 0x3d6d00u: goto label_3d6d00;
        case 0x3d6d04u: goto label_3d6d04;
        case 0x3d6d08u: goto label_3d6d08;
        case 0x3d6d0cu: goto label_3d6d0c;
        case 0x3d6d10u: goto label_3d6d10;
        case 0x3d6d14u: goto label_3d6d14;
        case 0x3d6d18u: goto label_3d6d18;
        case 0x3d6d1cu: goto label_3d6d1c;
        case 0x3d6d20u: goto label_3d6d20;
        case 0x3d6d24u: goto label_3d6d24;
        case 0x3d6d28u: goto label_3d6d28;
        case 0x3d6d2cu: goto label_3d6d2c;
        case 0x3d6d30u: goto label_3d6d30;
        case 0x3d6d34u: goto label_3d6d34;
        case 0x3d6d38u: goto label_3d6d38;
        case 0x3d6d3cu: goto label_3d6d3c;
        case 0x3d6d40u: goto label_3d6d40;
        case 0x3d6d44u: goto label_3d6d44;
        case 0x3d6d48u: goto label_3d6d48;
        case 0x3d6d4cu: goto label_3d6d4c;
        case 0x3d6d50u: goto label_3d6d50;
        case 0x3d6d54u: goto label_3d6d54;
        case 0x3d6d58u: goto label_3d6d58;
        case 0x3d6d5cu: goto label_3d6d5c;
        case 0x3d6d60u: goto label_3d6d60;
        case 0x3d6d64u: goto label_3d6d64;
        case 0x3d6d68u: goto label_3d6d68;
        case 0x3d6d6cu: goto label_3d6d6c;
        case 0x3d6d70u: goto label_3d6d70;
        case 0x3d6d74u: goto label_3d6d74;
        case 0x3d6d78u: goto label_3d6d78;
        case 0x3d6d7cu: goto label_3d6d7c;
        case 0x3d6d80u: goto label_3d6d80;
        case 0x3d6d84u: goto label_3d6d84;
        case 0x3d6d88u: goto label_3d6d88;
        case 0x3d6d8cu: goto label_3d6d8c;
        case 0x3d6d90u: goto label_3d6d90;
        case 0x3d6d94u: goto label_3d6d94;
        case 0x3d6d98u: goto label_3d6d98;
        case 0x3d6d9cu: goto label_3d6d9c;
        case 0x3d6da0u: goto label_3d6da0;
        case 0x3d6da4u: goto label_3d6da4;
        case 0x3d6da8u: goto label_3d6da8;
        case 0x3d6dacu: goto label_3d6dac;
        case 0x3d6db0u: goto label_3d6db0;
        case 0x3d6db4u: goto label_3d6db4;
        case 0x3d6db8u: goto label_3d6db8;
        case 0x3d6dbcu: goto label_3d6dbc;
        case 0x3d6dc0u: goto label_3d6dc0;
        case 0x3d6dc4u: goto label_3d6dc4;
        case 0x3d6dc8u: goto label_3d6dc8;
        case 0x3d6dccu: goto label_3d6dcc;
        case 0x3d6dd0u: goto label_3d6dd0;
        case 0x3d6dd4u: goto label_3d6dd4;
        case 0x3d6dd8u: goto label_3d6dd8;
        case 0x3d6ddcu: goto label_3d6ddc;
        case 0x3d6de0u: goto label_3d6de0;
        case 0x3d6de4u: goto label_3d6de4;
        case 0x3d6de8u: goto label_3d6de8;
        case 0x3d6decu: goto label_3d6dec;
        case 0x3d6df0u: goto label_3d6df0;
        case 0x3d6df4u: goto label_3d6df4;
        case 0x3d6df8u: goto label_3d6df8;
        case 0x3d6dfcu: goto label_3d6dfc;
        case 0x3d6e00u: goto label_3d6e00;
        case 0x3d6e04u: goto label_3d6e04;
        case 0x3d6e08u: goto label_3d6e08;
        case 0x3d6e0cu: goto label_3d6e0c;
        case 0x3d6e10u: goto label_3d6e10;
        case 0x3d6e14u: goto label_3d6e14;
        case 0x3d6e18u: goto label_3d6e18;
        case 0x3d6e1cu: goto label_3d6e1c;
        case 0x3d6e20u: goto label_3d6e20;
        case 0x3d6e24u: goto label_3d6e24;
        case 0x3d6e28u: goto label_3d6e28;
        case 0x3d6e2cu: goto label_3d6e2c;
        case 0x3d6e30u: goto label_3d6e30;
        case 0x3d6e34u: goto label_3d6e34;
        case 0x3d6e38u: goto label_3d6e38;
        case 0x3d6e3cu: goto label_3d6e3c;
        case 0x3d6e40u: goto label_3d6e40;
        case 0x3d6e44u: goto label_3d6e44;
        case 0x3d6e48u: goto label_3d6e48;
        case 0x3d6e4cu: goto label_3d6e4c;
        default: break;
    }

    ctx->pc = 0x3d6c38u;

label_3d6c38:
    // 0x3d6c38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d6c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d6c3c:
    // 0x3d6c3c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d6c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3d6c40:
    // 0x3d6c40: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3d6c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3d6c44:
    // 0x3d6c44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d6c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c48:
    // 0x3d6c48: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d6c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3d6c4c:
    // 0x3d6c4c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d6c4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c50:
    // 0x3d6c50: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d6c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3d6c54:
    // 0x3d6c54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d6c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d6c58:
    // 0x3d6c58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d6c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d6c5c:
    // 0x3d6c5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3d6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d6c60:
    // 0x3d6c60: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x3d6c60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3d6c64:
    // 0x3d6c64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3d6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3d6c68:
    // 0x3d6c68: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_3d6c6c:
    if (ctx->pc == 0x3D6C6Cu) {
        ctx->pc = 0x3D6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C68u;
        // 0x3d6c6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6C70u;
        goto label_3d6c70;
    }
    ctx->pc = 0x3D6C68u;
    {
        const bool branch_taken_0x3d6c68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C68u;
        // 0x3d6c6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6c68) {
            ctx->pc = 0x3D6CC8u;
            goto label_3d6cc8;
        }
    }
    ctx->pc = 0x3D6C70u;
label_3d6c70:
    // 0x3d6c70: 0xc1074ce  jal         func_41D338
label_3d6c74:
    if (ctx->pc == 0x3D6C74u) {
        ctx->pc = 0x3D6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C70u;
        // 0x3d6c74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6C78u;
        goto label_3d6c78;
    }
    ctx->pc = 0x3D6C70u;
    SET_GPR_U32(ctx, 31, 0x3D6C78u);
    ctx->pc = 0x3D6C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6C70u;
    // 0x3d6c74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D338u, 0x3D6C70u, 0x3D6C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6C78u;
label_3d6c78:
    // 0x3d6c78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d6c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6c7c:
    // 0x3d6c7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d6c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d6c80:
    // 0x3d6c80: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
label_3d6c84:
    if (ctx->pc == 0x3D6C84u) {
        ctx->pc = 0x3D6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C80u;
        // 0x3d6c84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6C88u;
        goto label_3d6c88;
    }
    ctx->pc = 0x3D6C80u;
    {
        const bool branch_taken_0x3d6c80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C80u;
        // 0x3d6c84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6c80) {
            ctx->pc = 0x3D6CB0u;
            goto label_3d6cb0;
        }
    }
    ctx->pc = 0x3D6C88u;
label_3d6c88:
    // 0x3d6c88: 0x240201b3  addiu       $v0, $zero, 0x1B3
    ctx->pc = 0x3d6c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
label_3d6c8c:
    // 0x3d6c8c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3d6c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3d6c90:
    // 0x3d6c90: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d6c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3d6c94:
    // 0x3d6c94: 0xc1035f6  jal         func_40D7D8
label_3d6c98:
    if (ctx->pc == 0x3D6C98u) {
        ctx->pc = 0x3D6C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6C94u;
        // 0x3d6c98: 0x3484000f  ori         $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6C9Cu;
        goto label_3d6c9c;
    }
    ctx->pc = 0x3D6C94u;
    SET_GPR_U32(ctx, 31, 0x3D6C9Cu);
    ctx->pc = 0x3D6C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6C94u;
    // 0x3d6c98: 0x3484000f  ori         $a0, $a0, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3D6C94u, 0x3D6C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6C9Cu;
label_3d6c9c:
    // 0x3d6c9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d6c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d6ca0:
    // 0x3d6ca0: 0xc103628  jal         func_40D8A0
label_3d6ca4:
    if (ctx->pc == 0x3D6CA4u) {
        ctx->pc = 0x3D6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CA0u;
        // 0x3d6ca4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6CA8u;
        goto label_3d6ca8;
    }
    ctx->pc = 0x3D6CA0u;
    SET_GPR_U32(ctx, 31, 0x3D6CA8u);
    ctx->pc = 0x3D6CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6CA0u;
    // 0x3d6ca4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3D6CA0u, 0x3D6CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6CA8u;
label_3d6ca8:
    // 0x3d6ca8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d6cac:
    if (ctx->pc == 0x3D6CACu) {
        ctx->pc = 0x3D6CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CA8u;
        // 0x3d6cac: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6CB0u;
        goto label_3d6cb0;
    }
    ctx->pc = 0x3D6CA8u;
    {
        const bool branch_taken_0x3d6ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CA8u;
        // 0x3d6cac: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ca8) {
            ctx->pc = 0x3D6CCCu;
            goto label_3d6ccc;
        }
    }
    ctx->pc = 0x3D6CB0u;
label_3d6cb0:
    // 0x3d6cb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d6cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6cb4:
    // 0x3d6cb4: 0xc0f5974  jal         func_3D65D0
label_3d6cb8:
    if (ctx->pc == 0x3D6CB8u) {
        ctx->pc = 0x3D6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CB4u;
        // 0x3d6cb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6CBCu;
        goto label_3d6cbc;
    }
    ctx->pc = 0x3D6CB4u;
    SET_GPR_U32(ctx, 31, 0x3D6CBCu);
    ctx->pc = 0x3D6CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6CB4u;
    // 0x3d6cb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D65D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D65D0u, 0x3D6CB4u, 0x3D6CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6CBCu;
label_3d6cbc:
    // 0x3d6cbc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d6cbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6cc0:
    // 0x3d6cc0: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_3d6cc4:
    if (ctx->pc == 0x3D6CC4u) {
        ctx->pc = 0x3D6CC8u;
        goto label_3d6cc8;
    }
    ctx->pc = 0x3D6CC0u;
    {
        const bool branch_taken_0x3d6cc0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6cc0) {
            ctx->pc = 0x3D6CD4u;
            goto label_3d6cd4;
        }
    }
    ctx->pc = 0x3D6CC8u;
label_3d6cc8:
    // 0x3d6cc8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3d6cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3d6ccc:
    // 0x3d6ccc: 0x10000058  b           . + 4 + (0x58 << 2)
label_3d6cd0:
    if (ctx->pc == 0x3D6CD0u) {
        ctx->pc = 0x3D6CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CCCu;
        // 0x3d6cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6CD4u;
        goto label_3d6cd4;
    }
    ctx->pc = 0x3D6CCCu;
    {
        const bool branch_taken_0x3d6ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CCCu;
        // 0x3d6cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ccc) {
            ctx->pc = 0x3D6E30u;
            goto label_3d6e30;
        }
    }
    ctx->pc = 0x3D6CD4u;
label_3d6cd4:
    // 0x3d6cd4: 0x1a00004a  blez        $s0, . + 4 + (0x4A << 2)
label_3d6cd8:
    if (ctx->pc == 0x3D6CD8u) {
        ctx->pc = 0x3D6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CD4u;
        // 0x3d6cd8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6CDCu;
        goto label_3d6cdc;
    }
    ctx->pc = 0x3D6CD4u;
    {
        const bool branch_taken_0x3d6cd4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3D6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CD4u;
        // 0x3d6cd8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6cd4) {
            ctx->pc = 0x3D6E00u;
            goto label_3d6e00;
        }
    }
    ctx->pc = 0x3D6CDCu;
label_3d6cdc:
    // 0x3d6cdc: 0x121023  negu        $v0, $s2
    ctx->pc = 0x3d6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_3d6ce0:
    // 0x3d6ce0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3d6ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3d6ce4:
    // 0x3d6ce4: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_3d6ce8:
    if (ctx->pc == 0x3D6CE8u) {
        ctx->pc = 0x3D6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CE4u;
        // 0x3d6ce8: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6CECu;
        goto label_3d6cec;
    }
    ctx->pc = 0x3D6CE4u;
    {
        const bool branch_taken_0x3d6ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CE4u;
        // 0x3d6ce8: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ce4) {
            ctx->pc = 0x3D6D70u;
            goto label_3d6d70;
        }
    }
    ctx->pc = 0x3D6CECu;
label_3d6cec:
    // 0x3d6cec: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3d6cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3d6cf0:
    // 0x3d6cf0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3d6cf4:
    if (ctx->pc == 0x3D6CF4u) {
        ctx->pc = 0x3D6CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CF0u;
        // 0x3d6cf4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6CF8u;
        goto label_3d6cf8;
    }
    ctx->pc = 0x3D6CF0u;
    {
        const bool branch_taken_0x3d6cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CF0u;
        // 0x3d6cf4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6cf0) {
            ctx->pc = 0x3D6D50u;
            goto label_3d6d50;
        }
    }
    ctx->pc = 0x3D6CF8u;
label_3d6cf8:
    // 0x3d6cf8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3d6cfc:
    if (ctx->pc == 0x3D6CFCu) {
        ctx->pc = 0x3D6CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6CF8u;
        // 0x3d6cfc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D00u;
        goto label_3d6d00;
    }
    ctx->pc = 0x3D6CF8u;
    {
        const bool branch_taken_0x3d6cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6cf8) {
            ctx->pc = 0x3D6CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6CF8u;
            // 0x3d6cfc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6D2Cu;
            goto label_3d6d2c;
        }
    }
    ctx->pc = 0x3D6D00u;
label_3d6d00:
    // 0x3d6d00: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3d6d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d6d04:
    // 0x3d6d04: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x3d6d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3d6d08:
    // 0x3d6d08: 0xc107278  jal         func_41C9E0
label_3d6d0c:
    if (ctx->pc == 0x3D6D0Cu) {
        ctx->pc = 0x3D6D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D08u;
        // 0x3d6d0c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D10u;
        goto label_3d6d10;
    }
    ctx->pc = 0x3D6D08u;
    SET_GPR_U32(ctx, 31, 0x3D6D10u);
    ctx->pc = 0x3D6D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6D08u;
    // 0x3d6d0c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C9E0u, 0x3D6D08u, 0x3D6D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D10u;
label_3d6d10:
    // 0x3d6d10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d6d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d6d14:
    // 0x3d6d14: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3d6d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d6d18:
    // 0x3d6d18: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x3d6d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_3d6d1c:
    // 0x3d6d1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3d6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d6d20:
    // 0x3d6d20: 0xc10705c  jal         func_41C170
label_3d6d24:
    if (ctx->pc == 0x3D6D24u) {
        ctx->pc = 0x3D6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D20u;
        // 0x3d6d24: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D28u;
        goto label_3d6d28;
    }
    ctx->pc = 0x3D6D20u;
    SET_GPR_U32(ctx, 31, 0x3D6D28u);
    ctx->pc = 0x3D6D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6D20u;
    // 0x3d6d24: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6D20u, 0x3D6D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D28u;
label_3d6d28:
    // 0x3d6d28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6d2c:
    // 0x3d6d2c: 0xc107278  jal         func_41C9E0
label_3d6d30:
    if (ctx->pc == 0x3D6D30u) {
        ctx->pc = 0x3D6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D2Cu;
        // 0x3d6d30: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D34u;
        goto label_3d6d34;
    }
    ctx->pc = 0x3D6D2Cu;
    SET_GPR_U32(ctx, 31, 0x3D6D34u);
    ctx->pc = 0x3D6D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6D2Cu;
    // 0x3d6d30: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C9E0u, 0x3D6D2Cu, 0x3D6D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D34u;
label_3d6d34:
    // 0x3d6d34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d6d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d6d38:
    // 0x3d6d38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6d3c:
    // 0x3d6d3c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x3d6d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_3d6d40:
    // 0x3d6d40: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3d6d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3d6d44:
    // 0x3d6d44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3d6d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d6d48:
    // 0x3d6d48: 0xc10705c  jal         func_41C170
label_3d6d4c:
    if (ctx->pc == 0x3D6D4Cu) {
        ctx->pc = 0x3D6D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D48u;
        // 0x3d6d4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D50u;
        goto label_3d6d50;
    }
    ctx->pc = 0x3D6D48u;
    SET_GPR_U32(ctx, 31, 0x3D6D50u);
    ctx->pc = 0x3D6D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6D48u;
    // 0x3d6d4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6D48u, 0x3D6D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D50u;
label_3d6d50:
    // 0x3d6d50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6d54:
    // 0x3d6d54: 0xc107278  jal         func_41C9E0
label_3d6d58:
    if (ctx->pc == 0x3D6D58u) {
        ctx->pc = 0x3D6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D54u;
        // 0x3d6d58: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D5Cu;
        goto label_3d6d5c;
    }
    ctx->pc = 0x3D6D54u;
    SET_GPR_U32(ctx, 31, 0x3D6D5Cu);
    ctx->pc = 0x3D6D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6D54u;
    // 0x3d6d58: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C9E0u, 0x3D6D54u, 0x3D6D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D5Cu;
label_3d6d5c:
    // 0x3d6d5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d6d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d6d60:
    // 0x3d6d60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6d64:
    // 0x3d6d64: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x3d6d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_3d6d68:
    // 0x3d6d68: 0x10000020  b           . + 4 + (0x20 << 2)
label_3d6d6c:
    if (ctx->pc == 0x3D6D6Cu) {
        ctx->pc = 0x3D6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D68u;
        // 0x3d6d6c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D70u;
        goto label_3d6d70;
    }
    ctx->pc = 0x3D6D68u;
    {
        const bool branch_taken_0x3d6d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D68u;
        // 0x3d6d6c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6d68) {
            ctx->pc = 0x3D6DECu;
            goto label_3d6dec;
        }
    }
    ctx->pc = 0x3D6D70u;
label_3d6d70:
    // 0x3d6d70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6d74:
    // 0x3d6d74: 0xc107278  jal         func_41C9E0
label_3d6d78:
    if (ctx->pc == 0x3D6D78u) {
        ctx->pc = 0x3D6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D74u;
        // 0x3d6d78: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D7Cu;
        goto label_3d6d7c;
    }
    ctx->pc = 0x3D6D74u;
    SET_GPR_U32(ctx, 31, 0x3D6D7Cu);
    ctx->pc = 0x3D6D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6D74u;
    // 0x3d6d78: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C9E0u, 0x3D6D74u, 0x3D6D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D7Cu;
label_3d6d7c:
    // 0x3d6d7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d6d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d6d80:
    // 0x3d6d80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d6d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6d84:
    // 0x3d6d84: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x3d6d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_3d6d88:
    // 0x3d6d88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3d6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d6d8c:
    // 0x3d6d8c: 0xc10705c  jal         func_41C170
label_3d6d90:
    if (ctx->pc == 0x3D6D90u) {
        ctx->pc = 0x3D6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D8Cu;
        // 0x3d6d90: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D94u;
        goto label_3d6d94;
    }
    ctx->pc = 0x3D6D8Cu;
    SET_GPR_U32(ctx, 31, 0x3D6D94u);
    ctx->pc = 0x3D6D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6D8Cu;
    // 0x3d6d90: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6D8Cu, 0x3D6D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D94u;
label_3d6d94:
    // 0x3d6d94: 0xc107278  jal         func_41C9E0
label_3d6d98:
    if (ctx->pc == 0x3D6D98u) {
        ctx->pc = 0x3D6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6D94u;
        // 0x3d6d98: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6D9Cu;
        goto label_3d6d9c;
    }
    ctx->pc = 0x3D6D94u;
    SET_GPR_U32(ctx, 31, 0x3D6D9Cu);
    ctx->pc = 0x3D6D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6D94u;
    // 0x3d6d98: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C9E0u, 0x3D6D94u, 0x3D6D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D9Cu;
label_3d6d9c:
    // 0x3d6d9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d6d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d6da0:
    // 0x3d6da0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3d6da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d6da4:
    // 0x3d6da4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x3d6da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_3d6da8:
    // 0x3d6da8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3d6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d6dac:
    // 0x3d6dac: 0xc10705c  jal         func_41C170
label_3d6db0:
    if (ctx->pc == 0x3D6DB0u) {
        ctx->pc = 0x3D6DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DACu;
        // 0x3d6db0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6DB4u;
        goto label_3d6db4;
    }
    ctx->pc = 0x3D6DACu;
    SET_GPR_U32(ctx, 31, 0x3D6DB4u);
    ctx->pc = 0x3D6DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6DACu;
    // 0x3d6db0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6DACu, 0x3D6DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6DB4u;
label_3d6db4:
    // 0x3d6db4: 0xc107278  jal         func_41C9E0
label_3d6db8:
    if (ctx->pc == 0x3D6DB8u) {
        ctx->pc = 0x3D6DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DB4u;
        // 0x3d6db8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6DBCu;
        goto label_3d6dbc;
    }
    ctx->pc = 0x3D6DB4u;
    SET_GPR_U32(ctx, 31, 0x3D6DBCu);
    ctx->pc = 0x3D6DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6DB4u;
    // 0x3d6db8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C9E0u, 0x3D6DB4u, 0x3D6DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6DBCu;
label_3d6dbc:
    // 0x3d6dbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d6dc0:
    // 0x3d6dc0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3d6dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d6dc4:
    // 0x3d6dc4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x3d6dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_3d6dc8:
    // 0x3d6dc8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3d6dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d6dcc:
    // 0x3d6dcc: 0xc10705c  jal         func_41C170
label_3d6dd0:
    if (ctx->pc == 0x3D6DD0u) {
        ctx->pc = 0x3D6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DCCu;
        // 0x3d6dd0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6DD4u;
        goto label_3d6dd4;
    }
    ctx->pc = 0x3D6DCCu;
    SET_GPR_U32(ctx, 31, 0x3D6DD4u);
    ctx->pc = 0x3D6DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6DCCu;
    // 0x3d6dd0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6DCCu, 0x3D6DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6DD4u;
label_3d6dd4:
    // 0x3d6dd4: 0xc107278  jal         func_41C9E0
label_3d6dd8:
    if (ctx->pc == 0x3D6DD8u) {
        ctx->pc = 0x3D6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DD4u;
        // 0x3d6dd8: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6DDCu;
        goto label_3d6ddc;
    }
    ctx->pc = 0x3D6DD4u;
    SET_GPR_U32(ctx, 31, 0x3D6DDCu);
    ctx->pc = 0x3D6DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6DD4u;
    // 0x3d6dd8: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C9E0u, 0x3D6DD4u, 0x3D6DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6DDCu;
label_3d6ddc:
    // 0x3d6ddc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d6ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d6de0:
    // 0x3d6de0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3d6de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d6de4:
    // 0x3d6de4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x3d6de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_3d6de8:
    // 0x3d6de8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3d6de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3d6dec:
    // 0x3d6dec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3d6decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d6df0:
    // 0x3d6df0: 0xc10705c  jal         func_41C170
label_3d6df4:
    if (ctx->pc == 0x3D6DF4u) {
        ctx->pc = 0x3D6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DF0u;
        // 0x3d6df4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6DF8u;
        goto label_3d6df8;
    }
    ctx->pc = 0x3D6DF0u;
    SET_GPR_U32(ctx, 31, 0x3D6DF8u);
    ctx->pc = 0x3D6DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6DF0u;
    // 0x3d6df4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D6DF0u, 0x3D6DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6DF8u;
label_3d6df8:
    // 0x3d6df8: 0x5640ffde  bnel        $s2, $zero, . + 4 + (-0x22 << 2)
label_3d6dfc:
    if (ctx->pc == 0x3D6DFCu) {
        ctx->pc = 0x3D6DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6DF8u;
        // 0x3d6dfc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6E00u;
        goto label_3d6e00;
    }
    ctx->pc = 0x3D6DF8u;
    {
        const bool branch_taken_0x3d6df8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6df8) {
            ctx->pc = 0x3D6DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D6DF8u;
            // 0x3d6dfc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6D74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6d74;
        }
    }
    ctx->pc = 0x3D6E00u;
label_3d6e00:
    // 0x3d6e00: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d6e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3d6e04:
    // 0x3d6e04: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3d6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3d6e08:
    // 0x3d6e08: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3d6e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3d6e0c:
    // 0x3d6e0c: 0x60f809  jalr        $v1
label_3d6e10:
    if (ctx->pc == 0x3D6E10u) {
        ctx->pc = 0x3D6E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E0Cu;
        // 0x3d6e10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6E14u;
        goto label_3d6e14;
    }
    ctx->pc = 0x3D6E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D6E14u);
        ctx->pc = 0x3D6E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E0Cu;
        // 0x3d6e10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6E0Cu, 0x3D6E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D6E14u;
label_3d6e14:
    // 0x3d6e14: 0xc10598e  jal         func_416638
label_3d6e18:
    if (ctx->pc == 0x3D6E18u) {
        ctx->pc = 0x3D6E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E14u;
        // 0x3d6e18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6E1Cu;
        goto label_3d6e1c;
    }
    ctx->pc = 0x3D6E14u;
    SET_GPR_U32(ctx, 31, 0x3D6E1Cu);
    ctx->pc = 0x3D6E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6E14u;
    // 0x3d6e18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416638u, 0x3D6E14u, 0x3D6E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6E1Cu;
label_3d6e1c:
    // 0x3d6e1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d6e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d6e20:
    // 0x3d6e20: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x3d6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_3d6e24:
    // 0x3d6e24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d6e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d6e28:
    // 0x3d6e28: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d6e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3d6e2c:
    // 0x3d6e2c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3d6e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6e30:
    // 0x3d6e30: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3d6e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d6e34:
    // 0x3d6e34: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3d6e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d6e38:
    // 0x3d6e38: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d6e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d6e3c:
    // 0x3d6e3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d6e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d6e40:
    // 0x3d6e40: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3d6e40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d6e44:
    // 0x3d6e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d6e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d6e48:
    // 0x3d6e48: 0x3e00008  jr          $ra
label_3d6e4c:
    if (ctx->pc == 0x3D6E4Cu) {
        ctx->pc = 0x3D6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E48u;
        // 0x3d6e4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6E50u;
        goto label_fallthrough_0x3d6e48;
    }
    ctx->pc = 0x3D6E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E48u;
        // 0x3d6e4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d6e48:
    ctx->pc = 0x3D6E50u;
}
