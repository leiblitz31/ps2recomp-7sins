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

// Function: sub_00470770
// Address: 0x470770 - 0x4707f0
void sub_00470770_0x470770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470770_0x470770");
#endif

    switch (ctx->pc) {
        case 0x4707b4u: goto label_4707b4;
        case 0x4707c0u: goto label_4707c0;
        case 0x4707ccu: goto label_4707cc;
        default: break;
    }

    ctx->pc = 0x470770u;

    // 0x470770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x470770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x470774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x470774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x470778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x470778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47077c: 0x8f82c048  lw          $v0, -0x3FB8($gp)
    ctx->pc = 0x47077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950984)));
    // 0x470780: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x470780u;
    {
        const bool branch_taken_0x470780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470780) {
            ctx->pc = 0x470794u;
            goto label_470794;
        }
    }
    ctx->pc = 0x470788u;
    // 0x470788: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x470788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47078c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x47078Cu;
    {
        const bool branch_taken_0x47078c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47078c) {
            ctx->pc = 0x4707DCu;
            goto label_4707dc;
        }
    }
    ctx->pc = 0x470794u;
label_470794:
    // 0x470794: 0x8f82c050  lw          $v0, -0x3FB0($gp)
    ctx->pc = 0x470794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
    // 0x470798: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x470798u;
    {
        const bool branch_taken_0x470798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470798) {
            ctx->pc = 0x4707C4u;
            goto label_4707c4;
        }
    }
    ctx->pc = 0x4707A0u;
    // 0x4707a0: 0x8f82c050  lw          $v0, -0x3FB0($gp)
    ctx->pc = 0x4707a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
    // 0x4707a4: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x4707a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4707a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4707a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4707ac: 0xc1067c6  jal         func_419F18
    ctx->pc = 0x4707ACu;
    SET_GPR_U32(ctx, 31, 0x4707B4u);
    ctx->pc = 0x419F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419F18u, 0x4707ACu, 0x4707B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4707B4u;
label_4707b4:
    // 0x4707b4: 0x8f84c050  lw          $a0, -0x3FB0($gp)
    ctx->pc = 0x4707b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
    // 0x4707b8: 0xc105fc4  jal         func_417F10
    ctx->pc = 0x4707B8u;
    SET_GPR_U32(ctx, 31, 0x4707C0u);
    ctx->pc = 0x417F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417F10u, 0x4707B8u, 0x4707C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4707C0u;
label_4707c0:
    // 0x4707c0: 0xaf80c050  sw          $zero, -0x3FB0($gp)
    ctx->pc = 0x4707c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950992), GPR_U32(ctx, 0));
label_4707c4:
    // 0x4707c4: 0xc0eb8d6  jal         func_3AE358
    ctx->pc = 0x4707C4u;
    SET_GPR_U32(ctx, 31, 0x4707CCu);
    ctx->pc = 0x3AE358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE358u, 0x4707C4u, 0x4707CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4707CCu;
label_4707cc:
    // 0x4707cc: 0xaf80c04c  sw          $zero, -0x3FB4($gp)
    ctx->pc = 0x4707ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950988), GPR_U32(ctx, 0));
    // 0x4707d0: 0xaf80c048  sw          $zero, -0x3FB8($gp)
    ctx->pc = 0x4707d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950984), GPR_U32(ctx, 0));
    // 0x4707d4: 0xaf80c044  sw          $zero, -0x3FBC($gp)
    ctx->pc = 0x4707d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950980), GPR_U32(ctx, 0));
    // 0x4707d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4707d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4707dc:
    // 0x4707dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4707dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4707e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4707e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4707e4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4707e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4707e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4707E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4707E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4707F0u;
}
