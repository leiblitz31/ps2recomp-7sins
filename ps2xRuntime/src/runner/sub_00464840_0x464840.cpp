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

// Function: sub_00464840
// Address: 0x464840 - 0x464980
void sub_00464840_0x464840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464840_0x464840");
#endif

    switch (ctx->pc) {
        case 0x4648a8u: goto label_4648a8;
        case 0x464914u: goto label_464914;
        case 0x464924u: goto label_464924;
        default: break;
    }

    ctx->pc = 0x464840u;

    // 0x464840: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x464840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x464844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x464844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x464848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x464848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x46484c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x464850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x464850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x464854: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x464858: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x464858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x46485c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x46485cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x464860: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x464860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464864: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x464864u;
    {
        const bool branch_taken_0x464864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x464864) {
            ctx->pc = 0x464890u;
            goto label_464890;
        }
    }
    ctx->pc = 0x46486Cu;
    // 0x46486c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x46486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x464870: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x464870u;
    {
        const bool branch_taken_0x464870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x464870) {
            ctx->pc = 0x464884u;
            goto label_464884;
        }
    }
    ctx->pc = 0x464878u;
    // 0x464878: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x464878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46487c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x46487Cu;
    {
        const bool branch_taken_0x46487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46487c) {
            ctx->pc = 0x464960u;
            goto label_464960;
        }
    }
    ctx->pc = 0x464884u;
label_464884:
    // 0x464884: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x464884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x464888: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x464888u;
    {
        const bool branch_taken_0x464888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464888) {
            ctx->pc = 0x464960u;
            goto label_464960;
        }
    }
    ctx->pc = 0x464890u;
label_464890:
    // 0x464890: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x464890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x464894: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x464894u;
    {
        const bool branch_taken_0x464894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x464894) {
            ctx->pc = 0x4648A8u;
            goto label_4648a8;
        }
    }
    ctx->pc = 0x46489Cu;
    // 0x46489c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4648a0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x4648A0u;
    {
        const bool branch_taken_0x4648a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4648a0) {
            ctx->pc = 0x464960u;
            goto label_464960;
        }
    }
    ctx->pc = 0x4648A8u;
label_4648a8:
    // 0x4648a8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4648a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4648ac: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x4648acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4648b0: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x4648b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4648b4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4648b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4648b8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x4648b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4648bc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x4648bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4648c0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x4648c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x4648c4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4648C4u;
    {
        const bool branch_taken_0x4648c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4648c4) {
            ctx->pc = 0x4648F0u;
            goto label_4648f0;
        }
    }
    ctx->pc = 0x4648CCu;
    // 0x4648cc: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x4648ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x4648d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4648D0u;
    {
        const bool branch_taken_0x4648d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4648d0) {
            ctx->pc = 0x4648E4u;
            goto label_4648e4;
        }
    }
    ctx->pc = 0x4648D8u;
    // 0x4648d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4648d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4648dc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x4648DCu;
    {
        const bool branch_taken_0x4648dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4648dc) {
            ctx->pc = 0x464960u;
            goto label_464960;
        }
    }
    ctx->pc = 0x4648E4u;
label_4648e4:
    // 0x4648e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4648e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4648e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4648E8u;
    {
        const bool branch_taken_0x4648e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4648e8) {
            ctx->pc = 0x464960u;
            goto label_464960;
        }
    }
    ctx->pc = 0x4648F0u;
label_4648f0:
    // 0x4648f0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x4648f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x4648f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4648F4u;
    {
        const bool branch_taken_0x4648f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4648f4) {
            ctx->pc = 0x464908u;
            goto label_464908;
        }
    }
    ctx->pc = 0x4648FCu;
    // 0x4648fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4648fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x464900: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x464900u;
    {
        const bool branch_taken_0x464900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464900) {
            ctx->pc = 0x464960u;
            goto label_464960;
        }
    }
    ctx->pc = 0x464908u;
label_464908:
    // 0x464908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x464908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46490c: 0xc1191ec  jal         func_4647B0
    ctx->pc = 0x46490Cu;
    SET_GPR_U32(ctx, 31, 0x464914u);
    ctx->pc = 0x4647B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4647B0u, 0x46490Cu, 0x464914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464914u;
label_464914:
    // 0x464914: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x464914u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x464918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x464918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46491c: 0xc1191ec  jal         func_4647B0
    ctx->pc = 0x46491Cu;
    SET_GPR_U32(ctx, 31, 0x464924u);
    ctx->pc = 0x4647B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4647B0u, 0x46491Cu, 0x464924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464924u;
label_464924:
    // 0x464924: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x464924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x464928: 0x2629023  subu        $s2, $s3, $v0
    ctx->pc = 0x464928u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x46492c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x46492Cu;
    {
        const bool branch_taken_0x46492c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46492c) {
            ctx->pc = 0x464940u;
            goto label_464940;
        }
    }
    ctx->pc = 0x464934u;
    // 0x464934: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x464934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464938: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x464938u;
    {
        const bool branch_taken_0x464938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464938) {
            ctx->pc = 0x464960u;
            goto label_464960;
        }
    }
    ctx->pc = 0x464940u;
label_464940:
    // 0x464940: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x464940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464944: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x464944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x464948: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x464948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x46494c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x46494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x464950: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x464950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x464954: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x464954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x464958: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x464958u;
    {
        const bool branch_taken_0x464958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464958) {
            ctx->pc = 0x4648A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4648a8;
        }
    }
    ctx->pc = 0x464960u;
label_464960:
    // 0x464960: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x464960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x464964: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x464964u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464968: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x464968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46496c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46496cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464974: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x464974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x464978: 0x3e00008  jr          $ra
    ctx->pc = 0x464978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464980u;
}
