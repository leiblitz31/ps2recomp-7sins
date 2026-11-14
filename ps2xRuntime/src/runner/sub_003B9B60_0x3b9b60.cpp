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

// Function: sub_003B9B60
// Address: 0x3b9b60 - 0x3b9d78
void sub_003B9B60_0x3b9b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9B60_0x3b9b60");
#endif

    switch (ctx->pc) {
        case 0x3b9b60u: goto label_3b9b60;
        case 0x3b9b64u: goto label_3b9b64;
        case 0x3b9b68u: goto label_3b9b68;
        case 0x3b9b6cu: goto label_3b9b6c;
        case 0x3b9b70u: goto label_3b9b70;
        case 0x3b9b74u: goto label_3b9b74;
        case 0x3b9b78u: goto label_3b9b78;
        case 0x3b9b7cu: goto label_3b9b7c;
        case 0x3b9b80u: goto label_3b9b80;
        case 0x3b9b84u: goto label_3b9b84;
        case 0x3b9b88u: goto label_3b9b88;
        case 0x3b9b8cu: goto label_3b9b8c;
        case 0x3b9b90u: goto label_3b9b90;
        case 0x3b9b94u: goto label_3b9b94;
        case 0x3b9b98u: goto label_3b9b98;
        case 0x3b9b9cu: goto label_3b9b9c;
        case 0x3b9ba0u: goto label_3b9ba0;
        case 0x3b9ba4u: goto label_3b9ba4;
        case 0x3b9ba8u: goto label_3b9ba8;
        case 0x3b9bacu: goto label_3b9bac;
        case 0x3b9bb0u: goto label_3b9bb0;
        case 0x3b9bb4u: goto label_3b9bb4;
        case 0x3b9bb8u: goto label_3b9bb8;
        case 0x3b9bbcu: goto label_3b9bbc;
        case 0x3b9bc0u: goto label_3b9bc0;
        case 0x3b9bc4u: goto label_3b9bc4;
        case 0x3b9bc8u: goto label_3b9bc8;
        case 0x3b9bccu: goto label_3b9bcc;
        case 0x3b9bd0u: goto label_3b9bd0;
        case 0x3b9bd4u: goto label_3b9bd4;
        case 0x3b9bd8u: goto label_3b9bd8;
        case 0x3b9bdcu: goto label_3b9bdc;
        case 0x3b9be0u: goto label_3b9be0;
        case 0x3b9be4u: goto label_3b9be4;
        case 0x3b9be8u: goto label_3b9be8;
        case 0x3b9becu: goto label_3b9bec;
        case 0x3b9bf0u: goto label_3b9bf0;
        case 0x3b9bf4u: goto label_3b9bf4;
        case 0x3b9bf8u: goto label_3b9bf8;
        case 0x3b9bfcu: goto label_3b9bfc;
        case 0x3b9c00u: goto label_3b9c00;
        case 0x3b9c04u: goto label_3b9c04;
        case 0x3b9c08u: goto label_3b9c08;
        case 0x3b9c0cu: goto label_3b9c0c;
        case 0x3b9c10u: goto label_3b9c10;
        case 0x3b9c14u: goto label_3b9c14;
        case 0x3b9c18u: goto label_3b9c18;
        case 0x3b9c1cu: goto label_3b9c1c;
        case 0x3b9c20u: goto label_3b9c20;
        case 0x3b9c24u: goto label_3b9c24;
        case 0x3b9c28u: goto label_3b9c28;
        case 0x3b9c2cu: goto label_3b9c2c;
        case 0x3b9c30u: goto label_3b9c30;
        case 0x3b9c34u: goto label_3b9c34;
        case 0x3b9c38u: goto label_3b9c38;
        case 0x3b9c3cu: goto label_3b9c3c;
        case 0x3b9c40u: goto label_3b9c40;
        case 0x3b9c44u: goto label_3b9c44;
        case 0x3b9c48u: goto label_3b9c48;
        case 0x3b9c4cu: goto label_3b9c4c;
        case 0x3b9c50u: goto label_3b9c50;
        case 0x3b9c54u: goto label_3b9c54;
        case 0x3b9c58u: goto label_3b9c58;
        case 0x3b9c5cu: goto label_3b9c5c;
        case 0x3b9c60u: goto label_3b9c60;
        case 0x3b9c64u: goto label_3b9c64;
        case 0x3b9c68u: goto label_3b9c68;
        case 0x3b9c6cu: goto label_3b9c6c;
        case 0x3b9c70u: goto label_3b9c70;
        case 0x3b9c74u: goto label_3b9c74;
        case 0x3b9c78u: goto label_3b9c78;
        case 0x3b9c7cu: goto label_3b9c7c;
        case 0x3b9c80u: goto label_3b9c80;
        case 0x3b9c84u: goto label_3b9c84;
        case 0x3b9c88u: goto label_3b9c88;
        case 0x3b9c8cu: goto label_3b9c8c;
        case 0x3b9c90u: goto label_3b9c90;
        case 0x3b9c94u: goto label_3b9c94;
        case 0x3b9c98u: goto label_3b9c98;
        case 0x3b9c9cu: goto label_3b9c9c;
        case 0x3b9ca0u: goto label_3b9ca0;
        case 0x3b9ca4u: goto label_3b9ca4;
        case 0x3b9ca8u: goto label_3b9ca8;
        case 0x3b9cacu: goto label_3b9cac;
        case 0x3b9cb0u: goto label_3b9cb0;
        case 0x3b9cb4u: goto label_3b9cb4;
        case 0x3b9cb8u: goto label_3b9cb8;
        case 0x3b9cbcu: goto label_3b9cbc;
        case 0x3b9cc0u: goto label_3b9cc0;
        case 0x3b9cc4u: goto label_3b9cc4;
        case 0x3b9cc8u: goto label_3b9cc8;
        case 0x3b9cccu: goto label_3b9ccc;
        case 0x3b9cd0u: goto label_3b9cd0;
        case 0x3b9cd4u: goto label_3b9cd4;
        case 0x3b9cd8u: goto label_3b9cd8;
        case 0x3b9cdcu: goto label_3b9cdc;
        case 0x3b9ce0u: goto label_3b9ce0;
        case 0x3b9ce4u: goto label_3b9ce4;
        case 0x3b9ce8u: goto label_3b9ce8;
        case 0x3b9cecu: goto label_3b9cec;
        case 0x3b9cf0u: goto label_3b9cf0;
        case 0x3b9cf4u: goto label_3b9cf4;
        case 0x3b9cf8u: goto label_3b9cf8;
        case 0x3b9cfcu: goto label_3b9cfc;
        case 0x3b9d00u: goto label_3b9d00;
        case 0x3b9d04u: goto label_3b9d04;
        case 0x3b9d08u: goto label_3b9d08;
        case 0x3b9d0cu: goto label_3b9d0c;
        case 0x3b9d10u: goto label_3b9d10;
        case 0x3b9d14u: goto label_3b9d14;
        case 0x3b9d18u: goto label_3b9d18;
        case 0x3b9d1cu: goto label_3b9d1c;
        case 0x3b9d20u: goto label_3b9d20;
        case 0x3b9d24u: goto label_3b9d24;
        case 0x3b9d28u: goto label_3b9d28;
        case 0x3b9d2cu: goto label_3b9d2c;
        case 0x3b9d30u: goto label_3b9d30;
        case 0x3b9d34u: goto label_3b9d34;
        case 0x3b9d38u: goto label_3b9d38;
        case 0x3b9d3cu: goto label_3b9d3c;
        case 0x3b9d40u: goto label_3b9d40;
        case 0x3b9d44u: goto label_3b9d44;
        case 0x3b9d48u: goto label_3b9d48;
        case 0x3b9d4cu: goto label_3b9d4c;
        case 0x3b9d50u: goto label_3b9d50;
        case 0x3b9d54u: goto label_3b9d54;
        case 0x3b9d58u: goto label_3b9d58;
        case 0x3b9d5cu: goto label_3b9d5c;
        case 0x3b9d60u: goto label_3b9d60;
        case 0x3b9d64u: goto label_3b9d64;
        case 0x3b9d68u: goto label_3b9d68;
        case 0x3b9d6cu: goto label_3b9d6c;
        case 0x3b9d70u: goto label_3b9d70;
        case 0x3b9d74u: goto label_3b9d74;
        default: break;
    }

    ctx->pc = 0x3b9b60u;

label_3b9b60:
    // 0x3b9b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b9b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3b9b64:
    // 0x3b9b64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b9b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3b9b68:
    // 0x3b9b68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b9b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b9b6c:
    // 0x3b9b6c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3b9b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3b9b70:
    // 0x3b9b70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b9b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b9b74:
    // 0x3b9b74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b9b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b9b78:
    // 0x3b9b78: 0xc0ee028  jal         func_3B80A0
label_3b9b7c:
    if (ctx->pc == 0x3B9B7Cu) {
        ctx->pc = 0x3B9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9B78u;
        // 0x3b9b7c: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9B80u;
        goto label_3b9b80;
    }
    ctx->pc = 0x3B9B78u;
    SET_GPR_U32(ctx, 31, 0x3B9B80u);
    ctx->pc = 0x3B9B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B78u;
    // 0x3b9b7c: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B80A0u, 0x3B9B78u, 0x3B9B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9B80u;
label_3b9b80:
    // 0x3b9b80: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x3b9b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3b9b84:
    // 0x3b9b84: 0xc1067b0  jal         func_419EC0
label_3b9b88:
    if (ctx->pc == 0x3B9B88u) {
        ctx->pc = 0x3B9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9B84u;
        // 0x3b9b88: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9B8Cu;
        goto label_3b9b8c;
    }
    ctx->pc = 0x3B9B84u;
    SET_GPR_U32(ctx, 31, 0x3B9B8Cu);
    ctx->pc = 0x3B9B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B84u;
    // 0x3b9b88: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x3B9B84u, 0x3B9B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9B8Cu;
label_3b9b8c:
    // 0x3b9b8c: 0xc0eb85a  jal         func_3AE168
label_3b9b90:
    if (ctx->pc == 0x3B9B90u) {
        ctx->pc = 0x3B9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9B8Cu;
        // 0x3b9b90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9B94u;
        goto label_3b9b94;
    }
    ctx->pc = 0x3B9B8Cu;
    SET_GPR_U32(ctx, 31, 0x3B9B94u);
    ctx->pc = 0x3B9B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B8Cu;
    // 0x3b9b90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x3B9B8Cu, 0x3B9B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9B94u;
label_3b9b94:
    // 0x3b9b94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b9b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b9b98:
    // 0x3b9b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b9b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b9b9c:
    // 0x3b9b9c: 0xc1065f8  jal         func_4197E0
label_3b9ba0:
    if (ctx->pc == 0x3B9BA0u) {
        ctx->pc = 0x3B9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9B9Cu;
        // 0x3b9ba0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9BA4u;
        goto label_3b9ba4;
    }
    ctx->pc = 0x3B9B9Cu;
    SET_GPR_U32(ctx, 31, 0x3B9BA4u);
    ctx->pc = 0x3B9BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9B9Cu;
    // 0x3b9ba0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x3B9B9Cu, 0x3B9BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9BA4u;
label_3b9ba4:
    // 0x3b9ba4: 0xc0e2094  jal         func_388250
label_3b9ba8:
    if (ctx->pc == 0x3B9BA8u) {
        ctx->pc = 0x3B9BACu;
        goto label_3b9bac;
    }
    ctx->pc = 0x3B9BA4u;
    SET_GPR_U32(ctx, 31, 0x3B9BACu);
    ctx->pc = 0x388250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388250u, 0x3B9BA4u, 0x3B9BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9BACu;
label_3b9bac:
    // 0x3b9bac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b9bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b9bb0:
    // 0x3b9bb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b9bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b9bb4:
    // 0x3b9bb4: 0xc0e2686  jal         func_389A18
label_3b9bb8:
    if (ctx->pc == 0x3B9BB8u) {
        ctx->pc = 0x3B9BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9BB4u;
        // 0x3b9bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9BBCu;
        goto label_3b9bbc;
    }
    ctx->pc = 0x3B9BB4u;
    SET_GPR_U32(ctx, 31, 0x3B9BBCu);
    ctx->pc = 0x3B9BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9BB4u;
    // 0x3b9bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x3B9BB4u, 0x3B9BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9BBCu;
label_3b9bbc:
    // 0x3b9bbc: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x3b9bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3b9bc0:
    // 0x3b9bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b9bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9bc4:
    // 0x3b9bc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b9bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b9bc8:
    // 0x3b9bc8: 0xc0e2836  jal         func_38A0D8
label_3b9bcc:
    if (ctx->pc == 0x3B9BCCu) {
        ctx->pc = 0x3B9BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9BC8u;
        // 0x3b9bcc: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9BD0u;
        goto label_3b9bd0;
    }
    ctx->pc = 0x3B9BC8u;
    SET_GPR_U32(ctx, 31, 0x3B9BD0u);
    ctx->pc = 0x3B9BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B9BC8u;
    // 0x3b9bcc: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x3B9BC8u, 0x3B9BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9BD0u;
label_3b9bd0:
    // 0x3b9bd0: 0xae5000b8  sw          $s0, 0xB8($s2)
    ctx->pc = 0x3b9bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 16));
label_3b9bd4:
    // 0x3b9bd4: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x3b9bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3b9bd8:
    // 0x3b9bd8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3b9bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3b9bdc:
    // 0x3b9bdc: 0x8e110024  lw          $s1, 0x24($s0)
    ctx->pc = 0x3b9bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3b9be0:
    // 0x3b9be0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_3b9be4:
    if (ctx->pc == 0x3B9BE4u) {
        ctx->pc = 0x3B9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9BE0u;
        // 0x3b9be4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9BE8u;
        goto label_3b9be8;
    }
    ctx->pc = 0x3B9BE0u;
    {
        const bool branch_taken_0x3b9be0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9BE0u;
        // 0x3b9be4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9be0) {
            ctx->pc = 0x3B9BF0u;
            goto label_3b9bf0;
        }
    }
    ctx->pc = 0x3B9BE8u;
label_3b9be8:
    // 0x3b9be8: 0x10000057  b           . + 4 + (0x57 << 2)
label_3b9bec:
    if (ctx->pc == 0x3B9BECu) {
        ctx->pc = 0x3B9BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9BE8u;
        // 0x3b9bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9BF0u;
        goto label_3b9bf0;
    }
    ctx->pc = 0x3B9BE8u;
    {
        const bool branch_taken_0x3b9be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9BE8u;
        // 0x3b9bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9be8) {
            ctx->pc = 0x3B9D48u;
            goto label_3b9d48;
        }
    }
    ctx->pc = 0x3B9BF0u;
label_3b9bf0:
    // 0x3b9bf0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b9bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b9bf4:
    // 0x3b9bf4: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3b9bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3b9bf8:
    // 0x3b9bf8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3b9bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3b9bfc:
    // 0x3b9bfc: 0x40f809  jalr        $v0
label_3b9c00:
    if (ctx->pc == 0x3B9C00u) {
        ctx->pc = 0x3B9C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9BFCu;
        // 0x3b9c00: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9C04u;
        goto label_3b9c04;
    }
    ctx->pc = 0x3B9BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B9C04u);
        ctx->pc = 0x3B9C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9BFCu;
        // 0x3b9c00: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9BFCu, 0x3B9C04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B9C04u;
label_3b9c04:
    // 0x3b9c04: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3b9c04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b9c08:
    // 0x3b9c08: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
label_3b9c0c:
    if (ctx->pc == 0x3B9C0Cu) {
        ctx->pc = 0x3B9C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9C08u;
        // 0x3b9c0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9C10u;
        goto label_3b9c10;
    }
    ctx->pc = 0x3B9C08u;
    {
        const bool branch_taken_0x3b9c08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9C08u;
        // 0x3b9c0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9c08) {
            ctx->pc = 0x3B9D44u;
            goto label_3b9d44;
        }
    }
    ctx->pc = 0x3B9C10u;
label_3b9c10:
    // 0x3b9c10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b9c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b9c14:
    // 0x3b9c14: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3b9c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b9c18:
    // 0x3b9c18: 0x1a20001c  blez        $s1, . + 4 + (0x1C << 2)
label_3b9c1c:
    if (ctx->pc == 0x3B9C1Cu) {
        ctx->pc = 0x3B9C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9C18u;
        // 0x3b9c1c: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9C20u;
        goto label_3b9c20;
    }
    ctx->pc = 0x3B9C18u;
    {
        const bool branch_taken_0x3b9c18 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3B9C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9C18u;
        // 0x3b9c1c: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9c18) {
            ctx->pc = 0x3B9C8Cu;
            goto label_3b9c8c;
        }
    }
    ctx->pc = 0x3B9C20u;
label_3b9c20:
    // 0x3b9c20: 0x50600028  beql        $v1, $zero, . + 4 + (0x28 << 2)
label_3b9c24:
    if (ctx->pc == 0x3B9C24u) {
        ctx->pc = 0x3B9C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9C20u;
        // 0x3b9c24: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9C28u;
        goto label_3b9c28;
    }
    ctx->pc = 0x3B9C20u;
    {
        const bool branch_taken_0x3b9c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9c20) {
            ctx->pc = 0x3B9C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9C20u;
            // 0x3b9c24: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9CC4u;
            goto label_3b9cc4;
        }
    }
    ctx->pc = 0x3B9C28u;
label_3b9c28:
    // 0x3b9c28: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3b9c28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3b9c2c:
    // 0x3b9c2c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_3b9c30:
    if (ctx->pc == 0x3B9C30u) {
        ctx->pc = 0x3B9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9C2Cu;
        // 0x3b9c30: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9C34u;
        goto label_3b9c34;
    }
    ctx->pc = 0x3B9C2Cu;
    {
        const bool branch_taken_0x3b9c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9c2c) {
            ctx->pc = 0x3B9C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9C2Cu;
            // 0x3b9c30: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9C90u;
            goto label_3b9c90;
        }
    }
    ctx->pc = 0x3B9C34u;
label_3b9c34:
    // 0x3b9c34: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3b9c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3b9c38:
    // 0x3b9c38: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3b9c3c:
    if (ctx->pc == 0x3B9C3Cu) {
        ctx->pc = 0x3B9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9C38u;
        // 0x3b9c3c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9C40u;
        goto label_3b9c40;
    }
    ctx->pc = 0x3B9C38u;
    {
        const bool branch_taken_0x3b9c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9c38) {
            ctx->pc = 0x3B9C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9C38u;
            // 0x3b9c3c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9C68u;
            goto label_3b9c68;
        }
    }
    ctx->pc = 0x3B9C40u;
label_3b9c40:
    // 0x3b9c40: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3b9c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3b9c44:
    // 0x3b9c44: 0x25040004  addiu       $a0, $t0, 0x4
    ctx->pc = 0x3b9c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_3b9c48:
    // 0x3b9c48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3b9c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b9c4c:
    // 0x3b9c4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3b9c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b9c50:
    // 0x3b9c50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b9c54:
    // 0x3b9c54: 0x88430007  lwl         $v1, 0x7($v0)
    ctx->pc = 0x3b9c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_3b9c58:
    // 0x3b9c58: 0x98430004  lwr         $v1, 0x4($v0)
    ctx->pc = 0x3b9c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_3b9c5c:
    // 0x3b9c5c: 0xa9030003  swl         $v1, 0x3($t0)
    ctx->pc = 0x3b9c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9c60:
    // 0x3b9c60: 0xb9030000  swr         $v1, 0x0($t0)
    ctx->pc = 0x3b9c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9c64:
    // 0x3b9c64: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3b9c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3b9c68:
    // 0x3b9c68: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b9c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b9c6c:
    // 0x3b9c6c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b9c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b9c70:
    // 0x3b9c70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b9c74:
    // 0x3b9c74: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3b9c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3b9c78:
    // 0x3b9c78: 0x886b0007  lwl         $t3, 0x7($v1)
    ctx->pc = 0x3b9c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
label_3b9c7c:
    // 0x3b9c7c: 0x986b0004  lwr         $t3, 0x4($v1)
    ctx->pc = 0x3b9c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
label_3b9c80:
    // 0x3b9c80: 0xa88b0003  swl         $t3, 0x3($a0)
    ctx->pc = 0x3b9c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9c84:
    // 0x3b9c84: 0xb88b0000  swr         $t3, 0x0($a0)
    ctx->pc = 0x3b9c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9c88:
    // 0x3b9c88: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3b9c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3b9c8c:
    // 0x3b9c8c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3b9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3b9c90:
    // 0x3b9c90: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3b9c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3b9c94:
    // 0x3b9c94: 0xf1302b  sltu        $a2, $a3, $s1
    ctx->pc = 0x3b9c94u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b9c98:
    // 0x3b9c98: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b9c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b9c9c:
    // 0x3b9c9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b9c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b9ca0:
    // 0x3b9ca0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3b9ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3b9ca4:
    // 0x3b9ca4: 0x886a0007  lwl         $t2, 0x7($v1)
    ctx->pc = 0x3b9ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_3b9ca8:
    // 0x3b9ca8: 0x986a0004  lwr         $t2, 0x4($v1)
    ctx->pc = 0x3b9ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_3b9cac:
    // 0x3b9cac: 0xa88a0003  swl         $t2, 0x3($a0)
    ctx->pc = 0x3b9cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9cb0:
    // 0x3b9cb0: 0xb88a0000  swr         $t2, 0x0($a0)
    ctx->pc = 0x3b9cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9cb4:
    // 0x3b9cb4: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
label_3b9cb8:
    if (ctx->pc == 0x3B9CB8u) {
        ctx->pc = 0x3B9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9CB4u;
        // 0x3b9cb8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9CBCu;
        goto label_3b9cbc;
    }
    ctx->pc = 0x3B9CB4u;
    {
        const bool branch_taken_0x3b9cb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9CB4u;
        // 0x3b9cb8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9cb4) {
            ctx->pc = 0x3B9D44u;
            goto label_3b9d44;
        }
    }
    ctx->pc = 0x3B9CBCu;
label_3b9cbc:
    // 0x3b9cbc: 0x0  nop
    ctx->pc = 0x3b9cbcu;
    // NOP
label_3b9cc0:
    // 0x3b9cc0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3b9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3b9cc4:
    // 0x3b9cc4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3b9cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3b9cc8:
    // 0x3b9cc8: 0xf1302b  sltu        $a2, $a3, $s1
    ctx->pc = 0x3b9cc8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3b9ccc:
    // 0x3b9ccc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b9cd0:
    // 0x3b9cd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b9cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b9cd4:
    // 0x3b9cd4: 0x886a0007  lwl         $t2, 0x7($v1)
    ctx->pc = 0x3b9cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_3b9cd8:
    // 0x3b9cd8: 0x986a0004  lwr         $t2, 0x4($v1)
    ctx->pc = 0x3b9cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_3b9cdc:
    // 0x3b9cdc: 0xa88a0003  swl         $t2, 0x3($a0)
    ctx->pc = 0x3b9cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9ce0:
    // 0x3b9ce0: 0xb88a0000  swr         $t2, 0x0($a0)
    ctx->pc = 0x3b9ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9ce4:
    // 0x3b9ce4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3b9ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3b9ce8:
    // 0x3b9ce8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b9cec:
    // 0x3b9cec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3b9cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b9cf0:
    // 0x3b9cf0: 0x886a0007  lwl         $t2, 0x7($v1)
    ctx->pc = 0x3b9cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_3b9cf4:
    // 0x3b9cf4: 0x986a0004  lwr         $t2, 0x4($v1)
    ctx->pc = 0x3b9cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_3b9cf8:
    // 0x3b9cf8: 0xa88a0007  swl         $t2, 0x7($a0)
    ctx->pc = 0x3b9cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9cfc:
    // 0x3b9cfc: 0xb88a0004  swr         $t2, 0x4($a0)
    ctx->pc = 0x3b9cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9d00:
    // 0x3b9d00: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3b9d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3b9d04:
    // 0x3b9d04: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b9d08:
    // 0x3b9d08: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3b9d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3b9d0c:
    // 0x3b9d0c: 0x886a0007  lwl         $t2, 0x7($v1)
    ctx->pc = 0x3b9d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_3b9d10:
    // 0x3b9d10: 0x986a0004  lwr         $t2, 0x4($v1)
    ctx->pc = 0x3b9d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_3b9d14:
    // 0x3b9d14: 0xa88a000b  swl         $t2, 0xB($a0)
    ctx->pc = 0x3b9d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9d18:
    // 0x3b9d18: 0xb88a0008  swr         $t2, 0x8($a0)
    ctx->pc = 0x3b9d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9d1c:
    // 0x3b9d1c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3b9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3b9d20:
    // 0x3b9d20: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b9d24:
    // 0x3b9d24: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3b9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3b9d28:
    // 0x3b9d28: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3b9d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_3b9d2c:
    // 0x3b9d2c: 0x886a0007  lwl         $t2, 0x7($v1)
    ctx->pc = 0x3b9d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_3b9d30:
    // 0x3b9d30: 0x986a0004  lwr         $t2, 0x4($v1)
    ctx->pc = 0x3b9d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_3b9d34:
    // 0x3b9d34: 0xa88a000f  swl         $t2, 0xF($a0)
    ctx->pc = 0x3b9d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9d38:
    // 0x3b9d38: 0xb88a000c  swr         $t2, 0xC($a0)
    ctx->pc = 0x3b9d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3b9d3c:
    // 0x3b9d3c: 0x14c0ffe0  bnez        $a2, . + 4 + (-0x20 << 2)
label_3b9d40:
    if (ctx->pc == 0x3B9D40u) {
        ctx->pc = 0x3B9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9D3Cu;
        // 0x3b9d40: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9D44u;
        goto label_3b9d44;
    }
    ctx->pc = 0x3B9D3Cu;
    {
        const bool branch_taken_0x3b9d3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9D3Cu;
        // 0x3b9d40: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9d3c) {
            ctx->pc = 0x3B9CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b9cc0;
        }
    }
    ctx->pc = 0x3B9D44u;
label_3b9d44:
    // 0x3b9d44: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x3b9d44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b9d48:
    // 0x3b9d48: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3b9d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b9d4c:
    // 0x3b9d4c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x3b9d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3b9d50:
    // 0x3b9d50: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3b9d50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_3b9d54:
    // 0x3b9d54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3b9d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3b9d58:
    // 0x3b9d58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b9d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b9d5c:
    // 0x3b9d5c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x3b9d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_3b9d60:
    // 0x3b9d60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b9d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b9d64:
    // 0x3b9d64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b9d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b9d68:
    // 0x3b9d68: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3b9d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b9d6c:
    // 0x3b9d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b9d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b9d70:
    // 0x3b9d70: 0x3e00008  jr          $ra
label_3b9d74:
    if (ctx->pc == 0x3B9D74u) {
        ctx->pc = 0x3B9D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9D70u;
        // 0x3b9d74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B9D78u;
        goto label_fallthrough_0x3b9d70;
    }
    ctx->pc = 0x3B9D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9D70u;
        // 0x3b9d74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b9d70:
    ctx->pc = 0x3B9D78u;
}
