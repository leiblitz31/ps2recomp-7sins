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

// Function: sub_004659B0
// Address: 0x4659b0 - 0x465a50
void sub_004659B0_0x4659b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004659B0_0x4659b0");
#endif

    switch (ctx->pc) {
        case 0x4659ecu: goto label_4659ec;
        case 0x465a00u: goto label_465a00;
        default: break;
    }

    ctx->pc = 0x4659b0u;

    // 0x4659b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4659b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4659b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4659b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4659b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4659b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4659bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4659bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x4659c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x4659c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x4659c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4659c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4659c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4659c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4659cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4659CCu;
    {
        const bool branch_taken_0x4659cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4659cc) {
            ctx->pc = 0x4659E0u;
            goto label_4659e0;
        }
    }
    ctx->pc = 0x4659D4u;
    // 0x4659d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4659d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4659d8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4659D8u;
    {
        const bool branch_taken_0x4659d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4659d8) {
            ctx->pc = 0x465A3Cu;
            goto label_465a3c;
        }
    }
    ctx->pc = 0x4659E0u;
label_4659e0:
    // 0x4659e0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4659e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4659e4: 0xc04e240  jal         func_138900
    ctx->pc = 0x4659E4u;
    SET_GPR_U32(ctx, 31, 0x4659ECu);
    ctx->pc = 0x138900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138900u, 0x4659E4u, 0x4659ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4659ECu;
label_4659ec:
    // 0x4659ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4659ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4659f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4659f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4659f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4659f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4659f8: 0xc11929c  jal         func_464A70
    ctx->pc = 0x4659F8u;
    SET_GPR_U32(ctx, 31, 0x465A00u);
    ctx->pc = 0x464A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464A70u, 0x4659F8u, 0x465A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465A00u;
label_465a00:
    // 0x465a00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x465a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465a04: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x465A04u;
    {
        const bool branch_taken_0x465a04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x465a04) {
            ctx->pc = 0x465A18u;
            goto label_465a18;
        }
    }
    ctx->pc = 0x465A0Cu;
    // 0x465a0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x465a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x465a10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x465A10u;
    {
        const bool branch_taken_0x465a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465a10) {
            ctx->pc = 0x465A3Cu;
            goto label_465a3c;
        }
    }
    ctx->pc = 0x465A18u;
label_465a18:
    // 0x465a18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x465a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x465a1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x465a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x465a20: 0x2021823  subu        $v1, $s0, $v0
    ctx->pc = 0x465a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x465a24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x465a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x465a28: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x465a28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x465a2c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x465A2Cu;
    {
        const bool branch_taken_0x465a2c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x465a2c) {
            ctx->pc = 0x465A3Cu;
            goto label_465a3c;
        }
    }
    ctx->pc = 0x465A34u;
    // 0x465a34: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x465a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x465a38: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x465a38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_465a3c:
    // 0x465a3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x465a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x465a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x465a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465a44: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x465a44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x465a48: 0x3e00008  jr          $ra
    ctx->pc = 0x465A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465A50u;
}
