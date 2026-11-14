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

// Function: sub_001C3F70
// Address: 0x1c3f70 - 0x1c4130
void sub_001C3F70_0x1c3f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3F70_0x1c3f70");
#endif

    switch (ctx->pc) {
        case 0x1c3fa8u: goto label_1c3fa8;
        case 0x1c3fb8u: goto label_1c3fb8;
        case 0x1c3fe4u: goto label_1c3fe4;
        case 0x1c3ff4u: goto label_1c3ff4;
        case 0x1c4028u: goto label_1c4028;
        case 0x1c405cu: goto label_1c405c;
        case 0x1c4074u: goto label_1c4074;
        case 0x1c4088u: goto label_1c4088;
        case 0x1c40b8u: goto label_1c40b8;
        case 0x1c40c4u: goto label_1c40c4;
        case 0x1c40f4u: goto label_1c40f4;
        default: break;
    }

    ctx->pc = 0x1c3f70u;

    // 0x1c3f70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c3f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c3f74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c3f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c3f78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c3f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c3f7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c3f80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c3f84: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1c3f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1c3f88: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1c3f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1c3f8c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1c3f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3f90: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3f94: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1C3F94u;
    {
        const bool branch_taken_0x1c3f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c3f94) {
            ctx->pc = 0x1C410Cu;
            goto label_1c410c;
        }
    }
    ctx->pc = 0x1C3F9Cu;
    // 0x1c3f9c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1c3f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3fa0: 0xc044598  jal         func_111660
    ctx->pc = 0x1C3FA0u;
    SET_GPR_U32(ctx, 31, 0x1C3FA8u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x1C3FA0u, 0x1C3FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FA8u;
label_1c3fa8:
    // 0x1c3fa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c3fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c3facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3fb0: 0xc0710b4  jal         func_1C42D0
    ctx->pc = 0x1C3FB0u;
    SET_GPR_U32(ctx, 31, 0x1C3FB8u);
    ctx->pc = 0x1C42D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42D0u, 0x1C3FB0u, 0x1C3FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FB8u;
label_1c3fb8:
    // 0x1c3fb8: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1c3fb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1c3fbc: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C3FBCu;
    {
        const bool branch_taken_0x1c3fbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3fbc) {
            ctx->pc = 0x1C401Cu;
            goto label_1c401c;
        }
    }
    ctx->pc = 0x1C3FC4u;
    // 0x1c3fc4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1c3fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3fc8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1c3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3fcc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c3fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c3fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fd4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1c3fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3fd8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1c3fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c3fdc: 0xc071098  jal         func_1C4260
    ctx->pc = 0x1C3FDCu;
    SET_GPR_U32(ctx, 31, 0x1C3FE4u);
    ctx->pc = 0x1C4260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4260u, 0x1C3FDCu, 0x1C3FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FE4u;
label_1c3fe4:
    // 0x1c3fe4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c3fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fe8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c3fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3fec: 0xc04455c  jal         func_111570
    ctx->pc = 0x1C3FECu;
    SET_GPR_U32(ctx, 31, 0x1C3FF4u);
    ctx->pc = 0x111570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111570u, 0x1C3FECu, 0x1C3FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FF4u;
label_1c3ff4:
    // 0x1c3ff4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3ff8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c3ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c3ffc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4000: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1c4000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c4004: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c4004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4008: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c4008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c400c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4010: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1c4010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1c4014: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1C4014u;
    {
        const bool branch_taken_0x1c4014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4014) {
            ctx->pc = 0x1C40F4u;
            goto label_1c40f4;
        }
    }
    ctx->pc = 0x1C401Cu;
label_1c401c:
    // 0x1c401c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c401cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4020: 0xc044598  jal         func_111660
    ctx->pc = 0x1C4020u;
    SET_GPR_U32(ctx, 31, 0x1C4028u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x1C4020u, 0x1C4028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4028u;
label_1c4028:
    // 0x1c4028: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1c4028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1c402c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C402Cu;
    {
        const bool branch_taken_0x1c402c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c402c) {
            ctx->pc = 0x1C407Cu;
            goto label_1c407c;
        }
    }
    ctx->pc = 0x1C4034u;
    // 0x1c4034: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1c4034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4038: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1c4038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c403c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4040: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x1c4040u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4044: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1c4044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4048: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1c4048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c404c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1c404cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4050: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1c4050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c4054: 0xc071088  jal         func_1C4220
    ctx->pc = 0x1C4054u;
    SET_GPR_U32(ctx, 31, 0x1C405Cu);
    ctx->pc = 0x1C4220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4220u, 0x1C4054u, 0x1C405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C405Cu;
label_1c405c:
    // 0x1c405c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c405cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4060: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c4060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4068: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1c4068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c406c: 0xc043a28  jal         func_10E8A0
    ctx->pc = 0x1C406Cu;
    SET_GPR_U32(ctx, 31, 0x1C4074u);
    ctx->pc = 0x10E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8A0u, 0x1C406Cu, 0x1C4074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4074u;
label_1c4074:
    // 0x1c4074: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1C4074u;
    {
        const bool branch_taken_0x1c4074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4074) {
            ctx->pc = 0x1C40F4u;
            goto label_1c40f4;
        }
    }
    ctx->pc = 0x1C407Cu;
label_1c407c:
    // 0x1c407c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c407cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4080: 0xc044598  jal         func_111660
    ctx->pc = 0x1C4080u;
    SET_GPR_U32(ctx, 31, 0x1C4088u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x1C4080u, 0x1C4088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4088u;
label_1c4088:
    // 0x1c4088: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c4088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c408c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1c408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4090: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c4090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4094: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1c4094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4098: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1c4098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c409c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c40a0: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1c40a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c40a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c40a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c40a8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1c40a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c40ac: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1c40acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1c40b0: 0xc071088  jal         func_1C4220
    ctx->pc = 0x1C40B0u;
    SET_GPR_U32(ctx, 31, 0x1C40B8u);
    ctx->pc = 0x1C4220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4220u, 0x1C40B0u, 0x1C40B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40B8u;
label_1c40b8:
    // 0x1c40b8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c40b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c40bc: 0xc044598  jal         func_111660
    ctx->pc = 0x1C40BCu;
    SET_GPR_U32(ctx, 31, 0x1C40C4u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x1C40BCu, 0x1C40C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40C4u;
label_1c40c4:
    // 0x1c40c4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c40c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c40c8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1c40c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c40cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c40d0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1c40d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c40d4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1c40d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c40d8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c40dc: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1c40dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c40e0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1c40e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c40e4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1c40e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c40e8: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1c40e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c40ec: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1C40ECu;
    SET_GPR_U32(ctx, 31, 0x1C40F4u);
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1C40ECu, 0x1C40F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C40F4u;
label_1c40f4:
    // 0x1c40f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c40f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c40f8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1c40f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c40fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4100: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c4100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4104: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c4104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4108: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1c4108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_1c410c:
    // 0x1c410c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4110: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c4110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4114: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c411c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c411cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4120: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1c4120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c4124: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C412Cu;
    // 0x1c412c: 0x0  nop
    ctx->pc = 0x1c412cu;
    // NOP
    ctx->pc = 0x1c4130u;
}
