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

// Function: sub_001EF430
// Address: 0x1ef430 - 0x1ef510
void sub_001EF430_0x1ef430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF430_0x1ef430");
#endif

    switch (ctx->pc) {
        case 0x1ef480u: goto label_1ef480;
        case 0x1ef4a4u: goto label_1ef4a4;
        case 0x1ef4ccu: goto label_1ef4cc;
        case 0x1ef4dcu: goto label_1ef4dc;
        case 0x1ef4f0u: goto label_1ef4f0;
        default: break;
    }

    ctx->pc = 0x1ef430u;

    // 0x1ef430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ef430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ef434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ef434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ef438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ef43c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ef43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ef440: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1ef440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1ef444: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1ef444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1ef448: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ef448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef44c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF44Cu;
    {
        const bool branch_taken_0x1ef44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef44c) {
            ctx->pc = 0x1EF460u;
            goto label_1ef460;
        }
    }
    ctx->pc = 0x1EF454u;
    // 0x1ef454: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1ef454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef458: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF458u;
    {
        const bool branch_taken_0x1ef458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef458) {
            ctx->pc = 0x1EF46Cu;
            goto label_1ef46c;
        }
    }
    ctx->pc = 0x1EF460u;
label_1ef460:
    // 0x1ef460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef464: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1EF464u;
    {
        const bool branch_taken_0x1ef464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef464) {
            ctx->pc = 0x1EF4F4u;
            goto label_1ef4f4;
        }
    }
    ctx->pc = 0x1EF46Cu;
label_1ef46c:
    // 0x1ef46c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ef46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef470: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ef470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef474: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1ef474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef478: 0xc07bd74  jal         func_1EF5D0
    ctx->pc = 0x1EF478u;
    SET_GPR_U32(ctx, 31, 0x1EF480u);
    ctx->pc = 0x1EF5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF5D0u, 0x1EF478u, 0x1EF480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF480u;
label_1ef480:
    // 0x1ef480: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF480u;
    {
        const bool branch_taken_0x1ef480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef480) {
            ctx->pc = 0x1EF4B0u;
            goto label_1ef4b0;
        }
    }
    ctx->pc = 0x1EF488u;
    // 0x1ef488: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ef488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef48c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ef48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef490: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1ef490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1ef494: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x1ef494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1ef498: 0x246400a4  addiu       $a0, $v1, 0xA4
    ctx->pc = 0x1ef498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
    // 0x1ef49c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EF49Cu;
    SET_GPR_U32(ctx, 31, 0x1EF4A4u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EF49Cu, 0x1EF4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF4A4u;
label_1ef4a4:
    // 0x1ef4a4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1ef4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef4a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF4A8u;
    {
        const bool branch_taken_0x1ef4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef4a8) {
            ctx->pc = 0x1EF4D0u;
            goto label_1ef4d0;
        }
    }
    ctx->pc = 0x1EF4B0u;
label_1ef4b0:
    // 0x1ef4b0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ef4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef4b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ef4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef4b8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1ef4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1ef4bc: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1ef4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ef4c0: 0x246400a4  addiu       $a0, $v1, 0xA4
    ctx->pc = 0x1ef4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
    // 0x1ef4c4: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EF4C4u;
    SET_GPR_U32(ctx, 31, 0x1EF4CCu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EF4C4u, 0x1EF4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF4CCu;
label_1ef4cc:
    // 0x1ef4cc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1ef4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ef4d0:
    // 0x1ef4d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ef4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef4d4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EF4D4u;
    SET_GPR_U32(ctx, 31, 0x1EF4DCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EF4D4u, 0x1EF4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF4DCu;
label_1ef4dc:
    // 0x1ef4dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ef4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef4e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ef4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef4e4: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1ef4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef4e8: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1EF4E8u;
    SET_GPR_U32(ctx, 31, 0x1EF4F0u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1EF4E8u, 0x1EF4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF4F0u;
label_1ef4f0:
    // 0x1ef4f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef4f4:
    // 0x1ef4f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ef4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef4f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef4fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ef4fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ef500: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF508u;
    // 0x1ef508: 0x0  nop
    ctx->pc = 0x1ef508u;
    // NOP
    // 0x1ef50c: 0x0  nop
    ctx->pc = 0x1ef50cu;
    // NOP
    ctx->pc = 0x1ef510u;
}
