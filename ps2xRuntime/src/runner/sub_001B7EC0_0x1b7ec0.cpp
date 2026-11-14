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

// Function: sub_001B7EC0
// Address: 0x1b7ec0 - 0x1b80d0
void sub_001B7EC0_0x1b7ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7EC0_0x1b7ec0");
#endif

    switch (ctx->pc) {
        case 0x1b7fa8u: goto label_1b7fa8;
        case 0x1b7fe4u: goto label_1b7fe4;
        case 0x1b8004u: goto label_1b8004;
        case 0x1b8028u: goto label_1b8028;
        case 0x1b8064u: goto label_1b8064;
        case 0x1b808cu: goto label_1b808c;
        case 0x1b80b8u: goto label_1b80b8;
        default: break;
    }

    ctx->pc = 0x1b7ec0u;

    // 0x1b7ec0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b7ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b7ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b7ec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7ed0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1b7ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1b7ed4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1b7ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1b7ed8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1b7ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1b7edc: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x1b7edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x1b7ee0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1b7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7ee4: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x1B7EE4u;
    {
        const bool branch_taken_0x1b7ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ee4) {
            ctx->pc = 0x1B80B8u;
            goto label_1b80b8;
        }
    }
    ctx->pc = 0x1B7EECu;
    // 0x1b7eec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7ef0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b7ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b7ef4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7ef8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b7efc: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1b7efcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b7f00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b7f04: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x1b7f04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1b7f08: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7F08u;
    {
        const bool branch_taken_0x1b7f08 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1b7f08) {
            ctx->pc = 0x1B7F18u;
            goto label_1b7f18;
        }
    }
    ctx->pc = 0x1B7F10u;
    // 0x1b7f10: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x1b7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1b7f14: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x1b7f14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_1b7f18:
    // 0x1b7f18: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7f1c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1b7f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b7f20: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1B7F20u;
    {
        const bool branch_taken_0x1b7f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f20) {
            ctx->pc = 0x1B8094u;
            goto label_1b8094;
        }
    }
    ctx->pc = 0x1B7F28u;
    // 0x1b7f28: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1b7f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b7f2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b7f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7f30: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1b7f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1b7f34: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7f38: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b7f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b7f3c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1b7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7f40: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b7f44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b7f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b7f48: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x1b7f48u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1b7f4c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7F4Cu;
    {
        const bool branch_taken_0x1b7f4c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1b7f4c) {
            ctx->pc = 0x1B7F5Cu;
            goto label_1b7f5c;
        }
    }
    ctx->pc = 0x1B7F54u;
    // 0x1b7f54: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1b7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1b7f58: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x1b7f58u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_1b7f5c:
    // 0x1b7f5c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7f60: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1b7f60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b7f64: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b7f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7f68: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1b7f68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b7f6c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B7F6Cu;
    {
        const bool branch_taken_0x1b7f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7f6c) {
            ctx->pc = 0x1B800Cu;
            goto label_1b800c;
        }
    }
    ctx->pc = 0x1B7F74u;
    // 0x1b7f74: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7f78: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b7f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b7f7c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7f80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b7f84: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1b7f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b7f88: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7f8c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7f90: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1b7f90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b7f94: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1b7f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b7f98: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b7f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b7f9c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1b7f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1b7fa0: 0xc06e10c  jal         func_1B8430
    ctx->pc = 0x1B7FA0u;
    SET_GPR_U32(ctx, 31, 0x1B7FA8u);
    ctx->pc = 0x1B8430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8430u, 0x1B7FA0u, 0x1B7FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7FA8u;
label_1b7fa8:
    // 0x1b7fa8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b7fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7fac: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b7facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7fb0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b7fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b7fb4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b7fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b7fb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7fbc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1b7fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1b7fc0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7fc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b7fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b7fc8: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x1b7fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b7fcc: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1b7fccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b7fd0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1b7fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7fd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b7fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7fd8: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1b7fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1b7fdc: 0xc06e0fc  jal         func_1B83F0
    ctx->pc = 0x1B7FDCu;
    SET_GPR_U32(ctx, 31, 0x1B7FE4u);
    ctx->pc = 0x1B83F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83F0u, 0x1B7FDCu, 0x1B7FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7FE4u;
label_1b7fe4:
    // 0x1b7fe4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7fe8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b7fec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1b7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7ff0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b7ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7ff4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1b7ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7ff8: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1b7ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1b7ffc: 0xc06e0e8  jal         func_1B83A0
    ctx->pc = 0x1B7FFCu;
    SET_GPR_U32(ctx, 31, 0x1B8004u);
    ctx->pc = 0x1B83A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83A0u, 0x1B7FFCu, 0x1B8004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8004u;
label_1b8004:
    // 0x1b8004: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1B8004u;
    {
        const bool branch_taken_0x1b8004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8004) {
            ctx->pc = 0x1B80B8u;
            goto label_1b80b8;
        }
    }
    ctx->pc = 0x1B800Cu;
label_1b800c:
    // 0x1b800c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b800cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8010: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b8010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b8014: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1b8014u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b8018: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1b8018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b801c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1b801cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1b8020: 0xc06e0c8  jal         func_1B8320
    ctx->pc = 0x1B8020u;
    SET_GPR_U32(ctx, 31, 0x1B8028u);
    ctx->pc = 0x1B8320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8320u, 0x1B8020u, 0x1B8028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8028u;
label_1b8028:
    // 0x1b8028: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b8028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b802c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1b802cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b8030: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1b8030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b8034: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1b8034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8038: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b8038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b803c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b8040: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b8040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1b8044: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1b8044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8048: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1b8048u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b804c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1b804cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b8050: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b8050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8054: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b8054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b8058: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1b8058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b805c: 0xc06e10c  jal         func_1B8430
    ctx->pc = 0x1B805Cu;
    SET_GPR_U32(ctx, 31, 0x1B8064u);
    ctx->pc = 0x1B8430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8430u, 0x1B805Cu, 0x1B8064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8064u;
label_1b8064:
    // 0x1b8064: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b8064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8068: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1b8068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b806c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b806cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b8070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b8074: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1b8074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1b8078: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1b8078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b807c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b807cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8080: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1b8080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1b8084: 0xc06e0e8  jal         func_1B83A0
    ctx->pc = 0x1B8084u;
    SET_GPR_U32(ctx, 31, 0x1B808Cu);
    ctx->pc = 0x1B83A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83A0u, 0x1B8084u, 0x1B808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B808Cu;
label_1b808c:
    // 0x1b808c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B808Cu;
    {
        const bool branch_taken_0x1b808c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b808c) {
            ctx->pc = 0x1B80B8u;
            goto label_1b80b8;
        }
    }
    ctx->pc = 0x1B8094u;
label_1b8094:
    // 0x1b8094: 0xa3a0003c  sb          $zero, 0x3C($sp)
    ctx->pc = 0x1b8094u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8098: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b8098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b809c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1b809cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b80a0: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1b80a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b80a4: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x1b80a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1b80a8: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x1b80a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b80ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b80acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b80b0: 0xc06e034  jal         func_1B80D0
    ctx->pc = 0x1B80B0u;
    SET_GPR_U32(ctx, 31, 0x1B80B8u);
    ctx->pc = 0x1B80D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80D0u, 0x1B80B0u, 0x1B80B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80B8u;
label_1b80b8:
    // 0x1b80b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b80b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b80bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b80bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b80c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b80c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b80c4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1b80c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b80c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B80C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B80C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B80D0u;
}
