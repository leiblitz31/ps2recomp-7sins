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

// Function: sub_003B0C88
// Address: 0x3b0c88 - 0x3b0ee8
void sub_003B0C88_0x3b0c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0C88_0x3b0c88");
#endif

    switch (ctx->pc) {
        case 0x3b0c88u: goto label_3b0c88;
        case 0x3b0c8cu: goto label_3b0c8c;
        case 0x3b0c90u: goto label_3b0c90;
        case 0x3b0c94u: goto label_3b0c94;
        case 0x3b0c98u: goto label_3b0c98;
        case 0x3b0c9cu: goto label_3b0c9c;
        case 0x3b0ca0u: goto label_3b0ca0;
        case 0x3b0ca4u: goto label_3b0ca4;
        case 0x3b0ca8u: goto label_3b0ca8;
        case 0x3b0cacu: goto label_3b0cac;
        case 0x3b0cb0u: goto label_3b0cb0;
        case 0x3b0cb4u: goto label_3b0cb4;
        case 0x3b0cb8u: goto label_3b0cb8;
        case 0x3b0cbcu: goto label_3b0cbc;
        case 0x3b0cc0u: goto label_3b0cc0;
        case 0x3b0cc4u: goto label_3b0cc4;
        case 0x3b0cc8u: goto label_3b0cc8;
        case 0x3b0cccu: goto label_3b0ccc;
        case 0x3b0cd0u: goto label_3b0cd0;
        case 0x3b0cd4u: goto label_3b0cd4;
        case 0x3b0cd8u: goto label_3b0cd8;
        case 0x3b0cdcu: goto label_3b0cdc;
        case 0x3b0ce0u: goto label_3b0ce0;
        case 0x3b0ce4u: goto label_3b0ce4;
        case 0x3b0ce8u: goto label_3b0ce8;
        case 0x3b0cecu: goto label_3b0cec;
        case 0x3b0cf0u: goto label_3b0cf0;
        case 0x3b0cf4u: goto label_3b0cf4;
        case 0x3b0cf8u: goto label_3b0cf8;
        case 0x3b0cfcu: goto label_3b0cfc;
        case 0x3b0d00u: goto label_3b0d00;
        case 0x3b0d04u: goto label_3b0d04;
        case 0x3b0d08u: goto label_3b0d08;
        case 0x3b0d0cu: goto label_3b0d0c;
        case 0x3b0d10u: goto label_3b0d10;
        case 0x3b0d14u: goto label_3b0d14;
        case 0x3b0d18u: goto label_3b0d18;
        case 0x3b0d1cu: goto label_3b0d1c;
        case 0x3b0d20u: goto label_3b0d20;
        case 0x3b0d24u: goto label_3b0d24;
        case 0x3b0d28u: goto label_3b0d28;
        case 0x3b0d2cu: goto label_3b0d2c;
        case 0x3b0d30u: goto label_3b0d30;
        case 0x3b0d34u: goto label_3b0d34;
        case 0x3b0d38u: goto label_3b0d38;
        case 0x3b0d3cu: goto label_3b0d3c;
        case 0x3b0d40u: goto label_3b0d40;
        case 0x3b0d44u: goto label_3b0d44;
        case 0x3b0d48u: goto label_3b0d48;
        case 0x3b0d4cu: goto label_3b0d4c;
        case 0x3b0d50u: goto label_3b0d50;
        case 0x3b0d54u: goto label_3b0d54;
        case 0x3b0d58u: goto label_3b0d58;
        case 0x3b0d5cu: goto label_3b0d5c;
        case 0x3b0d60u: goto label_3b0d60;
        case 0x3b0d64u: goto label_3b0d64;
        case 0x3b0d68u: goto label_3b0d68;
        case 0x3b0d6cu: goto label_3b0d6c;
        case 0x3b0d70u: goto label_3b0d70;
        case 0x3b0d74u: goto label_3b0d74;
        case 0x3b0d78u: goto label_3b0d78;
        case 0x3b0d7cu: goto label_3b0d7c;
        case 0x3b0d80u: goto label_3b0d80;
        case 0x3b0d84u: goto label_3b0d84;
        case 0x3b0d88u: goto label_3b0d88;
        case 0x3b0d8cu: goto label_3b0d8c;
        case 0x3b0d90u: goto label_3b0d90;
        case 0x3b0d94u: goto label_3b0d94;
        case 0x3b0d98u: goto label_3b0d98;
        case 0x3b0d9cu: goto label_3b0d9c;
        case 0x3b0da0u: goto label_3b0da0;
        case 0x3b0da4u: goto label_3b0da4;
        case 0x3b0da8u: goto label_3b0da8;
        case 0x3b0dacu: goto label_3b0dac;
        case 0x3b0db0u: goto label_3b0db0;
        case 0x3b0db4u: goto label_3b0db4;
        case 0x3b0db8u: goto label_3b0db8;
        case 0x3b0dbcu: goto label_3b0dbc;
        case 0x3b0dc0u: goto label_3b0dc0;
        case 0x3b0dc4u: goto label_3b0dc4;
        case 0x3b0dc8u: goto label_3b0dc8;
        case 0x3b0dccu: goto label_3b0dcc;
        case 0x3b0dd0u: goto label_3b0dd0;
        case 0x3b0dd4u: goto label_3b0dd4;
        case 0x3b0dd8u: goto label_3b0dd8;
        case 0x3b0ddcu: goto label_3b0ddc;
        case 0x3b0de0u: goto label_3b0de0;
        case 0x3b0de4u: goto label_3b0de4;
        case 0x3b0de8u: goto label_3b0de8;
        case 0x3b0decu: goto label_3b0dec;
        case 0x3b0df0u: goto label_3b0df0;
        case 0x3b0df4u: goto label_3b0df4;
        case 0x3b0df8u: goto label_3b0df8;
        case 0x3b0dfcu: goto label_3b0dfc;
        case 0x3b0e00u: goto label_3b0e00;
        case 0x3b0e04u: goto label_3b0e04;
        case 0x3b0e08u: goto label_3b0e08;
        case 0x3b0e0cu: goto label_3b0e0c;
        case 0x3b0e10u: goto label_3b0e10;
        case 0x3b0e14u: goto label_3b0e14;
        case 0x3b0e18u: goto label_3b0e18;
        case 0x3b0e1cu: goto label_3b0e1c;
        case 0x3b0e20u: goto label_3b0e20;
        case 0x3b0e24u: goto label_3b0e24;
        case 0x3b0e28u: goto label_3b0e28;
        case 0x3b0e2cu: goto label_3b0e2c;
        case 0x3b0e30u: goto label_3b0e30;
        case 0x3b0e34u: goto label_3b0e34;
        case 0x3b0e38u: goto label_3b0e38;
        case 0x3b0e3cu: goto label_3b0e3c;
        case 0x3b0e40u: goto label_3b0e40;
        case 0x3b0e44u: goto label_3b0e44;
        case 0x3b0e48u: goto label_3b0e48;
        case 0x3b0e4cu: goto label_3b0e4c;
        case 0x3b0e50u: goto label_3b0e50;
        case 0x3b0e54u: goto label_3b0e54;
        case 0x3b0e58u: goto label_3b0e58;
        case 0x3b0e5cu: goto label_3b0e5c;
        case 0x3b0e60u: goto label_3b0e60;
        case 0x3b0e64u: goto label_3b0e64;
        case 0x3b0e68u: goto label_3b0e68;
        case 0x3b0e6cu: goto label_3b0e6c;
        case 0x3b0e70u: goto label_3b0e70;
        case 0x3b0e74u: goto label_3b0e74;
        case 0x3b0e78u: goto label_3b0e78;
        case 0x3b0e7cu: goto label_3b0e7c;
        case 0x3b0e80u: goto label_3b0e80;
        case 0x3b0e84u: goto label_3b0e84;
        case 0x3b0e88u: goto label_3b0e88;
        case 0x3b0e8cu: goto label_3b0e8c;
        case 0x3b0e90u: goto label_3b0e90;
        case 0x3b0e94u: goto label_3b0e94;
        case 0x3b0e98u: goto label_3b0e98;
        case 0x3b0e9cu: goto label_3b0e9c;
        case 0x3b0ea0u: goto label_3b0ea0;
        case 0x3b0ea4u: goto label_3b0ea4;
        case 0x3b0ea8u: goto label_3b0ea8;
        case 0x3b0eacu: goto label_3b0eac;
        case 0x3b0eb0u: goto label_3b0eb0;
        case 0x3b0eb4u: goto label_3b0eb4;
        case 0x3b0eb8u: goto label_3b0eb8;
        case 0x3b0ebcu: goto label_3b0ebc;
        case 0x3b0ec0u: goto label_3b0ec0;
        case 0x3b0ec4u: goto label_3b0ec4;
        case 0x3b0ec8u: goto label_3b0ec8;
        case 0x3b0eccu: goto label_3b0ecc;
        case 0x3b0ed0u: goto label_3b0ed0;
        case 0x3b0ed4u: goto label_3b0ed4;
        case 0x3b0ed8u: goto label_3b0ed8;
        case 0x3b0edcu: goto label_3b0edc;
        case 0x3b0ee0u: goto label_3b0ee0;
        case 0x3b0ee4u: goto label_3b0ee4;
        default: break;
    }

    ctx->pc = 0x3b0c88u;

label_3b0c88:
    // 0x3b0c88: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b0c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3b0c8c:
    // 0x3b0c8c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3b0c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3b0c90:
    // 0x3b0c90: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3b0c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3b0c94:
    // 0x3b0c94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b0c94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b0c98:
    // 0x3b0c98: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3b0c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3b0c9c:
    // 0x3b0c9c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3b0c9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b0ca0:
    // 0x3b0ca0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3b0ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3b0ca4:
    // 0x3b0ca4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3b0ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3b0ca8:
    // 0x3b0ca8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b0ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3b0cac:
    // 0x3b0cac: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3b0cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_3b0cb0:
    // 0x3b0cb0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3b0cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_3b0cb4:
    // 0x3b0cb4: 0x12600074  beqz        $s3, . + 4 + (0x74 << 2)
label_3b0cb8:
    if (ctx->pc == 0x3B0CB8u) {
        ctx->pc = 0x3B0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CB4u;
        // 0x3b0cb8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0CBCu;
        goto label_3b0cbc;
    }
    ctx->pc = 0x3B0CB4u;
    {
        const bool branch_taken_0x3b0cb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CB4u;
        // 0x3b0cb8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0cb4) {
            ctx->pc = 0x3B0E88u;
            goto label_3b0e88;
        }
    }
    ctx->pc = 0x3B0CBCu;
label_3b0cbc:
    // 0x3b0cbc: 0x12a00072  beqz        $s5, . + 4 + (0x72 << 2)
label_3b0cc0:
    if (ctx->pc == 0x3B0CC0u) {
        ctx->pc = 0x3B0CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CBCu;
        // 0x3b0cc0: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0CC4u;
        goto label_3b0cc4;
    }
    ctx->pc = 0x3B0CBCu;
    {
        const bool branch_taken_0x3b0cbc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CBCu;
        // 0x3b0cc0: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0cbc) {
            ctx->pc = 0x3B0E88u;
            goto label_3b0e88;
        }
    }
    ctx->pc = 0x3B0CC4u;
label_3b0cc4:
    // 0x3b0cc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b0cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b0cc8:
    // 0x3b0cc8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3b0cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b0ccc:
    // 0x3b0ccc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3b0cccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b0cd0:
    // 0x3b0cd0: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x3b0cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3b0cd4:
    // 0x3b0cd4: 0x0  nop
    ctx->pc = 0x3b0cd4u;
    // NOP
label_3b0cd8:
    // 0x3b0cd8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b0cdc:
    // 0x3b0cdc: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
label_3b0ce0:
    if (ctx->pc == 0x3B0CE0u) {
        ctx->pc = 0x3B0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CDCu;
        // 0x3b0ce0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0CE4u;
        goto label_3b0ce4;
    }
    ctx->pc = 0x3B0CDCu;
    {
        const bool branch_taken_0x3b0cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x3B0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CDCu;
        // 0x3b0ce0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0cdc) {
            ctx->pc = 0x3B0CECu;
            goto label_3b0cec;
        }
    }
    ctx->pc = 0x3B0CE4u;
label_3b0ce4:
    // 0x3b0ce4: 0xc10376a  jal         func_40DDA8
label_3b0ce8:
    if (ctx->pc == 0x3B0CE8u) {
        ctx->pc = 0x3B0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CE4u;
        // 0x3b0ce8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0CECu;
        goto label_3b0cec;
    }
    ctx->pc = 0x3B0CE4u;
    SET_GPR_U32(ctx, 31, 0x3B0CECu);
    ctx->pc = 0x3B0CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0CE4u;
    // 0x3b0ce8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B0CE4u, 0x3B0CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0CECu;
label_3b0cec:
    // 0x3b0cec: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x3b0cecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3b0cf0:
    // 0x3b0cf0: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x3b0cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3b0cf4:
    // 0x3b0cf4: 0x8e100014  lw          $s0, 0x14($s0)
    ctx->pc = 0x3b0cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3b0cf8:
    // 0x3b0cf8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_3b0cfc:
    if (ctx->pc == 0x3B0CFCu) {
        ctx->pc = 0x3B0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CF8u;
        // 0x3b0cfc: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0D00u;
        goto label_3b0d00;
    }
    ctx->pc = 0x3B0CF8u;
    {
        const bool branch_taken_0x3b0cf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0CF8u;
        // 0x3b0cfc: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0cf8) {
            ctx->pc = 0x3B0CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0cd8;
        }
    }
    ctx->pc = 0x3B0D00u;
label_3b0d00:
    // 0x3b0d00: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x3b0d00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_3b0d04:
    // 0x3b0d04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b0d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0d08:
    // 0x3b0d08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b0d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b0d0c:
    // 0x3b0d0c: 0x240501a1  addiu       $a1, $zero, 0x1A1
    ctx->pc = 0x3b0d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
label_3b0d10:
    // 0x3b0d10: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3b0d10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_3b0d14:
    // 0x3b0d14: 0xc103404  jal         func_40D010
label_3b0d18:
    if (ctx->pc == 0x3B0D18u) {
        ctx->pc = 0x3B0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D14u;
        // 0x3b0d18: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0D1Cu;
        goto label_3b0d1c;
    }
    ctx->pc = 0x3B0D14u;
    SET_GPR_U32(ctx, 31, 0x3B0D1Cu);
    ctx->pc = 0x3B0D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D14u;
    // 0x3b0d18: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3B0D14u, 0x3B0D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D1Cu;
label_3b0d1c:
    // 0x3b0d1c: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_3b0d20:
    if (ctx->pc == 0x3B0D20u) {
        ctx->pc = 0x3B0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D1Cu;
        // 0x3b0d20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0D24u;
        goto label_3b0d24;
    }
    ctx->pc = 0x3B0D1Cu;
    {
        const bool branch_taken_0x3b0d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D1Cu;
        // 0x3b0d20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0d1c) {
            ctx->pc = 0x3B0E88u;
            goto label_3b0e88;
        }
    }
    ctx->pc = 0x3B0D24u;
label_3b0d24:
    // 0x3b0d24: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3b0d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3b0d28:
    // 0x3b0d28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b0d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b0d2c:
    // 0x3b0d2c: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
label_3b0d30:
    if (ctx->pc == 0x3B0D30u) {
        ctx->pc = 0x3B0D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D2Cu;
        // 0x3b0d30: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0D34u;
        goto label_3b0d34;
    }
    ctx->pc = 0x3B0D2Cu;
    {
        const bool branch_taken_0x3b0d2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B0D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D2Cu;
        // 0x3b0d30: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0d2c) {
            ctx->pc = 0x3B0D3Cu;
            goto label_3b0d3c;
        }
    }
    ctx->pc = 0x3B0D34u;
label_3b0d34:
    // 0x3b0d34: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b0d38:
    if (ctx->pc == 0x3B0D38u) {
        ctx->pc = 0x3B0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D34u;
        // 0x3b0d38: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0D3Cu;
        goto label_3b0d3c;
    }
    ctx->pc = 0x3B0D34u;
    {
        const bool branch_taken_0x3b0d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D34u;
        // 0x3b0d38: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0d34) {
            ctx->pc = 0x3B0D48u;
            goto label_3b0d48;
        }
    }
    ctx->pc = 0x3B0D3Cu;
label_3b0d3c:
    // 0x3b0d3c: 0xc10376a  jal         func_40DDA8
label_3b0d40:
    if (ctx->pc == 0x3B0D40u) {
        ctx->pc = 0x3B0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D3Cu;
        // 0x3b0d40: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0D44u;
        goto label_3b0d44;
    }
    ctx->pc = 0x3B0D3Cu;
    SET_GPR_U32(ctx, 31, 0x3B0D44u);
    ctx->pc = 0x3B0D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D3Cu;
    // 0x3b0d40: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B0D3Cu, 0x3B0D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D44u;
label_3b0d44:
    // 0x3b0d44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b0d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0d48:
    // 0x3b0d48: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3b0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3b0d4c:
    // 0x3b0d4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b0d50:
    // 0x3b0d50: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x3b0d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_3b0d54:
    // 0x3b0d54: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_3b0d58:
    if (ctx->pc == 0x3B0D58u) {
        ctx->pc = 0x3B0D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D54u;
        // 0x3b0d58: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0D5Cu;
        goto label_3b0d5c;
    }
    ctx->pc = 0x3B0D54u;
    {
        const bool branch_taken_0x3b0d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B0D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D54u;
        // 0x3b0d58: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0d54) {
            ctx->pc = 0x3B0D60u;
            goto label_3b0d60;
        }
    }
    ctx->pc = 0x3B0D5Cu;
label_3b0d5c:
    // 0x3b0d5c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3b0d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_3b0d60:
    // 0x3b0d60: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3b0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3b0d64:
    // 0x3b0d64: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_3b0d68:
    if (ctx->pc == 0x3B0D68u) {
        ctx->pc = 0x3B0D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D64u;
        // 0x3b0d68: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0D6Cu;
        goto label_3b0d6c;
    }
    ctx->pc = 0x3B0D64u;
    {
        const bool branch_taken_0x3b0d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b0d64) {
            ctx->pc = 0x3B0D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0D64u;
            // 0x3b0d68: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0D7Cu;
            goto label_3b0d7c;
        }
    }
    ctx->pc = 0x3B0D6Cu;
label_3b0d6c:
    // 0x3b0d6c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3b0d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3b0d70:
    // 0x3b0d70: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3b0d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3b0d74:
    // 0x3b0d74: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3b0d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_3b0d78:
    // 0x3b0d78: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3b0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3b0d7c:
    // 0x3b0d7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3b0d80:
    if (ctx->pc == 0x3B0D80u) {
        ctx->pc = 0x3B0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D7Cu;
        // 0x3b0d80: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0D84u;
        goto label_3b0d84;
    }
    ctx->pc = 0x3B0D7Cu;
    {
        const bool branch_taken_0x3b0d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D7Cu;
        // 0x3b0d80: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0d7c) {
            ctx->pc = 0x3B0D8Cu;
            goto label_3b0d8c;
        }
    }
    ctx->pc = 0x3B0D84u;
label_3b0d84:
    // 0x3b0d84: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3b0d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3b0d88:
    // 0x3b0d88: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3b0d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_3b0d8c:
    // 0x3b0d8c: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x3b0d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b0d90:
    // 0x3b0d90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b0d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b0d94:
    // 0x3b0d94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b0d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b0d98:
    // 0x3b0d98: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3b0d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3b0d9c:
    // 0x3b0d9c: 0xc10486e  jal         func_4121B8
label_3b0da0:
    if (ctx->pc == 0x3B0DA0u) {
        ctx->pc = 0x3B0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D9Cu;
        // 0x3b0da0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0DA4u;
        goto label_3b0da4;
    }
    ctx->pc = 0x3B0D9Cu;
    SET_GPR_U32(ctx, 31, 0x3B0DA4u);
    ctx->pc = 0x3B0DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D9Cu;
    // 0x3b0da0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3B0D9Cu, 0x3B0DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0DA4u;
label_3b0da4:
    // 0x3b0da4: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_3b0da8:
    if (ctx->pc == 0x3B0DA8u) {
        ctx->pc = 0x3B0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0DA4u;
        // 0x3b0da8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0DACu;
        goto label_3b0dac;
    }
    ctx->pc = 0x3B0DA4u;
    {
        const bool branch_taken_0x3b0da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0DA4u;
        // 0x3b0da8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0da4) {
            ctx->pc = 0x3B0EBCu;
            goto label_3b0ebc;
        }
    }
    ctx->pc = 0x3B0DACu;
label_3b0dac:
    // 0x3b0dac: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
label_3b0db0:
    if (ctx->pc == 0x3B0DB0u) {
        ctx->pc = 0x3B0DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0DACu;
        // 0x3b0db0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0DB4u;
        goto label_3b0db4;
    }
    ctx->pc = 0x3B0DACu;
    {
        const bool branch_taken_0x3b0dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0DACu;
        // 0x3b0db0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0dac) {
            ctx->pc = 0x3B0E9Cu;
            goto label_3b0e9c;
        }
    }
    ctx->pc = 0x3B0DB4u;
label_3b0db4:
    // 0x3b0db4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3b0db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3b0db8:
    // 0x3b0db8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3b0dbc:
    if (ctx->pc == 0x3B0DBCu) {
        ctx->pc = 0x3B0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0DB8u;
        // 0x3b0dbc: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0DC0u;
        goto label_3b0dc0;
    }
    ctx->pc = 0x3B0DB8u;
    {
        const bool branch_taken_0x3b0db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b0db8) {
            ctx->pc = 0x3B0DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0DB8u;
            // 0x3b0dbc: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0DCCu;
            goto label_3b0dcc;
        }
    }
    ctx->pc = 0x3B0DC0u;
label_3b0dc0:
    // 0x3b0dc0: 0xc1036d2  jal         func_40DB48
label_3b0dc4:
    if (ctx->pc == 0x3B0DC4u) {
        ctx->pc = 0x3B0DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0DC0u;
        // 0x3b0dc4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0DC8u;
        goto label_3b0dc8;
    }
    ctx->pc = 0x3B0DC0u;
    SET_GPR_U32(ctx, 31, 0x3B0DC8u);
    ctx->pc = 0x3B0DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0DC0u;
    // 0x3b0dc4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B0DC0u, 0x3B0DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0DC8u;
label_3b0dc8:
    // 0x3b0dc8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b0dc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0dcc:
    // 0x3b0dcc: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3b0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3b0dd0:
    // 0x3b0dd0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b0dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b0dd4:
    // 0x3b0dd4: 0x2029018  mult        $s2, $s0, $v0
    ctx->pc = 0x3b0dd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_3b0dd8:
    // 0x3b0dd8: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x3b0dd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3b0ddc:
    // 0x3b0ddc: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3b0ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3b0de0:
    // 0x3b0de0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b0de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b0de4:
    // 0x3b0de4: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3b0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3b0de8:
    // 0x3b0de8: 0x34a501a1  ori         $a1, $a1, 0x1A1
    ctx->pc = 0x3b0de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
label_3b0dec:
    // 0x3b0dec: 0x40f809  jalr        $v0
label_3b0df0:
    if (ctx->pc == 0x3B0DF0u) {
        ctx->pc = 0x3B0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0DECu;
        // 0x3b0df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0DF4u;
        goto label_3b0df4;
    }
    ctx->pc = 0x3B0DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B0DF4u);
        ctx->pc = 0x3B0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0DECu;
        // 0x3b0df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0DECu, 0x3B0DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0DF4u;
label_3b0df4:
    // 0x3b0df4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b0df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0df8:
    // 0x3b0df8: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_3b0dfc:
    if (ctx->pc == 0x3B0DFCu) {
        ctx->pc = 0x3B0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0DF8u;
        // 0x3b0dfc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0E00u;
        goto label_3b0e00;
    }
    ctx->pc = 0x3B0DF8u;
    {
        const bool branch_taken_0x3b0df8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0DF8u;
        // 0x3b0dfc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0df8) {
            ctx->pc = 0x3B0E88u;
            goto label_3b0e88;
        }
    }
    ctx->pc = 0x3B0E00u;
label_3b0e00:
    // 0x3b0e00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b0e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b0e04:
    // 0x3b0e04: 0xc0bb778  jal         func_2EDDE0
label_3b0e08:
    if (ctx->pc == 0x3B0E08u) {
        ctx->pc = 0x3B0E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E04u;
        // 0x3b0e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0E0Cu;
        goto label_3b0e0c;
    }
    ctx->pc = 0x3B0E04u;
    SET_GPR_U32(ctx, 31, 0x3B0E0Cu);
    ctx->pc = 0x3B0E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0E04u;
    // 0x3b0e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3B0E04u, 0x3B0E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0E0Cu;
label_3b0e0c:
    // 0x3b0e0c: 0x1a000016  blez        $s0, . + 4 + (0x16 << 2)
label_3b0e10:
    if (ctx->pc == 0x3B0E10u) {
        ctx->pc = 0x3B0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E0Cu;
        // 0x3b0e10: 0x101023  negu        $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0E14u;
        goto label_3b0e14;
    }
    ctx->pc = 0x3B0E0Cu;
    {
        const bool branch_taken_0x3b0e0c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3B0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E0Cu;
        // 0x3b0e10: 0x101023  negu        $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0e0c) {
            ctx->pc = 0x3B0E68u;
            goto label_3b0e68;
        }
    }
    ctx->pc = 0x3B0E14u;
label_3b0e14:
    // 0x3b0e14: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x3b0e14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3b0e18:
    // 0x3b0e18: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_3b0e1c:
    if (ctx->pc == 0x3B0E1Cu) {
        ctx->pc = 0x3B0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E18u;
        // 0x3b0e1c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0E20u;
        goto label_3b0e20;
    }
    ctx->pc = 0x3B0E18u;
    {
        const bool branch_taken_0x3b0e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E18u;
        // 0x3b0e1c: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0e18) {
            ctx->pc = 0x3B0E48u;
            goto label_3b0e48;
        }
    }
    ctx->pc = 0x3B0E20u;
label_3b0e20:
    // 0x3b0e20: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3b0e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_3b0e24:
    // 0x3b0e24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3b0e28:
    if (ctx->pc == 0x3B0E28u) {
        ctx->pc = 0x3B0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E24u;
        // 0x3b0e28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0E2Cu;
        goto label_3b0e2c;
    }
    ctx->pc = 0x3B0E24u;
    {
        const bool branch_taken_0x3b0e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E24u;
        // 0x3b0e28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0e24) {
            ctx->pc = 0x3B0E3Cu;
            goto label_3b0e3c;
        }
    }
    ctx->pc = 0x3B0E2Cu;
label_3b0e2c:
    // 0x3b0e2c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3b0e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3b0e30:
    // 0x3b0e30: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3b0e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3b0e34:
    // 0x3b0e34: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x3b0e34u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
label_3b0e38:
    // 0x3b0e38: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3b0e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3b0e3c:
    // 0x3b0e3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3b0e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3b0e40:
    // 0x3b0e40: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_3b0e44:
    if (ctx->pc == 0x3B0E44u) {
        ctx->pc = 0x3B0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E40u;
        // 0x3b0e44: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0E48u;
        goto label_3b0e48;
    }
    ctx->pc = 0x3B0E40u;
    {
        const bool branch_taken_0x3b0e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E40u;
        // 0x3b0e44: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0e40) {
            ctx->pc = 0x3B0E6Cu;
            goto label_3b0e6c;
        }
    }
    ctx->pc = 0x3B0E48u;
label_3b0e48:
    // 0x3b0e48: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3b0e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_3b0e4c:
    // 0x3b0e4c: 0x0  nop
    ctx->pc = 0x3b0e4cu;
    // NOP
label_3b0e50:
    // 0x3b0e50: 0x0  nop
    ctx->pc = 0x3b0e50u;
    // NOP
label_3b0e54:
    // 0x3b0e54: 0x0  nop
    ctx->pc = 0x3b0e54u;
    // NOP
label_3b0e58:
    // 0x3b0e58: 0x0  nop
    ctx->pc = 0x3b0e58u;
    // NOP
label_3b0e5c:
    // 0x3b0e5c: 0x0  nop
    ctx->pc = 0x3b0e5cu;
    // NOP
label_3b0e60:
    // 0x3b0e60: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_3b0e64:
    if (ctx->pc == 0x3B0E64u) {
        ctx->pc = 0x3B0E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E60u;
        // 0x3b0e64: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0E68u;
        goto label_3b0e68;
    }
    ctx->pc = 0x3B0E60u;
    {
        const bool branch_taken_0x3b0e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E60u;
        // 0x3b0e64: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0e60) {
            ctx->pc = 0x3B0E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0e4c;
        }
    }
    ctx->pc = 0x3B0E68u;
label_3b0e68:
    // 0x3b0e68: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x3b0e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3b0e6c:
    // 0x3b0e6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b0e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b0e70:
    // 0x3b0e70: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x3b0e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3b0e74:
    // 0x3b0e74: 0x3012  mflo        $a2
    ctx->pc = 0x3b0e74u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3b0e78:
    // 0x3b0e78: 0xc10486e  jal         func_4121B8
label_3b0e7c:
    if (ctx->pc == 0x3B0E7Cu) {
        ctx->pc = 0x3B0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E78u;
        // 0x3b0e7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0E80u;
        goto label_3b0e80;
    }
    ctx->pc = 0x3B0E78u;
    SET_GPR_U32(ctx, 31, 0x3B0E80u);
    ctx->pc = 0x3B0E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0E78u;
    // 0x3b0e7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3B0E78u, 0x3B0E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0E80u;
label_3b0e80:
    // 0x3b0e80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3b0e84:
    if (ctx->pc == 0x3B0E84u) {
        ctx->pc = 0x3B0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E80u;
        // 0x3b0e84: 0x26c3e880  addiu       $v1, $s6, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0E88u;
        goto label_3b0e88;
    }
    ctx->pc = 0x3B0E80u;
    {
        const bool branch_taken_0x3b0e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E80u;
        // 0x3b0e84: 0x26c3e880  addiu       $v1, $s6, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0e80) {
            ctx->pc = 0x3B0E90u;
            goto label_3b0e90;
        }
    }
    ctx->pc = 0x3B0E88u;
label_3b0e88:
    // 0x3b0e88: 0x1000000c  b           . + 4 + (0xC << 2)
label_3b0e8c:
    if (ctx->pc == 0x3B0E8Cu) {
        ctx->pc = 0x3B0E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E88u;
        // 0x3b0e8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0E90u;
        goto label_3b0e90;
    }
    ctx->pc = 0x3B0E88u;
    {
        const bool branch_taken_0x3b0e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E88u;
        // 0x3b0e8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0e88) {
            ctx->pc = 0x3B0EBCu;
            goto label_3b0ebc;
        }
    }
    ctx->pc = 0x3B0E90u;
label_3b0e90:
    // 0x3b0e90: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3b0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3b0e94:
    // 0x3b0e94: 0x40f809  jalr        $v0
label_3b0e98:
    if (ctx->pc == 0x3B0E98u) {
        ctx->pc = 0x3B0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E94u;
        // 0x3b0e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0E9Cu;
        goto label_3b0e9c;
    }
    ctx->pc = 0x3B0E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B0E9Cu);
        ctx->pc = 0x3B0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E94u;
        // 0x3b0e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0E94u, 0x3B0E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0E9Cu;
label_3b0e9c:
    // 0x3b0e9c: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x3b0e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3b0ea0:
    // 0x3b0ea0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b0ea4:
    if (ctx->pc == 0x3B0EA4u) {
        ctx->pc = 0x3B0EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0EA0u;
        // 0x3b0ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0EA8u;
        goto label_3b0ea8;
    }
    ctx->pc = 0x3B0EA0u;
    {
        const bool branch_taken_0x3b0ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0EA0u;
        // 0x3b0ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0ea0) {
            ctx->pc = 0x3B0EB8u;
            goto label_3b0eb8;
        }
    }
    ctx->pc = 0x3B0EA8u;
label_3b0ea8:
    // 0x3b0ea8: 0xc0ec322  jal         func_3B0C88
label_3b0eac:
    if (ctx->pc == 0x3B0EACu) {
        ctx->pc = 0x3B0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0EA8u;
        // 0x3b0eac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0EB0u;
        goto label_3b0eb0;
    }
    ctx->pc = 0x3B0EA8u;
    SET_GPR_U32(ctx, 31, 0x3B0EB0u);
    ctx->pc = 0x3B0EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0EA8u;
    // 0x3b0eac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C88u;
    goto label_3b0c88;
    ctx->pc = 0x3B0EB0u;
label_3b0eb0:
    // 0x3b0eb0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3b0eb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0eb4:
    // 0x3b0eb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b0eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b0eb8:
    // 0x3b0eb8: 0x277100b  movn        $v0, $s3, $s7
    ctx->pc = 0x3b0eb8u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
label_3b0ebc:
    // 0x3b0ebc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3b0ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b0ec0:
    // 0x3b0ec0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3b0ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b0ec4:
    // 0x3b0ec4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3b0ec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b0ec8:
    // 0x3b0ec8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3b0ec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b0ecc:
    // 0x3b0ecc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b0eccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b0ed0:
    // 0x3b0ed0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3b0ed0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b0ed4:
    // 0x3b0ed4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3b0ed4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b0ed8:
    // 0x3b0ed8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3b0ed8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b0edc:
    // 0x3b0edc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b0edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b0ee0:
    // 0x3b0ee0: 0x3e00008  jr          $ra
label_3b0ee4:
    if (ctx->pc == 0x3B0EE4u) {
        ctx->pc = 0x3B0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0EE0u;
        // 0x3b0ee4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0EE8u;
        goto label_fallthrough_0x3b0ee0;
    }
    ctx->pc = 0x3B0EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0EE0u;
        // 0x3b0ee4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b0ee0:
    ctx->pc = 0x3B0EE8u;
}
