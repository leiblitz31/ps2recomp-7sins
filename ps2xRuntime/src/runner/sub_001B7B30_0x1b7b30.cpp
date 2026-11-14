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

// Function: sub_001B7B30
// Address: 0x1b7b30 - 0x1b7d50
void sub_001B7B30_0x1b7b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7B30_0x1b7b30");
#endif

    switch (ctx->pc) {
        case 0x1b7c24u: goto label_1b7c24;
        case 0x1b7c60u: goto label_1b7c60;
        case 0x1b7c80u: goto label_1b7c80;
        case 0x1b7ca4u: goto label_1b7ca4;
        case 0x1b7ce0u: goto label_1b7ce0;
        case 0x1b7d08u: goto label_1b7d08;
        case 0x1b7d34u: goto label_1b7d34;
        default: break;
    }

    ctx->pc = 0x1b7b30u;

    // 0x1b7b30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b7b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b7b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b7b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7b40: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1b7b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1b7b44: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1b7b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1b7b48: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1b7b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1b7b4c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x1b7b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x1b7b50: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1b7b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7b54: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x1B7B54u;
    {
        const bool branch_taken_0x1b7b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b54) {
            ctx->pc = 0x1B7D34u;
            goto label_1b7d34;
        }
    }
    ctx->pc = 0x1B7B5Cu;
    // 0x1b7b5c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7b60: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b7b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b7b64: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7b68: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b7b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b7b6c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1b7b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b7b70: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b7b74: 0x418c3  sra         $v1, $a0, 3
    ctx->pc = 0x1b7b74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
    // 0x1b7b78: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7B78u;
    {
        const bool branch_taken_0x1b7b78 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1b7b78) {
            ctx->pc = 0x1B7B88u;
            goto label_1b7b88;
        }
    }
    ctx->pc = 0x1B7B80u;
    // 0x1b7b80: 0x24820007  addiu       $v0, $a0, 0x7
    ctx->pc = 0x1b7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1b7b84: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1b7b84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1b7b88:
    // 0x1b7b88: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7b8c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1b7b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b7b90: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1B7B90u;
    {
        const bool branch_taken_0x1b7b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b90) {
            ctx->pc = 0x1B7D10u;
            goto label_1b7d10;
        }
    }
    ctx->pc = 0x1B7B98u;
    // 0x1b7b98: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1b7b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b7b9c: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x1b7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1b7ba0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1b7ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7ba4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1b7ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7ba8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1b7ba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b7bac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b7bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b7bb0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7bb4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b7bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b7bb8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1b7bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7bbc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b7bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b7bc0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b7bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b7bc4: 0x388c3  sra         $s1, $v1, 3
    ctx->pc = 0x1b7bc4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1b7bc8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7BC8u;
    {
        const bool branch_taken_0x1b7bc8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1b7bc8) {
            ctx->pc = 0x1B7BD8u;
            goto label_1b7bd8;
        }
    }
    ctx->pc = 0x1B7BD0u;
    // 0x1b7bd0: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1b7bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1b7bd4: 0x288c3  sra         $s1, $v0, 3
    ctx->pc = 0x1b7bd4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 3));
label_1b7bd8:
    // 0x1b7bd8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7bdc: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1b7bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b7be0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7be4: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1b7be4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b7be8: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B7BE8u;
    {
        const bool branch_taken_0x1b7be8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7be8) {
            ctx->pc = 0x1B7C88u;
            goto label_1b7c88;
        }
    }
    ctx->pc = 0x1B7BF0u;
    // 0x1b7bf0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7bf4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b7bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b7bf8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7bfc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b7c00: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1b7c00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b7c04: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b7c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7c08: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7c0c: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x1b7c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b7c10: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1b7c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b7c14: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b7c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b7c18: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1b7c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1b7c1c: 0xc069cc8  jal         func_1A7320
    ctx->pc = 0x1B7C1Cu;
    SET_GPR_U32(ctx, 31, 0x1B7C24u);
    ctx->pc = 0x1A7320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7320u, 0x1B7C1Cu, 0x1B7C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C24u;
label_1b7c24:
    // 0x1b7c24: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b7c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7c28: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7c2c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1b7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b7c30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b7c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b7c34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7c38: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1b7c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1b7c3c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b7c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7c40: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b7c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b7c44: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x1b7c44u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b7c48: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1b7c48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b7c4c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1b7c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7c50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b7c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c54: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1b7c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1b7c58: 0xc06df7c  jal         func_1B7DF0
    ctx->pc = 0x1B7C58u;
    SET_GPR_U32(ctx, 31, 0x1B7C60u);
    ctx->pc = 0x1B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DF0u, 0x1B7C58u, 0x1B7C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C60u;
label_1b7c60:
    // 0x1b7c60: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b7c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7c64: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1b7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b7c68: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1b7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7c6c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b7c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7c70: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1b7c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7c74: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1b7c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1b7c78: 0xc06df64  jal         func_1B7D90
    ctx->pc = 0x1B7C78u;
    SET_GPR_U32(ctx, 31, 0x1B7C80u);
    ctx->pc = 0x1B7D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7D90u, 0x1B7C78u, 0x1B7C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7C80u;
label_1b7c80:
    // 0x1b7c80: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1B7C80u;
    {
        const bool branch_taken_0x1b7c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7c80) {
            ctx->pc = 0x1B7D34u;
            goto label_1b7d34;
        }
    }
    ctx->pc = 0x1B7C88u;
label_1b7c88:
    // 0x1b7c88: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7c8c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7c90: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1b7c90u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b7c94: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1b7c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b7c98: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1b7c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1b7c9c: 0xc06df54  jal         func_1B7D50
    ctx->pc = 0x1B7C9Cu;
    SET_GPR_U32(ctx, 31, 0x1B7CA4u);
    ctx->pc = 0x1B7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7D50u, 0x1B7C9Cu, 0x1B7CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CA4u;
label_1b7ca4:
    // 0x1b7ca4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7ca8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1b7ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b7cac: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1b7cacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1b7cb0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b7cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7cb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b7cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b7cb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b7cbc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b7cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1b7cc0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7cc4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1b7cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b7cc8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1b7cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7ccc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7cd0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b7cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b7cd4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1b7cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1b7cd8: 0xc069cc8  jal         func_1A7320
    ctx->pc = 0x1B7CD8u;
    SET_GPR_U32(ctx, 31, 0x1B7CE0u);
    ctx->pc = 0x1A7320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7320u, 0x1B7CD8u, 0x1B7CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CE0u;
label_1b7ce0:
    // 0x1b7ce0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b7ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7ce4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1b7ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1b7ce8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b7ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b7cec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7cf0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1b7cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1b7cf4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1b7cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7cf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7cfc: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1b7cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1b7d00: 0xc06df64  jal         func_1B7D90
    ctx->pc = 0x1B7D00u;
    SET_GPR_U32(ctx, 31, 0x1B7D08u);
    ctx->pc = 0x1B7D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7D90u, 0x1B7D00u, 0x1B7D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D08u;
label_1b7d08:
    // 0x1b7d08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B7D08u;
    {
        const bool branch_taken_0x1b7d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7d08) {
            ctx->pc = 0x1B7D34u;
            goto label_1b7d34;
        }
    }
    ctx->pc = 0x1B7D10u;
label_1b7d10:
    // 0x1b7d10: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1b7d10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b7d14: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b7d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7d18: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1b7d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7d1c: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1b7d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b7d20: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1b7d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b7d24: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x1b7d24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7d28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b7d28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d2c: 0xc069c1c  jal         func_1A7070
    ctx->pc = 0x1B7D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B7D34u);
    ctx->pc = 0x1A7070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7070u, 0x1B7D2Cu, 0x1B7D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7D34u;
label_1b7d34:
    // 0x1b7d34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b7d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7d38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7d3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7d40: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1b7d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b7d44: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7D4Cu;
    // 0x1b7d4c: 0x0  nop
    ctx->pc = 0x1b7d4cu;
    // NOP
    ctx->pc = 0x1b7d50u;
}
