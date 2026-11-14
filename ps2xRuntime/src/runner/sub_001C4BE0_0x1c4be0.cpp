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

// Function: sub_001C4BE0
// Address: 0x1c4be0 - 0x1c4df0
void sub_001C4BE0_0x1c4be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4BE0_0x1c4be0");
#endif

    switch (ctx->pc) {
        case 0x1c4cc8u: goto label_1c4cc8;
        case 0x1c4d04u: goto label_1c4d04;
        case 0x1c4d24u: goto label_1c4d24;
        case 0x1c4d48u: goto label_1c4d48;
        case 0x1c4d84u: goto label_1c4d84;
        case 0x1c4dacu: goto label_1c4dac;
        case 0x1c4dd8u: goto label_1c4dd8;
        default: break;
    }

    ctx->pc = 0x1c4be0u;

    // 0x1c4be0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c4be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c4be4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c4be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c4be8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c4bec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4bf0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1c4bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1c4bf4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1c4bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1c4bf8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1c4bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1c4bfc: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x1c4bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x1c4c00: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c4c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4c04: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x1C4C04u;
    {
        const bool branch_taken_0x1c4c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c04) {
            ctx->pc = 0x1C4DD8u;
            goto label_1c4dd8;
        }
    }
    ctx->pc = 0x1C4C0Cu;
    // 0x1c4c0c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4c10: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c4c14: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4c18: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1c4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c4c1c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1c4c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4c20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c4c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c4c24: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x1c4c24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1c4c28: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4C28u;
    {
        const bool branch_taken_0x1c4c28 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1c4c28) {
            ctx->pc = 0x1C4C38u;
            goto label_1c4c38;
        }
    }
    ctx->pc = 0x1C4C30u;
    // 0x1c4c30: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x1c4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1c4c34: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x1c4c34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_1c4c38:
    // 0x1c4c38: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1c4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4c3c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1c4c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c4c40: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1C4C40u;
    {
        const bool branch_taken_0x1c4c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c40) {
            ctx->pc = 0x1C4DB4u;
            goto label_1c4db4;
        }
    }
    ctx->pc = 0x1C4C48u;
    // 0x1c4c48: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1c4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c4c4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4c50: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1c4c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1c4c54: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c4c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4c58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c4c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c4c5c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1c4c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4c60: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c4c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4c64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c4c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c4c68: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x1c4c68u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1c4c6c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4C6Cu;
    {
        const bool branch_taken_0x1c4c6c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1c4c6c) {
            ctx->pc = 0x1C4C7Cu;
            goto label_1c4c7c;
        }
    }
    ctx->pc = 0x1C4C74u;
    // 0x1c4c74: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1c4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1c4c78: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x1c4c78u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_1c4c7c:
    // 0x1c4c7c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c4c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4c80: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1c4c80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c4c84: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1c4c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4c88: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1c4c88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1c4c8c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C4C8Cu;
    {
        const bool branch_taken_0x1c4c8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c8c) {
            ctx->pc = 0x1C4D2Cu;
            goto label_1c4d2c;
        }
    }
    ctx->pc = 0x1C4C94u;
    // 0x1c4c94: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c4c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4c98: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c4c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c4c9c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1c4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4ca0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c4ca4: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1c4ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4ca8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4cac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c4cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4cb0: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1c4cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4cb4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1c4cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c4cb8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1c4cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c4cbc: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1c4cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1c4cc0: 0xc056dc8  jal         func_15B720
    ctx->pc = 0x1C4CC0u;
    SET_GPR_U32(ctx, 31, 0x1C4CC8u);
    ctx->pc = 0x15B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B720u, 0x1C4CC0u, 0x1C4CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4CC8u;
label_1c4cc8:
    // 0x1c4cc8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c4cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4ccc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1c4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4cd0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c4cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c4cd4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c4cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c4cd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4cdc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1c4cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1c4ce0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1c4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4ce4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c4ce8: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x1c4ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c4cec: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1c4cecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4cf0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1c4cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4cf4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c4cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4cf8: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1c4cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c4cfc: 0xc056db8  jal         func_15B6E0
    ctx->pc = 0x1C4CFCu;
    SET_GPR_U32(ctx, 31, 0x1C4D04u);
    ctx->pc = 0x15B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B6E0u, 0x1C4CFCu, 0x1C4D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D04u;
label_1c4d04:
    // 0x1c4d04: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1c4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4d08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c4d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c4d0c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1c4d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4d10: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1c4d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4d14: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1c4d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4d18: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1c4d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c4d1c: 0xc056da4  jal         func_15B690
    ctx->pc = 0x1C4D1Cu;
    SET_GPR_U32(ctx, 31, 0x1C4D24u);
    ctx->pc = 0x15B690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B690u, 0x1C4D1Cu, 0x1C4D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D24u;
label_1c4d24:
    // 0x1c4d24: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1C4D24u;
    {
        const bool branch_taken_0x1c4d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4d24) {
            ctx->pc = 0x1C4DD8u;
            goto label_1c4dd8;
        }
    }
    ctx->pc = 0x1C4D2Cu;
label_1c4d2c:
    // 0x1c4d2c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c4d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4d30: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1c4d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4d34: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1c4d34u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c4d38: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1c4d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c4d3c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1c4d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c4d40: 0xc056d84  jal         func_15B610
    ctx->pc = 0x1C4D40u;
    SET_GPR_U32(ctx, 31, 0x1C4D48u);
    ctx->pc = 0x15B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B610u, 0x1C4D40u, 0x1C4D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D48u;
label_1c4d48:
    // 0x1c4d48: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1c4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4d4c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1c4d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c4d50: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1c4d50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c4d54: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4d58: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c4d5c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c4d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c4d60: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1c4d60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1c4d64: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c4d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4d68: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1c4d68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4d6c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1c4d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4d70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c4d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d74: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1c4d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c4d78: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1c4d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c4d7c: 0xc056dc8  jal         func_15B720
    ctx->pc = 0x1C4D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C4D84u);
    ctx->pc = 0x15B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B720u, 0x1C4D7Cu, 0x1C4D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D84u;
label_1c4d84:
    // 0x1c4d84: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c4d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4d88: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1c4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c4d8c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c4d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4d94: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1c4d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1c4d98: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1c4d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4d9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c4d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4da0: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1c4da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c4da4: 0xc056da4  jal         func_15B690
    ctx->pc = 0x1C4DA4u;
    SET_GPR_U32(ctx, 31, 0x1C4DACu);
    ctx->pc = 0x15B690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B690u, 0x1C4DA4u, 0x1C4DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4DACu;
label_1c4dac:
    // 0x1c4dac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C4DACu;
    {
        const bool branch_taken_0x1c4dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4dac) {
            ctx->pc = 0x1C4DD8u;
            goto label_1c4dd8;
        }
    }
    ctx->pc = 0x1C4DB4u;
label_1c4db4:
    // 0x1c4db4: 0xa3a0003c  sb          $zero, 0x3C($sp)
    ctx->pc = 0x1c4db4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4db8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c4db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4dbc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1c4dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4dc0: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1c4dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c4dc4: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x1c4dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c4dc8: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x1c4dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4dcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c4dccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4dd0: 0xc07137c  jal         func_1C4DF0
    ctx->pc = 0x1C4DD0u;
    SET_GPR_U32(ctx, 31, 0x1C4DD8u);
    ctx->pc = 0x1C4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4DF0u, 0x1C4DD0u, 0x1C4DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4DD8u;
label_1c4dd8:
    // 0x1c4dd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c4dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4ddc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4de4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1c4de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c4de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4DF0u;
}
